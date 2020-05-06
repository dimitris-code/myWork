#include <iostream>
#include <vector>
#include <cctype>
#include <cmath>

#ifdef __cplusplus__
  #include <cstdlib>
#else
  #include <stdlib.h>
#endif


//  structure company {
        // newspares [54.000][][][][][][]  p.x. newaspapers[0] -- Monday - 54.000
        // magazines [][][][][][][]
//}

// structure company aetos1, aetos2, aetos3 ...
using  namespace std;

class Company{

    private:

        int newspapers[7];
        int magazines[7];
        string name;

    public:

        Company(){}

        Company(string name){

            this->name = name;

        }

        void setNewspapersAmount(int amount, int index){

            newspapers[index] = amount;

        }

        int getNewspapersAmount(int index){

            return newspapers[index];

        }

        void setMagazinesAmount(int amount, int index){

            magazines[index] = amount;

        }

        int getMagazinesAmount(int index){

            return magazines[index];

        }

        void setName(string name){

            this->name = name;

        }

        string getName(){

            return name;

        }

};

void printLogo(){
    cout << endl << endl;
    cout << "\t\t\t\t\t***********************" << endl;
    cout << "\t\t\t\t\t*** EAGLE 'A' STAND ***" << endl;
    cout << "\t\t\t\t\t***********************\n" << endl;
}


int showBasicMenu(){

    int num;

    do{

        if (system("CLS")) system("clear");

        cout << "(1) Newspaper or/and Magazine total quantity distribution for all sale points (per week)." << endl;
        cout << "(2) Newspaper and Magazine total quantity distribution per sale point (per week)." << endl;
        cout << "(3) Newspaper or Magazine total quantity distribution for all sale points (per week)." << endl;
        cout << "(4) Newspaper or Magazine total quantity distribution for all sale points for a given day of a week." << endl;
        cout << "(5) Newspaper or Magazine total quantity distribution for all sale points for a given number of months." << endl;
        cout << "(6) Newspaper or Magazine total quantity distribution for all sale points for a given number of months of a given day of a week." << endl;
        cout << "(7) Total profit per sale point or for all sale points for a given number of months for Newspapers or/and Magazines." << endl;

        cout << endl << "Enter your choice as number: ";
        cin >> num;


    }while((num < 1) || (num > 7));

    return num;
}

int showMenuCaseOf1_1(){
    int num;
    do{
                if (system("CLS")) system("clear");

                cout << "Newspaper or/and Magazine total quantity distribution for all sale points (per week): " << endl << endl;
                cout << "(1) Newspapers" << endl;
                cout << "(2) Magazines" << endl;
                cout << "(3) Both" << endl;
                cout << endl << "Enter your choice as number: ";
                cin >> num;
            }while(!((num >= 1) && (num <=3)));

    return num;
}

int showMenuCaseOf3(){

    int num;

    do{
                if (system("CLS")) system("clear");

                cout << "Newspaper or Magazine total quantity distribution for all sale points (per week):" << endl << endl;
                cout << "(1) Newspaper" << endl;
                cout << "(2) Magazine" << endl;
                cout << endl << "Enter your choice as number: ";
                cin >> num;
        }while(!((num >= 1) && (num <=2)));

    return num;
}

int showMenuCaseOf4(){

    int num;

    do{
                if (system("CLS")) system("clear");

                cout << "Newspaper or Magazine total quantity distribution for all sale points for a given day of a week:" << endl << endl;
                cout << "(1) Newspaper" << endl;
                cout << "(2) Magazine" << endl;
                cout << endl << "Enter your choice as number: ";
                cin >> num;
            }while(!((num >= 1) && (num <=2)));

    return num;

}

int showMenuCaseOf5(){

    int num;

    do{
                if (system("CLS")) system("clear");

                cout << "Newspaper or Magazine total quantity distribution for all sale points for a given number of months:" << endl << endl;
                cout << "(1) Newspaper" << endl;
                cout << "(2) Magazine" << endl;
                cout << "(3) Both" << endl;
                cout << endl << "Enter your choice as number: ";
                cin >> num;
        }while(!((num >= 1) && (num <=3)));

    return num;

}

