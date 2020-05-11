using System;
using System.Collections.Generic;
using System.Text;
using System.Collections;


namespace MyCSharpBoxesProject
{
    class Box
    {
        // characteristics
        private double height;
        private double width;
        private double length;
        private string material;
        private Ball[] content = new Ball[10];
        private double weight;


        // constructors
        public Box() { fillEmpty(); }
        public Box(double height, double width, double length, string material, double weight)
        {
            this.height = height;
            this.width = width;
            this.length = length;
            this.material = material;
            this.weight = weight;
            fillEmpty();
        }

        public Box(string material, double height, double width, double length)
        {
            this.material = material;
            this.height = height;
            this.width = width;
            this.length = length;
            fillEmpty();
        }


        // getters & setters
        public void setHeight(double height)
        {
            this.height = height;
        }

        public double getHeight()
        {
            return height;
        }

        public void setWidth(double width)
        {
            this.width = width;
        }

        public double getWidth()
        {
            return width;
        }

        public void setLength(double length)
        {
            this.length = length;
        }

        public double getLength()
        {
            return length;
        }

        public void setMaterial(string material)
        {
            this.material = material;
        }

        public string getMaterial()
        {
            return material;
        }

        public void setContent(Ball b)
        {
            bool flag = false;
            int i = 0;
            while((flag == false) && (i < 10))
            {
                if(content[i].getWeight() == 0)
                {
                    content[i] = b;
                    flag = true;
                }
                i++;
            }
        }

        public Ball getContent(int index)
        {
            return content[index];
        }

        public void setWeight(double weight)
        {
            this.weight = weight;
        }

        public double getWeight()
        {
            weight = 0;
            for(int i = 0; i < content.Length; i++)
            {
                if (content[i].getWeight() != 0)
                {
                    weight += content[i].getWeight();
                }
            }
            return weight;
        }

        // other methods
        public void fillEmpty()
        {
            for(int i = 0; i < content.Length; i++)
            {
                content[i] = new Ball(null, null, 0);
            }
        }

        public void removeFirst3()
        {
            if ((content[0].getMaterial() != null) && (content[1].getMaterial() != null) && (content[2].getMaterial() != null))
            {
                content[0] = new Ball(null, null, 0);
                content[1] = new Ball(null, null, 0);
                content[2] = new Ball(null, null, 0);
            }
            else
            {
                Console.WriteLine("Can't delete the first three cells, some cell is already empty!");
            }
        }

        public void removeAll()
        {
            for(int i = 0; i < content.Length; i++)
            {
                content[i] = null;
            }
        }

        public void removeAllByColor(string color)
        {
            for(int i = 0; i < content.Length; i++)
            {
                if(content[i].getColor() == color)
                {
                    content[i] = null;
                }
            }
        }

        public int getNumberByColor(string color)
        {
            int counter = 0;
            for(int i = 0; i < content.Length; i++)
            {
                if(content[i].getColor() == color)
                {
                    counter++;
                }
            }
            return counter;
        }

        public bool removeAllMoreThanByWeight(double weight)
        {
            bool result = false;
            for(int i = 0; i < content.Length; i++)
            {
                if(content[i].getWeight() >= weight)
                {
                    content[i] = new Ball(null, null, 0);
                    result = true;
                }
            }
            return result;
        }

        public bool removeAllLessThanByWeight(double weight)
        {
            bool result = false;
            for(int i = 0; i < content.Length; i++)
            {
                if(content[i].getWeight() <= weight)
                {
                    content[i] = null;
                    result = true;
                }
            }
            return result;
        }

        public bool removeAllByMaterial(string material)
        {
            bool result = false;
            for(int i = 0; i < content.Length; i++)
            {
                if(content[i].getMaterial() == material)
                {
                    content[i] = null;
                    result = true;
                }
            }
            return result;
        }

        public void changeColorByPosition(int index, string color)
        {
            content[index].setColor(color);
        }

        public void printAll()
        {
            Console.WriteLine("Height: " + height + "\n" + "Width: " + width + "\n" + "Length: " + length + "\n" + "Material: " + material);
            double boxWeight = 0;
            for(int i = 0; i < content.Length; i++)
            {
                if(content[i].getWeight() > 0)
                {
                    printAll();
                    Console.WriteLine("-------------");
                    boxWeight += content[i].getWeight();
                }
            }
            Console.WriteLine("Box weight: " + boxWeight + "kg");
        }

    }
}
