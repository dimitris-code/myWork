//IN THIS PROGRAM I USE INHERITANCE

#include <iostream>
#include <string>

using namespace std;

class Wagon{
                //----------characteristics------------
    protected:

        string name = "";


    public:
                //----------setters & getters----------

        void setName(string name){
            this->name = name;
        }
        string getName(){
            return name;
        }


                //----------standard methods-----------

        void load(int x){
            cout << "\tLoaded " << x << " items ";
        }

        void unload(int x){
            cout << "\tUnloaded " << x << " items ";
        }

};

class Wagon_for_Persons : public Wagon{  //inheritance

                //----------characteristics------------

    private:
        int persons = 0;
        float exteriorLength;
        float exteriorWidth;

    public:

                //----------constructors--------------

        Wagon_for_Persons(string name, int persons){
            this->name = name;
            this->persons = persons;
        }

        Wagon_for_Persons(){}

        Wagon_for_Persons(string name, int persons, float exteriorLength, float exteriorWidth){
            this->name = name;
            this->persons = persons;
            this->exteriorLength = exteriorLength;
            this->exteriorWidth = exteriorWidth;
        }

                //-----------setters & getters------------

        void setPersons(int persons){
            this->persons = persons;
        }
        int getPersons(){
            return persons;
        }

        void setExteriorLength(float exteriorLength){
            this->exteriorLength = exteriorLength;
        }
        float getExteriorLength(){
            return exteriorLength;
        }

        void setExteriorWidth(float exteriorWidth){
            this->exteriorWidth = exteriorWidth;
        }

            //------------standard methods----------------

        void load(int x){
            persons += x; 
            Wagon:: load(x);
        }

        void unload(int x){
            persons -= x;  
            Wagon:: unload(x); 
        }

        void printMe(){
            cout << "\tWagon with name: " << name << " has " << persons << " Persons" << endl;
        }

          //-----------------my methods------------------

        void lastService(string name, int lastService){ 
            cout << "\t" << name << " last service: " << lastService << endl;
        }

        void stationLocation(string name, string stationLocation){
            cout << "\t" << name << " station location: " << stationLocation << endl;
        }

};

class Wagon_for_Luggages : public Wagon{

                //----------characteristics------------

    private:
        int luggages = 0;
        float size;
        string material;

    public:
                //------------constructors--------------


        Wagon_for_Luggages(string name, int luggages){
            this->name = name;
            this->luggages = luggages;
        }

        Wagon_for_Luggages(string name){
            this->name = name;
        }

        Wagon_for_Luggages(){}

        Wagon_for_Luggages(int luggages, float size, string material){
            this->luggages = luggages;
            this->size = size;
            this->material = material;
        }

                //-----------setters & getters------------

        void setLuggages(int luggages){
            this->luggages = luggages;
        }
        int getLuggages(){
            return luggages;
        }

        void setSize(float size){
            this->size = size;
        }
        float getSize(){
            return size;
        }

        void setMaterial(string material){
            this->material = material;
        }
        string getMaterial(){
            return material;
        }

                //------------standard methods----------------

        void load(int x){
            luggages += x; 
            Wagon:: load(x);
        }

        void unload(int x){
            luggages -= x;  
            Wagon:: unload(x);
        }

        void printMe(){
            cout << "\tWagon with name: " << name << " has " << luggages << " Luggages" << endl;  //inheritance
        }

                //---------------my methods-----------------

        void maxLuggageWeight(string name, float maxLuggageWeight){  //inheritance
            cout << "\t" << name << " maximum luggage weight: " << maxLuggageWeight << " Kg" << endl;
        }

        void luggageType(string name, string luggageType){  //inheritance
            cout << "\t" << name << " luggage type: " << luggageType << endl;
        }

};

class Wagon_for_Animals : public Wagon{ 

                //-----------characteristics----------------

    private:
        int animals =0;
        string mammals;
        string seaMammals;

    public:

                //------------constructors------------------


        Wagon_for_Animals(string name, int animals){
            this->name = name;
            this->animals = animals;
        }

        Wagon_for_Animals(){}

        Wagon_for_Animals(int animals, string mammals, string seaMammals){
            this->animals = animals;
            this->mammals = mammals;
            this->seaMammals = seaMammals;
        }

                    //-----------setters & getters-------------

        void setAnimals(int animals){
            this->animals = animals;
        }
        int getAnimals(){
            return animals;
        }

