#include <iostream>
#include <string.h>

using namespace std;


class Ball {

					  //----------properties----------
	private:

		string color;
		string material;
		double weight;

				       //----------methods------------
	public:

		            //----------constructors----------
		Ball(){}

		Ball(string color, string material, double weight) {
			this->color = color;
			this->material = material;
			this->weight = weight;
		}

		Ball(string color, string material) {  //myChoice constructor
			this->color = color;
			this->material = material;
		}

                                    //----------setters & getters----------

		void setColor(string color) {
			this->color = color;
		}

		string getColor() {
			return color;
		}

		void setMaterial(string material) {
			this->material = material;
		}

		string getMaterial() {
			return material;
		}

		void setWeight(double weight) {
			this->weight = weight;
		}

		double getWeight() {
			return weight;
		}

		           //----------other methods----------

		bool changeColorByMoreThanWeight(string color, double weight) {
			bool result = false;
			if (weight >= this->weight) {
				this->color = color;
				result = true;
			}

			return result;
		}

		void printall() {
			cout << "\t" <<    "-color: " << color << endl;
			cout << "\t" << "-material: " << material << endl;
			cout << "\t" <<   "-weight: " << weight << endl;
			cout << "\t--------------------------" << endl;
		}
};

class Box {
	                                  //--------------------properties--------------------
	private:

		double height;
		double width;
		double length;
		string material;
        Ball content[10];
		double weight;

		                                //--------------------methods--------------------
	public:

		                              //--------------------constructors--------------------

		Box(){ fillEmpty(); }

		Box(double height, double width, double length, string material, double weight) {
			this->height = height;
			this->width = width;
			this->length = length;
			this->material = material;
			this->weight = weight;
			fillEmpty();
		}

		Box(string material, double height, double width, double length){
            this->material = material;
            this->height = height;
            this->width = width;
            this->length = length;
            fillEmpty();
		}

		                                  //----------setters & getters----------

            /*void setMaterial(string material){
                this->material = material;
            }

            string getMaterial(){
                return material;
            }*/

            void setHeight(double height){
                this->height = height;
            }

            double getHeight(){
                return height;
            }

            void setWidth(double width){
                this->width = width;
            }

            double getWidth(){
                return width;
            }

            void setLength(double length){
                this->length = length;
            }

            double getLength(){
                return length;
            }

            double getWeight(){
                weight = 0.0;

                int i;
                for(i = 0; i < 10; i++){
                    if(content[i].getWeight() != 0.0){
                        weight += content[i].getWeight();
                    }
                }
                return weight;
            }


            //--------------------------------------- my other methods

            void fillEmpty(){
                int i;
                for(i = 0; i < 10; i++){
                    content[i] = Ball("NULL", "NULL", 0.0);
                }
            }

            void setContent(Ball b){
                int i = 0;
                bool flag = false;
                while((flag == false) && (i < 10)){  //or while(!flag)
                    if(content[i].getWeight() == 0.0){
                        content[i] = b;
                        flag = true;
                    }
                    i++;
                }
            }

            Ball getContent(int index){
                return content[index];
            }

                                //--------------------other methods--------------------

            void removeFirst3(){
                if((content[0].getMaterial() != "NULL") && (content[1].getMaterial() != "NULL") && (content[2].getMaterial() != "NULL")){
                    //delete
                    content[0] = Ball("NULL", "NULL", 0.0);
                    content[1] = Ball("NULL", "NULL", 0.0);
                    content[2] = Ball("NULL", "NULL", 0.0);
                }
                else{
                    //message
                    cout << "Cannot delete first 3 cells, some cell is already empty" << endl;
                }
            }

            void removeall(){
                int i;
                for(i = 0; i < 10; i++){
                    content[i] = Ball("NULL", "NULL", 0.0);
                }
            }

            void removeallbycolor(string color){
                int i;
                for(i = 0; i < 10; i++){
                    if(content[i].getColor() == color){
                        content[i] = Ball("NULL", "NULL", 0.0);
                    }
                }
            }

            int getnumberbycolor(string color){
                int i, counter = 0;
                for(i = 0; i < 10; i++){
                    if(content[i].getColor() == color){
                        counter++;
                    }
                }
                return counter;
            }

            bool removeallmorethanbyweight(double weight){
                int i;
                bool result = false;
                for(i = 0; i < 10; i++){
                    if(content[i].getWeight() >= weight){
                        content[i] = Ball("NULL", "NULL", 0.0);
                        result = true;
                    }
                }
                return result;
            }

            bool removealllessthanbyweight(double weight){
                int i;
                bool result = false;
                for(i = 0; i < 10; i++){
                    if(content[i].getWeight() <= weight){
                        content[i] = Ball("NULL", "NULL", 0.0);
                        result = true;
                    }
                }
                return result;
            }

