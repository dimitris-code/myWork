#include <iostream>
#include <string>

using namespace std;

class BlackPanther{
    //-------------------------properties:
    private:
        int age;
        string habitat;
        float weight;
        bool sex;
        bool breedDone;
   //-------------------------------------------methods:
    public:
        //---------------------constructors:

        BlackPanther(){breedDone = false;}

        BlackPanther(int age, string habitat, float weight, bool sex, bool breedDone){
            this->age = age;
            this->habitat = habitat;
            this->weight = weight;
            this->sex = sex;
            this->breedDone = false;
        }

        BlackPanther(string habitat, bool sex){
            this->habitat = habitat;
            this->sex = sex;
            breedDone = false;
        }
        //------------------setters - getters:
        void setAge(int age){
            this->age = age;
        }

        int getAge(){
            return age;
        }

        void setHabitat(string habitat){
            this->habitat = habitat;
        }

        string getHabitat(){
            return habitat;
        }

        void setWeight(float weight){
            this->weight = weight;
        }

        float getWeight(){
            return weight;
        }

        void setSex(bool sex){
            this->sex = sex;
        }

        bool getSex(){
            return sex;
        }

        void setBreedDone(bool breedDone){
            this->breedDone = breedDone;
        }

        bool getBreedDone(){
            return breedDone;
        }

        //-----------------other methods:
        float eatAnimal(int gainWeight){
            weight += (gainWeight * 0.01);
            //weight = (gainWeight * 0.01) + weight;
            return weight;
        }

        string breed(bool oppositeSex, string animDomain){
            string result = "Breed can't occur";
            if((sex != oppositeSex) && (habitat == animDomain)){
                result = "Breed occur";
                breedDone = true;
            }
            return result;
        }

        void searchFood(){
            age++;
        }

        string displaySexAsString(bool sex){
            string result = "female";
            if(sex == 1){
                result = "male";
            }
            return result;
        }

        string displayBreedDoneAsString(bool breedDone){
            string result = "No";
            if(breedDone == 1){
                result = "Yes";
            }
            return result;
        }

        
};


static void programTitle(){
            cout << "\n\t\t\t**************************\n" << "\t\t\t* Black Panther Survival *\n\t\t\t**************************" << endl;
        }

static void endProgram(){
            cout << "\n\nPress <Enter> to exit...";
            cin.get();
        }


