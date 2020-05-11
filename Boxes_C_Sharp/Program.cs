using MyCSharpBoxesProject;
using System;
using System.Collections.Generic;
using System.Text;

namespace myCSharpBoxesProject
{
    class Program
    {
        static void Main(string[] args)
        {
            //1
            Box box1 = new Box("Paper", 1.2, 1.3, 1.8);

            //2
            Box box2 = new Box("Wood" , 2.2, 2.3, 2.5);

            //3
            Ball ball1 = new Ball("Red", "Metallic", 2.5);
            Ball ball2 = new Ball("Red", "Metallic", 2.5);
            Ball ball3 = new Ball("Red", "Metallic", 2.5);

            //4
            Ball ball4 = new Ball("Red", "Metallic", 1.5);
            Ball ball5 = new Ball("Red", "Metallic", 1.5);

            //5
            Ball ball6 = new Ball("Black", "Plastic", 0.5);
            Ball ball7 = new Ball("Black", "Plastic", 0.5);
            Ball ball8 = new Ball("Black", "Plastic", 0.5);
            Ball ball9 = new Ball("Black", "Plastic", 0.5);
            Ball ball10 = new Ball("Black", "Plastic", 0.5);

            //6
            Ball ball11 = new Ball("White", "Rubber", 1.1);
            Ball ball12 = new Ball("White", "Rubber", 1.1);
            Ball ball13 = new Ball("White", "Rubber", 1.1);
            Ball ball14 = new Ball("White", "Rubber", 1.1);
            Ball ball15 = new Ball("White", "Rubber", 1.1);

            //7
            Ball[] myBalls = new Ball[15];
            myBalls[0] = ball1;
            myBalls[1] = ball2;
            myBalls[2] = ball3;

            myBalls[3] = ball4;
            myBalls[4] = ball5;

            myBalls[5] = ball6;
            myBalls[6] = ball7;
            myBalls[7] = ball8;
            myBalls[8] = ball9;
            myBalls[9] = ball10;

            myBalls[10] = ball11;
            myBalls[11] = ball12;
            myBalls[12] = ball13;
            myBalls[13] = ball14;
            myBalls[14] = ball15;

            for(int i = 0; i < myBalls.Length; i++)
            {
                if((myBalls[i].getColor() == "Red"))
                {
                    box2.setContent(myBalls[i]);
                }
                if((myBalls[i].getMaterial() == "Rubber") || (myBalls[i].getMaterial() == "Plastic"))
                {
                    box1.setContent(myBalls[i]);
                }
            }


            //8
            Console.WriteLine("Wooden box weight: " + box2.getWeight() + "kg." + "\n"
                             + "Paper box weight: " + box1.getWeight() + "kg." + "\n");


            //9
            box2.removeFirst3();
            Console.WriteLine("Removed first three balls. Wooden box weight: " + box2.getWeight() + "kg" + "\n");


            //10
            int counter = 0;
            for(int i = 0; i < 10; i++)  // 10 is the number of plastic and rubber balls inside the paper box
            {
                if(box1.getContent(i).getColor() == "White")
                {
                    box1.changeColorByPosition(i, "Yellow");
                    counter++;
                }
            }
            Console.WriteLine("Number of white balls that turned to yellow: " + counter);


            //11
            if (box1.removeAllMoreThanByWeight(1))
            {
                Console.WriteLine("\nAll balls with weight more than 1Kg have been removed from the paper box.");
            }


            //12
            Console.WriteLine("\nWooden box metallic balls");
            for(int i = 0; i < 10; i++)
            {
                if(box2.getContent(i).getMaterial() == "Metallic")
                {
                    box2.getContent(i).printAll();
                }
            }


            //13
            Ball ball16 = new Ball("Blue", "Rubber", 0.5);
            if (box2.getContent(0).getWeight() == 0)
                {
                    box2.setContent(ball16);
                    Console.WriteLine("Blue ball is in the wooden box." + "\n");
                }
            else
            {
                Console.WriteLine("First position of the box is not empty.");
            }

            
            //14
            Ball ball17 = new Ball(null, null, 0);
            for(int i = 0; i < 10; i++)
            {
                if ((box2.getContent(i).getColor() == "Red") && (box2.getContent(i).getMaterial() == "Metallic"))
                {
                    box2.setContent(ball17);
                }
            }
            Console.WriteLine("All red metallic balls have been removed from the wooden box.");



            //15
            Console.WriteLine("\nContent of paper box: ");
            for (int i = 0; i < 10; i++)
            {
                if (box1.getContent(i).getWeight() != 0)
                {
                    box1.getContent(i).printAll();
                }
            }
            Console.WriteLine("Paper box properties\n"
                                + "Height: " + box1.getHeight() + "m" + "\n"
                                + "Length: " + box1.getLength() + "cm" + "\n"
                                + "Weight: " + box1.getWeight() + "kg" + "\n"
                                + "Width: " + box1.getWidth() + "cm" + "\n");

            //-----------------

            Console.WriteLine("Content of wooden box: ");
            for (int i = 0; i < 10; i++)
            {
                if (box2.getContent(i).getWeight() != 0)
                {
                    box2.getContent(i).printAll();
                }
            }
            Console.WriteLine("Wooden box properties\n"
                                + "Height: " + box2.getHeight() + "m" + "\n"
                                + "Length: " + box2.getLength() + "cm" + "\n"
                                + "Weight: " + box2.getWeight() + "kg" + "\n"
                                + "Width: " + box2.getWidth() + "cm" + "\n");

            Console.ReadLine();
        }
    }
}
