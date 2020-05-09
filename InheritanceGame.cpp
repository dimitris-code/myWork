#include <iostream>
#include <string>
#include <list>

using namespace std;

//Monster base class
class Monster{

    protected:

            string name;

    public:

        Monster(){
            this->name = "NONAME";
        }

        Monster(string name){
            this->name = name;
        }

        virtual void update(){  //the keyword 'virtual' tells the compiler that it's a function that can be overwritten by its derived classes
            cout << "EMPTY UPDATE" << endl;
        }

        virtual void attack(){
            cout << name << " is attacking!" << endl;
        }

        void move(){
            cout << name << " is moving!" << endl;
        }

        string getName(){
            return name;
        }

};

//Spider derived class
class Spider : public Monster{

    private:

        int numberOfLegs;

    public:

        Spider(string name, int numberOfLegs):Monster(name){  //constructors can't be inherited
            this->numberOfLegs = numberOfLegs;
        }


        Spider(string name):Monster(name){  //constructors can't be inherited
            //this->name = name;
        }

        void update(){
            move();
            attack();
            climb();
        }

        virtual void attack(){
            cout << name << " is biting with her fangs!" << endl;
        }

        void climb(){
            cout << name << " is climbing!" << endl;
        }

};

//Goblin derived class
class Goblin : public Monster{

    private:
        string color;

    public:

        Goblin(string name, string color):Monster(name){
            this->color = color;
        }


        Goblin(string name):Monster(name){
            //this->name = name;
        }

        virtual void attack(){
            cout << name << " is slashing with his sword!" << endl;
        }

        void update(){
            move();
            attack();
        }
};

class Ork : public Monster{

    private:

        float height;

    public:

        Ork(){}

        Ork(float height, string name):Monster(name){
            this->height = height;
        }

        void attack(){
            cout << name << " is attacking with his axe!" << endl;
        }

        void update(){
            move();
            attack();
        }
};

int main(){

    //Polymorphism is when you can assign a pointer of a base class type using the inherited class type, and then you can update it.


    //we want to create Monster pointers, not Monster objects
    list <Monster *> monsters; //monsters meaning all the monsters in the game    null  [&702][&742]
    //list <Monster *>::iterator mit;  //syntax to make an iterator list. mit stands for monster iterator

    Spider spider("Silkie the spider");
    Goblin goblin("Grobets the goblin");  // monsters : <spider><goblin>
    Ork ork(2.0, "Gorbad the ork");

    monsters.push_back(&spider);
    monsters.push_back(&goblin);
    monsters.push_back(&ork);

    cout << " ------------------------ calling update from Spider Class" << endl;
    spider.update();

    ork.update();
    //goblin.update();

    cout << " ------------------------ calling update from Monster Class" << endl;
    monsters.front()->update();
    monsters.back()->update();

    //-------------------------------------------- iterators

    list<Monster *>::iterator it;
    for (auto const& i : monsters) {
    cout << i->getName();
}

    return 0;
}