int main()
{

    // 1
    BlackPanther b1("Africa", false);
    BlackPanther b2("Africa", true);
    BlackPanther b3("S.Asia", false);

    // 2
    b1.setAge(4);
    b2.setAge(4);
    b3.setAge(4);

    // 3
    b1.setWeight(20.0);
    b2.setWeight(20.0);
    b3.setWeight(20.0);

    // 4
    b1.eatAnimal(7);
    b2.eatAnimal(5);
    b3.eatAnimal(13);

    //cout << "b1 weight: " << b1.getWeight() << endl << b2.getWeight() << endl << b3.getWeight() << endl;  //..to check if eatAnimal() method is valid

    //Program title
    programTitle();

    // 5
    cout << "\n        ----------------------------------------------------HEAVIEST-----------------" << endl;
    if(b1.getWeight() >= b2.getWeight() && b1.getWeight() >= b3.getWeight()){
        cout << "\tHeaviest b1-panther tries to breed with b2-panther: " << b1.breed(b2.getSex(), b2.getHabitat()) << endl;
        cout << "\tHeaviest b1-panther tries to breed with b2-panther: " << b1.breed(b2.getSex(), b2.getHabitat()) << endl;
    }
    else if(b2.getWeight() >= b1.getWeight() && b2.getWeight() >= b3.getWeight()){
        cout << "\tHeaviest b2-panther tries to breed with b1-panther: " << b2.breed(b1.getSex(), b1.getHabitat()) << endl;
        cout << "\tHeaviest b2-panther tries to breed with b3-panther: " << b2.breed(b3.getSex(), b3.getHabitat()) << endl;
    }
    else{
        cout << "\tHeaviest b3-panther tries to breed with b1-panther: " << b3.breed(b1.getSex(), b1.getHabitat()) << endl;
        cout << "\tHeaviest b3-panther tries to breed with b2-panther: " << b3.breed(b2.getSex(), b2.getHabitat()) << endl;
    }
    cout << "        -----------------------------------------------------LIGHTEST----------------" << endl;

    // 6
    if(b1.getWeight() <= b2.getWeight() && b1.getWeight() <= b3.getWeight()){
        cout << "\tLightest b1-panther tries to breed with b2-panther: " << b1.breed(b2.getSex(), b2.getHabitat()) << endl;
        cout << "\tLightest b1-panther tries to breed with b2-panther: " << b1.breed(b2.getSex(), b2.getHabitat()) << endl;
    }
    else if(b2.getWeight() <= b1.getWeight() && b2.getWeight() <= b3.getWeight()){
        cout << "\tLightest b2-panther tries to breed with b1-panther: " << b2.breed(b1.getSex(), b1.getHabitat()) << endl;
        cout << "\tLightest b2-panther tries to breed with b3-panther: " << b2.breed(b3.getSex(), b3.getHabitat()) << endl;
    }
    else{
        cout << "\tLightest b3-panther tries to breed with b1-panther: " << b3.breed(b1.getSex(), b1.getHabitat()) << endl;
        cout << "\tLightest b3-panther tries to breed with b2-panther: " << b3.breed(b2.getSex(), b2.getHabitat()) << endl;
    }

    // 7
    b1.searchFood();
    b3.searchFood();

    //cout << b1.getAge() << endl << b2.getAge() << endl << b3.getAge() << endl; //..to check if searchFood() method is valid

    cout << "        -------------------------------------------------------YOUNGEST--------------" << endl;

    // 8
    if(b1.getAge() <= b2.getAge() && b1.getAge() <= b3.getAge()){
        cout << "\tYoungest b1-panther tries to breed with b2-panther: " << b1.breed(b2.getSex(), b2.getHabitat()) << endl;
        cout << "\tYoungest b1-panther tries to breed with b3-panther: " << b1.breed(b3.getSex(), b3.getHabitat()) << endl;
    }
    else if(b2.getAge() <= b1.getAge() && b2.getAge() <= b3.getAge()){
        cout << "\tYoungest b2-panther tries to breed with b1-panther: " << b2.breed(b1.getSex(), b1.getHabitat()) << endl;
        cout << "\tYoungest b2-panther tries to breed with b3-panther: " << b2.breed(b3.getSex(), b3.getHabitat()) << endl;
    }
    else{
        cout << "\tYoungest b3-panther tries to breed with b1-panther: " << b3.breed(b1.getSex(), b1.getHabitat()) << endl;
        cout << "\tYoungest b3-panther tries to breed with b2-panther: " << b3.breed(b2.getSex(), b2.getHabitat()) << endl;
    }


    // 9
    if((b1.getBreedDone() != 1)){
        b1.setAge(b1.getAge() + 2);
    }
    else if(b2.getBreedDone() != 1){
        b2.setAge(b2.getAge() + 2);
    }
    else if(b3.getBreedDone() != 1){
        b3.setAge(b3.getAge() + 2);
        //cout << b3.getAge() << endl;  //..to check if getBreedDone() method is valid
    }

    // 10
    cout << "\t---------------------------------------------------------------------" << endl;

    cout << "\tb1-panther age: " << b1.getAge() << " years old" << endl << "\tb2-panther age: " << b2.getAge() << " years old" << endl << "\tb3-panther age: " << b3.getAge() << " years old" << endl;

    cout << "\t---------------------------------" << endl;

    cout << "\tb1-panther habitat region: " << b1.getHabitat() << endl << "\tb2-panther habitat region: " << b2.getHabitat() << endl << "\tb3-panther habitat region: " << b3.getHabitat() << endl;

    cout << "\t---------------------------------" << endl;

    cout << "\tb1-panther weight: " << b1.getWeight() << endl << "\tb2-panther weight: " << b2.getWeight() << endl << "\tb3-panther weight: " << b3.getWeight() << endl;

    cout << "\t------------------------" << endl;

    //display '0' as female and '1' as male
    cout << "\tb1-panther sex: " << b1.displaySexAsString(b1.getSex())<< endl << "\tb2-panther sex: " << b2.displaySexAsString(b2.getSex()) << endl << "\tb3-panther sex: " << b3.displaySexAsString(b3.getSex()) << endl;

    cout << "\t--------------------------" << endl;

    //display '0' as No and '1' as Yes
    cout << "\tb1-panther breed done: " << b1.displayBreedDoneAsString(b1.getBreedDone()) << endl << "\tb2-panther breed done: " << b2.displayBreedDoneAsString(b2.getBreedDone()) << endl << "\tb3-panther breed done: " << b3.displayBreedDoneAsString(b3.getBreedDone()) << endl;

    cout << "\t--------------------------" << endl;


    endProgram();
    return 0;
}
