#include <iostream>
#include <vector>
#include <ctime>
#include <string>
#include <map>


using namespace std;

class Fish {
private:

    string type;
    int weight;
    int difficulty;

public:
    Fish() {};
    Fish(string type, int weight, int difficulty) {
        this->type = type;
        this->weight = weight;
        this->difficulty = difficulty;
    }

    void setType(string type) {
        this->type = type;
    }
    string getType() {
        return type;
    }

    void setWeight(int weight) {
        this->weight = weight;
    }
    int getWeight() {
        return weight;
    }

    void setDifficulty(int difficulty) {
        this->difficulty = difficulty;
    }
    int getDifficulty() {
        return difficulty;
    }

    int getTotalPoints() {
        return weight * difficulty;
    }

    void print() {
        cout << "Type of fish: " << type << endl;
        cout << "Weight of fish: " << weight << endl;
        cout << "Fishing difficulty: " << difficulty << endl;
    }

};

class Fisherman {
private:

    string name;
    vector<Fish> net;
    vector<Fish> junk;

public:

    Fisherman() { initJunk(); };
    Fisherman(string name) {
        this->name = name;
        initJunk();
    }

    void setName(string name) {
        this->name = name;
    }
    string getName() {
        return name;
    }

    void initJunk() {

        vector<string> junkNames{ "Boot", "Seaweed", "Bottle", "Wheel", "Tin can" };

        for (int i = 0; i < 5; i++) {
            junk.push_back(Fish(junkNames.at(rand() % junkNames.size()), 0, 0));
        }
    }

    //[fBoot, fSeaweed, fBoot, fWheel, fBottle]
    Fish getJunk() {
        return junk.at(rand() % junk.size());
    }

    int fishing(Fish f) {
        int result = 0;
        int luck = (rand() % 3) + 1;
        if (luck >= f.getDifficulty()) {
            result = f.getTotalPoints();
        }
        return result;

    }

    void netting(Fish f, int points) {
        if (points > 0) {
            net.push_back(f);
        }
        else {
            net.push_back(getJunk());
        }
    }

    void printNet() {
        int i = 1;
        cout << "Net contains these fish: " << endl;   // arithmetic operators: +,-, *, /, %, ++, -- relationsal operators: ==, !=, >=, <=, >, logical operators &&, ||, !
        if (!net.empty()) {
            for (vector<Fish>::iterator it = net.begin(); it != net.end(); ++it) {
                cout << "\n-------------------- (" << i << ")" << endl;
                it->print();
                i++;
            }
        }
        else {
            cout << "Net is empty!" << endl;
        }
    }

};

class Boat {
private:
    string name;
    vector<Fisherman> crew;  // <fman1, fman2, ..., fman6>
    vector<int> score;
    vector<Fish> catchX;

public:
    Boat() {};
    Boat(string name) {
        this->name = name;
    }

    void setName(string name) {
        this->name = name;
    }
    string getName() {
        return name;
    }

    void addFisherman(Fisherman f) {
        crew.push_back(f);
    }

    void printDashes(string s) {
        cout << endl;
        for (int i = 0; i < s.length(); i++) {
            cout << "-";
        }
        cout << endl;
    }

    void printFishermenContestStats(Fisherman fman, Fish f, int points) {
        string s = "Fisherman " + fman.getName() + " tries to catch fish with stats:";
        cout << "\n" << s;
        printDashes(s);
        f.print();
        string res = (points > 0) ? "got it!" : "lost it";
        cout << "result (points): " << points << "  (" << res << ")" << endl;
    }

    void startFishingContest(vector<Fish> waters) {
        int points = 0;
        score.clear();
        catchX.clear();

        if (crew.size() >= 2) {
            for (vector<Fisherman>::iterator it = crew.begin(); it != crew.end(); it++) {
                Fish f = waters.at(rand() % waters.size());
                points = it->fishing(f);
                score.push_back(points);
                if (points != 0) {
                    catchX.push_back(f);
                }
                else {
                    catchX.push_back(it->getJunk());
                }
                printFishermenContestStats(*it, f, points);
            }

        }
        // discover winner
        int max = 0, counter = 0;
        vector<int> potentialWinners{};
        string winner;
        for (vector<int>::iterator it = score.begin(); it != score.end(); it++) {
            if (max < *it) {
                max = *it;
                potentialWinners.clear();
                potentialWinners.push_back(counter); //3
                cout << "New max catch of fisherman: " << crew.at(counter).getName() << endl;
            }
            else if (max == *it) {
                potentialWinners.push_back(counter);
            }
            counter++;
        }
        cout << "\n\nThe winner(s) is: " << endl;  // print winner / winners
        for (vector<int>::iterator it = potentialWinners.begin(); it != potentialWinners.end(); it++) {
            winner = crew.at(*it).getName();
            cout << winner;
            printDashes(winner);
            cout << "The score  is: " << score.at(*it) << endl;
            cout << "--------------" << endl;
            cout << "Cook's Delight" << endl;
            cout << "--------------" << endl;
            catchX.at(*it).print();
            cout << endl;
        }
    }