            bool removeallbymaterial(string material){
                int i;
                bool result = false;
                for(i = 0; i < 10; i++){
                    if(content[i].getMaterial() == material){
                        content[i] = Ball("NULL", "NULL", 0.0);
                        result = true;
                    }
                }
                return result;
            }

            void changecolorbyposition(int index, string color){
                content[index].setColor(color);
            }



            void printall(){
                cout << "  height: " << height << endl;
                cout << "   width: " << width << endl;
                cout << "  length: " << length << endl;
                cout << "material: " << material << endl;

                int i;
                double weight = 0.0;
                for(i = 0; i < 10; i++){
                    if(content[i].getWeight() > 0){
                        printall();
                        cout << "\n----------- -------------" << endl;
                        weight += content[i].getWeight();
                    }
                }

                cout << " box weight: " <<  weight << endl;

            }
};


int main()
{
    //1.
    Box bx1("paper", 1.2, 1.3, 1.8);


    //2.
    Box bx2("wood", 2.2, 2.3, 2.5);


    //3.
    Ball b1("red", "metallic", 2.5);
    Ball b2("red", "metallic", 2.5);
    Ball b3("red", "metallic", 2.5);


    //4.
    Ball b4("red", "metallic", 1.5);
    Ball b5("red", "metallic", 1.5);


    //5.
    Ball b6("black", "plastic", 0.5);
    Ball b7("black", "plastic", 0.5);
    Ball b8("black", "plastic", 0.5);
    Ball b9("black", "plastic", 0.5);
    Ball b10("black", "plastic", 0.5);


    //6.
    Ball b11("white", "rubber", 1.1);
    Ball b12("white", "rubber", 1.1);
    Ball b13("white", "rubber", 1.1);
    Ball b14("white", "rubber", 1.1);
    Ball b15("white", "rubber", 1.1);


    //7
    Ball myballs[15];
    myballs[0] = b1;
    myballs[1] = b2;
    myballs[2] = b3;

    myballs[3] = b4;
    myballs[4] = b5;

    myballs[5] = b6;
    myballs[6] = b7;
    myballs[7] = b8;
    myballs[8] = b9;
    myballs[9] = b10;

    myballs[10] = b11;
    myballs[11] = b12;
    myballs[12] = b13;
    myballs[13] = b14;
    myballs[14] = b15;


    //8
    int i;
    for(i = 0; i < 15; i++){
        if(myballs[i].getColor() == "red"){
            bx2.setContent(myballs[i]);
        }
        if((myballs[i].getMaterial() == "rubber") || (myballs[i].getMaterial() == "plastic")){
            bx1.setContent(myballs[i]);
        }
    }


    //9.

    cout << "Wooden box weight: " << bx2.getWeight() << " Kg" << endl;

    cout << "Paper box weight: " << bx1.getWeight() << " Kg" << endl;

    //10

    bx2.removeFirst3();

    //11.
    for(i = 0; i < 10; i++){
        if(bx1.getContent(i).getColor() == "white"){
            bx1.changecolorbyposition(i, "yellow");
        }
    }

    //12.

    if(bx1.removeallmorethanbyweight(1.0)){
        cout << "All balls > 1.0 weight have been removed from the paper box!" << endl;
    }

    //13.

    for(i = 0; i < 10; i++){
        if(bx2.getContent(i).getMaterial() == "metallic"){
            bx2.getContent(i).printall();
        }
    }

    //14.
    Ball b16("blue", "rubber", 0.5);
    if(bx2.getContent(0).getWeight() == 0.0){
        bx2.setContent(b16);
        cout << "blue ball is in the wooden box!" << endl;
    }
    else{
        cout << "First position of the box is not empty!!" << endl;
    }

    //15.
    Ball b17("NULL", "NULL", 0.0);
    int counter = 0;
    for(i = 0; i < 10; i++){
        if((bx2.getContent(i).getColor() == "red") && (bx2.getContent(i).getMaterial() == "rubber")){
            counter++;
        }
    }
    cout << "There are " << counter << " red and metallic balls in the wooden box, nothing has been removed!" << endl;

    //16.
    cout << "Content of paper box: " << endl;
    for(i = 0; i < 10; i++){
            if(bx1.getContent(i).getWeight() != 0.0){
                bx1.getContent(i).printall();
            }
    }
    cout << "Paper box properties are: " << "Height: " << bx1.getHeight() << " m" << " Length: " << bx1.getLength() << " cm" << " Weight: " << bx1.getWeight() << " Kg" << " Width: " << bx1.getWidth() << " cm" << endl;

    cout << "Content of wooden box: " << endl;
    for(i = 0; i < 10; i++){
            if(bx2.getContent(i).getWeight() != 0.0){
                bx2.getContent(i).printall();
            }
    }
    cout << "Wooden box properties are: " << "Height: " << bx2.getHeight() << " m" << " Length: " << bx2.getLength() << " cm" << " Weight: " << bx2.getWeight() << " Kg" << " Width: " << bx2.getWidth() << " cm" << endl;


    cin.get();
    return 0;
}