int showMenuCaseOf6(){

    int num;

    do{
                if (system("CLS")) system("clear");

                cout << "Newspaper or Magazine total quantity distribution for all sale points for a given number of months of a given day of a week" << endl << endl;
                cout << "(1) Newspaper" << endl;
                cout << "(2) Magazine" << endl;
                cout << "(3) Both" << endl;
                cout << endl << "Enter your choice as number: ";
                cin >> num;
            }while(!((num >= 1) && (num <=3)));

    return num;

}

int showMenuCaseOf7(){
    int num;

    do{
                if (system("CLS")) system("clear");

                cout << "Total newspapers or/and magazines profit per sale point or for all companies for a given number of months" << endl << endl;
                cout << "(1) Newspapers profit per sale point" << endl;
                cout << "(2) Magazines profit per sale point" << endl;
                cout << "(3) Newspapers and magazines profit per sale point" << endl;
                cout << "(4) Newspapers profit for all companies" << endl;
                cout << "(5) Magazines profit for all companies" << endl;
                cout << "(6) Newspapers and magazines profit for all companies" << endl;
                cout << endl << "Enter your choice as number: ";
                cin >> num;
            }while(!((num >= 1) && (num <=6)));

    return num;

}

int main() {

    const int DAYSOFWEEK = 7;
    int i,j, result, usrDayIn, usrMonthIn;
    char usrIn;

    do{

        if (system("CLS")) system("clear");  /*cout << "\033[2J\033[0;0H";  CLEAR CONSOLE SCREEN ONLY ON REPLIT */

    vector<Company> companies{ {"Eagle Stand 1"}, {"Eagle Stand 2"}, {"Eagle Stand 3"}, {"Eagle Stand 4"}, {"Eagle Stand 5"}};

                                 //     Mo,   Tu,    We,    Th,     Fr,   Sa,       Su
    vector<int> totalWeekNewspapers {54000, 108000, 54000, 54000, 108000, 216000, 432000};
    vector<int> totalWeekMagazines {25000, 50000, 50000, 5000, 5000, 50000, 500000};


    /*cout << "Enter total amount of Monday's newaspapers: " << endl;
    cin >> companies[0];*/

    for(i = 0; i < companies.size(); i++){

        for(j = 0; j < DAYSOFWEEK; j++){

            companies[i].setNewspapersAmount(totalWeekNewspapers[j] / companies.size(), j);
            companies[i].setMagazinesAmount(totalWeekMagazines[j] / companies.size(), j);

        }

    }

    /*cout << "Eagle stand 3 Tuesday's total newspapers amount: " << companies[2].getNewspapersAmount(1) << endl;*/



    switch(showBasicMenu()){
        case 1:
            switch(showMenuCaseOf1_1()){


                case 1:
                    //function
                    result = 0;
                    for(i = 0; i < companies.size(); i++){
                        for(j = 0; j < DAYSOFWEEK; j++){
                            result += companies[i].getNewspapersAmount(j);
                        }
                    }
                    cout << "Total newspaper amount for all companies in a week is: " << result << endl;
                break;

                case 2:
                    //function
                    result = 0;
                    for(i = 0; i < companies.size(); i++){
                        for(j = 0; j < DAYSOFWEEK; j++){
                            result += companies[i].getMagazinesAmount(j);
                        }
                    }
                    cout << "Total magazines amount for all companies in a week is: " << result << endl;
                    break;

                case 3:
                    //function
                    result = 0;
                    for(i = 0; i < companies.size(); i++){
                        for(j = 0; j < DAYSOFWEEK; j++){
                            result += companies[i].getNewspapersAmount(j);
                            result += companies[i].getMagazinesAmount(j);
                        }
                    }
                    cout << "Total newspaper and magazines amount for all companies per week is: " << result << endl;
                    break;
            }

        break;

        case 2:
            //function
            if (system("CLS")) system("clear");
            result = 0;
            cout << "Total newspaper and magazines amount per company per week is: " << endl << endl;
                    for(i = 0; i < companies.size(); i++){
                        result = 0;

                        for(j = 0; j < DAYSOFWEEK; j++){
                            result += companies[i].getNewspapersAmount(j);
                            result += companies[i].getMagazinesAmount(j);

                        }
                        cout << endl << endl << companies[i].getName() << ": " << result << endl;
                    }
            break;

        case 3:
            switch(showMenuCaseOf3()){
                case 1:
                    //function
                    if (system("CLS")) system("clear");
                    result = 0;
                    cout << "Total newspaper amount per company per week is: " << endl << endl;
                            for(i = 0; i < companies.size(); i++){
                                result = 0;

                                for(j = 0; j < DAYSOFWEEK; j++){
                                    result += companies[i].getNewspapersAmount(j);
                                }
                                cout << endl << endl << companies[i].getName() << ": " << result << endl;
                            }
                    break;

                case 2:
                    //function
                    if (system("CLS")) system("clear");
                    result = 0;
                    cout << "Total magazines amount per company per week is: " << endl << endl;
                            for(i = 0; i < companies.size(); i++){
                                result = 0;

                                for(j = 0; j < DAYSOFWEEK; j++){
                                    result += companies[i].getMagazinesAmount(j);
                                }
                                cout << endl << endl << companies[i].getName() << ": " << result << endl;
                            }
                    break;
            }

            break;

        case 4:
            switch(showMenuCaseOf4()){
                case 1:
                    //function
                        do{
                            cout << "Enter weekday (1 for Monday - 7 for Sunday): ";
                            cin >> usrDayIn;
                        }while(  !((usrDayIn >= 1) && (usrDayIn <= 7))    );

                        if (system("CLS")) system("clear");
                        result = 0;
                        cout << "Total newspapers amount per company for this day is: " << endl << endl;
                                for(i = 0; i < companies.size(); i++){
                                    result = companies[i].getNewspapersAmount(usrDayIn -1);
                                    cout << endl << endl << companies[i].getName() << ": " << result << endl;
                                }
                break;

                case 2:
                    //function
                        do{
                            cout << "Enter weekday (1 for Monday - 7 for Sunday): ";
                            cin >> usrDayIn;
                        }while(  !((usrDayIn >= 1) && (usrDayIn <= 7))    );

                        if (system("CLS")) system("clear");
                        result = 0;
                        cout << "Total magazines amount per company for this day is: " << endl << endl;
                                for(i = 0; i < companies.size(); i++){
                                    result = companies[i].getMagazinesAmount(usrDayIn - 1);
                                    cout << endl << endl << companies[i].getName() << ": " << result << endl;
                                }
            }  // end of case 4

                break;
        break;

        case 5:
            switch(showMenuCaseOf5()){
                case 1:
                    //function
                        do{
                            cout << "Enter for how many months: ";
                            cin >> usrMonthIn;
                        }while(usrMonthIn <= 0);

                        if (system("CLS")) system("clear");
                        result = 0;
                        cout << "Total newspapers amount per company for " << usrMonthIn << " months is:" << endl << endl;
                            for(i = 0; i < companies.size(); i++){
                                result = 0;

                                for(j = 0; j < DAYSOFWEEK; j++){
                                    result += companies[i].getNewspapersAmount(j);
                                }
                                cout << endl << endl << companies[i].getName() << ": " << (result * 4 * usrMonthIn)  << endl;
                            }

                    break;

                case 2:
                    //function
                        do{
                            cout << "Enter for how many months: ";
                            cin >> usrMonthIn;
                        }while(usrMonthIn <= 0);

                        if (system("CLS")) system("clear");
                        result = 0;
                        cout << "Total magazines amount per company for " << usrMonthIn << " months is:" << endl << endl;
                            for(i = 0; i < companies.size(); i++){
                                result = 0;

                                for(j = 0; j < DAYSOFWEEK; j++){
                                    result += companies[i].getMagazinesAmount(j);
                                }
                                cout << endl << endl << companies[i].getName() << ": " << (result * 4 * usrMonthIn)  << endl;
                            }
                    break;

                case 3:
                    //function
                        do{
                            cout << "Enter for how many months: ";
                            cin >> usrMonthIn;
                        }while(usrMonthIn <= 0);

                        if (system("CLS")) system("clear");
                        result = 0;
                        cout << "Total newspapers and magazines amount per company for " << usrMonthIn << " months is:" << endl << endl;
                            for(i = 0; i < companies.size(); i++){
                                result = 0;

                                for(j = 0; j < DAYSOFWEEK; j++){
                                    result += (companies[i].getNewspapersAmount(j) + companies[i].getMagazinesAmount(j));
                                }
                                cout << endl << endl << companies[i].getName() << ": " << (result * 4 * usrMonthIn)  << endl;
                            }
                    break;

            }

            break;

        case 6:
            switch(showMenuCaseOf6()){
                case 1:
                    //function
                        do{
                            cout << "Enter for how many months: ";
                            cin >> usrMonthIn;
                        }while(usrMonthIn <= 0);

                        do{
                            cout << "Enter which weekday (1 for Monday - 7 for Sunday): ";
                            cin >> usrDayIn;
                        }while(!((usrDayIn >= 1) && (usrDayIn <= 7)));

                        if (system("CLS")) system("clear");
                        result = 0;
                        cout << "Total newspapers amount per company for " << usrMonthIn << " months for every " << usrDayIn << " day of the week is:" << endl << endl;
                            for(i = 0; i < companies.size(); i++){
                                //result = 0;

                                //for(j = 0; j < DAYSOFWEEK; j++){
                                result = (companies[i].getNewspapersAmount(usrDayIn-1));
                                //}
                                cout << endl << endl << companies[i].getName() << ": " << ((result * 4) * usrMonthIn)  << endl;
                            }
                    break;

                case 2:
                    //function
                        do{
                            cout << "Enter for how many months: ";
                            cin >> usrMonthIn;
                        }while(usrMonthIn <= 0);

                        do{
                            cout << "Enter which weekday (1 for Monday - 7 for Sunday): ";
                            cin >> usrDayIn;
                        }while(!((usrDayIn >= 1) && (usrDayIn <= 7)));

                        if (system("CLS")) system("clear");
                        result = 0;
                        cout << "Total magazines amount per company for " << usrMonthIn << " months for every " << usrDayIn << " day of the week is:" << endl << endl;
                            for(i = 0; i < companies.size(); i++){
                                result = (companies[i].getMagazinesAmount(usrDayIn - 1));
                                cout << endl << endl << companies[i].getName() << ": " << ((result * 4) * usrMonthIn)  << endl;
                            }
                    break;

                case 3:
                    //function
                        do{
                            cout << "Enter for how many months: ";
                            cin >> usrMonthIn;
                        }while(usrMonthIn <= 0);

                        do{
                            cout << "Enter which weekday (1 for Monday - 7 for Sunday): ";
                            cin >> usrDayIn;
                        }while(!((usrDayIn >= 1) && (usrDayIn <= 7)));

                        if (system("CLS")) system("clear");
                        result = 0;
                        cout << "Total newspapers and magazines amount per company for " << usrMonthIn << " months for every " << usrDayIn << " day of the week is:" << endl << endl;
                            for(i = 0; i < companies.size(); i++){
                                //result = 0;

                                //for(j = 0; j < DAYSOFWEEK; j++){
                                result = (companies[i].getNewspapersAmount(usrDayIn - 1) + companies[i].getMagazinesAmount(usrDayIn - 1));
                                //}
                                cout << endl << endl << companies[i].getName() << ": " << ((result * 4) * usrMonthIn)  << endl;
                            }
                    break;

            }

            break;

        case 7:
            //submenu
            switch(showMenuCaseOf7()){
                case 1 :
                //function
                        do{
                            cout << "Enter for how many months: ";
                            cin >> usrMonthIn;
                        }while(usrMonthIn <= 0);

                            if (system("CLS")) system("clear");
                            result = 0;
                            cout << "Total newspapers profit per sale point for " << usrMonthIn << " months is:" << endl << endl;
                            for(i = 0; i < companies.size(); i++){
                                result = 0;

                                for(j = 0; j < DAYSOFWEEK; j++){
                                    result += companies[i].getNewspapersAmount(j);
                                }
                                cout << endl << endl << companies[i].getName() << ": € " << ceil(((result * 4 * usrMonthIn) / companies.size()) * 1.5 * (0.6 / 100)) << endl;
                            }
                    break;

                case 2 :
                //function
                    do{
                            cout << "Enter for how many months: ";
                            cin >> usrMonthIn;
                        }while(usrMonthIn <= 0);

                            if (system("CLS")) system("clear");
                            result = 0;
                            cout << "Total magazines profit per sale point for " << usrMonthIn << " months is:" << endl << endl;
                            for(i = 0; i < companies.size(); i++){
                                result = 0;

                                for(j = 0; j < DAYSOFWEEK; j++){
                                    result += companies[i].getMagazinesAmount(j);
                                }
                                cout << endl << endl << companies[i].getName() << ": " << ceil(((result * 4 * usrMonthIn) / companies.size()) * 2.99 * (0.6 / 100))  << endl;
                            }

                    break;

                case 3 :
                //function
                    do{
                            cout << "Enter for how many months: ";
                            cin >> usrMonthIn;
                        }while(usrMonthIn <= 0);

                        if (system("CLS")) system("clear");
                        result = 0;
                        cout << "Total newspapers and magazines profit per company for " << usrMonthIn << " months is:" << endl << endl;
                            for(i = 0; i < companies.size(); i++){
                                result = 0;

                                for(j = 0; j < DAYSOFWEEK; j++){
                                    result += (companies[i].getNewspapersAmount(j) + companies[i].getMagazinesAmount(j));
                                }
                                cout << endl << endl << companies[i].getName() << ": " << ceil(((result * 4 * usrMonthIn) / companies.size()) * 1.5 * (0.6 / 100)) + ceil(((result * 4 * usrMonthIn) / companies.size()) * 2.99 * (0.6 / 100))  << endl;
                            }
                    break;

                case 4 :
                //function
                    do{
                            cout << "Enter for how many months: ";
                            cin >> usrMonthIn;
                        }while(usrMonthIn <= 0);

                            if (system("CLS")) system("clear");
                            result = 0;
                            cout << "Total newspapers profit for all companies for " << usrMonthIn << " months is:" << endl << endl;
                            for(i = 0; i < companies.size(); i++){
                                result = 0;

                                for(j = 0; j < DAYSOFWEEK; j++){
                                    result += companies[i].getNewspapersAmount(j);
                                }
                                cout << endl << endl << companies[i].getName() << ": " << ceil(((result * 4 * usrMonthIn) * companies.size()) * 1.5 * (0.6 / 100))  << endl;
                            }
                    break;

                case 5 :
                //function
                    do{
                            cout << "Enter for how many months: ";
                            cin >> usrMonthIn;
                        }while(usrMonthIn <= 0);

                            if (system("CLS")) system("clear");
                            result = 0;
                            cout << "Total magazines profit for all companies for " << usrMonthIn << " months is:" << endl << endl;
                            for(i = 0; i < companies.size(); i++){
                                result = 0;

                                for(j = 0; j < DAYSOFWEEK; j++){
                                    result += companies[i].getMagazinesAmount(j);
                                }
                                cout << endl << endl << companies[i].getName() << ": " << ceil(((result * 4 * usrMonthIn) * companies.size()) * 1.5 * (2.99 / 100))  << endl;
                            }
                    break;

                case 6 :
                //function
                    do{
                            cout << "Enter for how many months: ";
                            cin >> usrMonthIn;
                        }while(usrMonthIn <= 0);

                        if (system("CLS")) system("clear");
                        result = 0;
                        cout << "Total newspapers and magazines profit for all companies for " << usrMonthIn << " months is:" << endl << endl;
                            for(i = 0; i < companies.size(); i++){
                                result = 0;

                                for(j = 0; j < DAYSOFWEEK; j++){
                                    result += (companies[i].getNewspapersAmount(j) + companies[i].getMagazinesAmount(j));
                                }
                                cout << endl << endl << companies[i].getName() << ": " << ceil(((result * 4 * usrMonthIn) * companies.size()) * 1.5 * (0.6 / 100)) + ceil(((result * 4 * usrMonthIn) * companies.size()) * 2.99 * (0.6 / 100))  << endl;
                            }
                    break;

            break;


    }
    }

    cout << endl << "Return to main menu? (y/n): ";
    cin >> usrIn;

    usrIn = tolower(usrIn);

    }while(usrIn == 'y');
    return 0;
}