    void startNettingContest(vector<Fish> waters, int times) {
        int points = 0;
        score.clear();

        if (crew.size() >= 2) {
            for (vector<Fisherman>::iterator it = crew.begin(); it != crew.end(); it++) {
                for (int i = 0; i < times; i++) {
                    Fish f = waters.at(rand() % waters.size());
                    points += it->fishing(f);
                }
                if (points != 0) {
                    score.push_back(points);
                }
            }
            // discover winner
            int max = 0, posOfMax = 0, counter = 0;
            for (vector<int>::iterator it = score.begin(); it != score.end(); it++) {
                if (max < *it) {
                    max = *it;
                    posOfMax = counter;
                }
                counter++;
            }
            cout << "The winner is: " << crew.at(posOfMax).getName() << endl;
            cout << "The score  is: " << score.at(posOfMax) << endl;
        }
    }

};


vector<Fish> init_waters(int max_fish_no) {

    srand(time(0));

    static vector<Fish> waters;


    map<string, int> names{ {"carp", 14}, {"catfish", 170}, {"cod", 53}, {"salmon", 26}, {"whiteShark", 1100}, {"burbot", 19}, {"sunfish", 1000}, {"bluefin tuna", 380}, {"red snapper", 13}, {"albacore", 33} };  // 13, 14, 19, 26, 33, 53, 170, 380, 1000, 1100
    // length -->  1100 x ? = 6;

    //create 50 fish with random type, weight, difficulty
    // 1
    int randomWeight = 0, thisDifficulty = 0;
    for (int i = 0; i < max_fish_no; i++) {

        //get random string type from map names
        auto it = names.begin();
        advance(it, rand() % names.size());
        string random_key = it->first;

        // for the random fish get a random weight from 1 to value of names[random_key]
        randomWeight = (rand() % names[random_key]) + 1;

        if (randomWeight >= 1 && randomWeight <= 26) {
            thisDifficulty = 1;
        }
        else if (randomWeight > 26 && randomWeight <= 380) {
            thisDifficulty = 2;
        }
        else {
            thisDifficulty = 3;
        }																     //0x377abba
        waters.push_back(Fish(random_key, randomWeight, thisDifficulty));  // RAM [[][][][][][][][][][][]......[]]
    }

    return waters;

}

//---------------------------------------------------------- mains


int main() {

    vector<Fish> waters;
    int max_fish_no = 50, score, i;
    Fish f;
    srand(time(0));

    //1
    waters = init_waters(max_fish_no);// waters --> 0x377abba

    //2
    for (i = 0; i < max_fish_no; i++) {
        waters.at(i).print();
        cout << "--------------------" << endl;
    }

    //3
    Fisherman fman1("Thanos");

    //4
    f = waters.at(rand() % max_fish_no);
    score = fman1.fishing(f);

    //5
    cout << "\n\nFisherman " << fman1.getName() << " tries to catch fish: " << endl;
    f.print();
    string message = (score != 0) ? "Lucky" : "Unlucky";
    cout << message << " fisherman " << fman1.getName() << " got " << score << " points!" << endl;

    //6
    for (i = 0; i < 15; i++) {

        f = waters.at(rand() % max_fish_no);
        score = fman1.fishing(f);
        fman1.netting(f, score);
    }

    //7
    fman1.printNet();

    //8

    Fisherman fman2("John");
    Fisherman fman3("Paul");
    Fisherman fman4("George");
    Fisherman fman5("Steve");
    Fisherman fman6("James");


    //9
    Boat b1("Galini");

    //10
    b1.addFisherman(fman1);
    b1.addFisherman(fman2);
    b1.addFisherman(fman3);
    b1.addFisherman(fman4);
    b1.addFisherman(fman5);
    b1.addFisherman(fman6);

    cout << "\n\nStart fishing contest\n";
    cout << "---------------------\n";

    //11
    b1.startFishingContest(waters);

    cout << "\nStart netting contest\n";
    cout << "---------------------\n";


    //12
    b1.startNettingContest(waters, max_fish_no);

    cin.get();
    return 0;
}
