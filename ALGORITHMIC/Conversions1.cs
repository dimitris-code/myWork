using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Algo3
{
    class Program
    {
        static void Main(string[] args)
        {
            int conversionInput;
            string numbersInput = "";
            bool flag1 = false, flag2 = false;

            Console.Write("\tConversions\n\t-----------\n\t1.Decimal to binary\n\t2.Binary to decimal\n\t(<Enter> 3 to 6 digits only)\n\n\tEnter choice: ");
            conversionInput = Convert.ToInt32(Console.ReadLine());

            do
            {
                if (conversionInput == 1)  //decimal to binary
                {
                    Console.Write("\n\tEnter decimal number: ");
                    numbersInput = Console.ReadLine();

                }
                else if (conversionInput == 2)  //binary to decimal
                {
                    Console.Write("\n\tEnter binary number: ");
                    numbersInput = Console.ReadLine();
                }

                try
                {
                    if ((numbersInput.Length >= 3 && numbersInput.Length <= 6) 
                            && (!(numbersInput.ToUpper().Length >= 'A' && numbersInput.ToUpper().Length <= 'Z'))
                            && (!(numbersInput.Length >= (char)32 && numbersInput.Length <= (char)47)))
                    {
                        if (conversionInput == 1)
                        {
                            ToBin(int.Parse(numbersInput));  //decimal to binary function call
                            flag2 = true;
                        }
                        else if (conversionInput == 2)
                        {
                            ToDec(int.Parse(numbersInput)); //binary to decimal function call
                            flag2 = true;
                        }
                        flag1 = true;
                    }
                }
                catch (Exception e)
                {

                    Console.WriteLine(e.Message);
                }
                //}
            } while (flag1 == false && flag2 == false);

            Console.ReadLine();
        }
        private static string ToBin(int numbersInput)
        {
            int remainder = 0;
            string result = "";
            while (numbersInput > 0 || string.IsNullOrEmpty(result))
            {
                remainder = numbersInput % 2;
                numbersInput /= 2;
                result = remainder.ToString() + result;  //returns result backwards
                //result += remainder.ToString();  //returns result in normal order
            }
            Console.WriteLine($"\tBinary number: {result}");
            return result;
        }
        private static int ToDec(int numbersInput)
        {
            int decimalValue = 0;
            int base1 = 1;  // initializing base1 value to 1, i.e 2^0 
            int result = 0;

            while (numbersInput > 0)
            {
                int remainder = numbersInput % 10;
                numbersInput /= 10;
                decimalValue += remainder * base1;
                base1 *= 2;
            }
            result = decimalValue;
            Console.Write($"\tDecimal number: {decimalValue}");
            return result;
        }
    }
}
