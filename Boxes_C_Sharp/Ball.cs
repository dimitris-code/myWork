using System;
using System.Collections.Generic;
using System.Text;

namespace MyCSharpBoxesProject
{
    class Ball
    {
        private string color;
        private string material;
        private double weight;

        public Ball() { }
        public Ball(string color, string material, double weight) {
            this.color = color;
            this.material = material;
            this.weight = weight;
        }

        public void setColor(string color)
        {
            this.color = color;
        }

        public string getColor()
        {
            return color;
        }

        public void setMaterial(string material)
        {
            this.material = material;
        }

        public string getMaterial()
        {
            return material;
        }

        public void setWeight(double weight)
        {
            this.weight = weight;
        }

        public double getWeight()
        {
            return weight;
        }

        // other methods
        public bool changeColorByMoreThanWeight(string color, double weight)
        {
            bool result = false;
            if(this.weight >= weight)
            {
                this.color = color;
                result = true;
            }
            return result;
        }

        public void printAll()
        {
            Console.WriteLine("Color: " + color + "\n" + "Material: " + material + "\n" + "Weight: " + weight + "\n");
        }
    }
}