        void setMammals(string mammals){
            this->mammals = mammals;
        }
        string getMammals(){
            return mammals;
        }

        void setSeaMammals(string seaMammals){
            this->seaMammals = seaMammals;
        }
        string getSeaMammals(){
            return seaMammals;
        }

                    //----------standard methods--------------

        void load(int x){
            animals += x;  
            Wagon:: load(x); 
        }

        void unload(int x){
            animals -= x;  
            Wagon:: unload(x);  
        }

        void printMe(){
            cout << "\tWagon with name: " << name << " has " << animals << " Animals" << endl;  //inheritance
        }

                    //--------------my methods-----------------

        void species(string species){
            cout << "\t" << name << " is a " << species << endl;
        }

        void gender(string gender){
            cout << "\t" << name << " is a " << gender << endl;
        }



};

int main(){

    cout << "\n\t************************************" << endl;
    cout << "\t*                                  *" << endl;
    cout << "\t* DIMITRIS NIKOLOPOULOS: MY WAGONS *" << endl;
    cout << "\t*                                  *" << endl;
    cout << "\t************************************" << endl;

    //1.
    Wagon_for_Persons wp1("wp1", 100);
    Wagon_for_Persons wp2("wp2", 1);

    //2.
    cout << "\t-------------------------------------\n";
    wp2.load(wp1.getPersons() / 2);
    cout << "in " << wp2.getName() << endl;
    cout << "\t-------------------------------------\n";

    //3.
    wp1.unload(wp1.getPersons() - 90);
    cout << "from " << wp1.getName() << endl;
    wp2.load(wp1.getPersons() -80);
    cout << "to " << wp2.getName() << endl;
    cout << "\t-------------------------------------\n";

    //4.
    wp1.lastService(wp1.getName(), 2019);
    wp2.stationLocation(wp2.getName(), "Beijing");
    cout << "\t-------------------------------------\n";

    //5.
    Wagon_for_Luggages wlug1("wlug1");
    Wagon_for_Luggages wlug2("wlug2");

    //6.
    wlug1.load(wp1.getPersons() * 2);
    cout << "to " << wlug1.getName() << endl;
    cout << "\t-------------------------------------\n";


    //7.
    wlug2.load(wlug1.getLuggages() + wp2.getPersons());
    cout << "to " << wlug2.getName() << endl;
    cout << "\t-------------------------------------\n";


    //8.
    wlug2.unload(wlug2.getLuggages() / 2);
    cout << "from " << wlug2.getName() << endl;
    wlug1.load(wlug2.getLuggages() - 1);  //why -1 ?
    cout << "to " << wlug1.getName() << endl;
    cout << "\t-------------------------------------\n";


    //9.
    wlug1.maxLuggageWeight(wlug1.getName(), 5000);
    wlug2.luggageType(wlug2.getName(), "Soft");
    cout << "\t-------------------------------------\n";

    //10.
    Wagon_for_Animals wanim1("wanim1", 0);
    Wagon_for_Animals wanim2("wanim2", 50);

    //11.
    wanim2.unload(wanim2.getAnimals() / 2);
    cout << "from " << wanim2.getName() << endl;
    wanim1.load(wanim2.getAnimals());
    cout << "from " << wanim1.getName() << endl;
    cout << "\t-------------------------------------\n";


	//12.
    if(wlug1.getLuggages() < wlug2.getLuggages()){
      wanim1.load(wp1.getPersons());
      cout<< "to " << wanim1.getName() << endl;
    }
    else{
     wanim1.load(wp2.getPersons());
     cout<< "to " << wanim1.getName() << endl;
    }
	cout << "\t-------------------------------------\n";

	//13.
    wanim1.species("mammal section");
    wanim2.gender("male section");
    cout << "\t-------------------------------------\n";

    //14.
    wp1.printMe();
    wp2.printMe();
    cout << "\t-------------------------------------\n";

    //15.
    if(wanim1.getAnimals() > wanim2.getAnimals()){
        wanim1.printMe();
        wanim2.printMe();
    }
    else if(wanim2.getAnimals() > wanim1.getAnimals()){
        wanim2.printMe();
        wanim1.printMe();
    }
    cout << "\t-------------------------------------\n";

    //16.
    wlug1.printMe();
    wlug2.printMe();
    cout << "\t-------------------------------------\n";



    return 0;

}
