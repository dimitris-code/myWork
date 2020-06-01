using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Algo4
{
    class Program
    {
        static void Main(string[] args)
        {
            int conversionInput;
            string numbersInput = "";
            bool flag1 = false, flag2 = false;

            Console.Write("\tConversions\n\t-----------\n\t1.Hexadecimal to decimal\n\t2.Decimal to hexadecimal\n\t(<Enter> 3 to 6 digits only)\n\n\tEnter choice: ");
            conversionInput = Convert.ToInt32(Console.ReadLine());

            do
            {
                if (conversionInput == 1)  //hexadecimal to decimal
                {
                    Console.Write("\n\tEnter hexadecimal number: ");
                    numbersInput = Console.ReadLine();
                }
                else if (conversionInput == 2)  //decimal to hexadecimal
                {
                    Console.Write("\n\tEnter decimal number: ");
                    numbersInput = Console.ReadLine();
                }
                
                if (numbersInput.Length >= 3 && numbersInput.Length <= 6)
                {
                    if (!(Convert.ToInt32(numbersInput) >= (char)32 && Convert.ToInt32(numbersInput) <= (char)47) ||
                       (!(Convert.ToInt32(numbersInput) >= (char)58 && Convert.ToInt32(numbersInput) <= (char)64)) ||
                       (!(Convert.ToInt32(numbersInput) >= (char)71 && Convert.ToInt32(numbersInput) <= (char)96)) ||
                       (!(Convert.ToInt32(numbersInput) >= (char)103 && Convert.ToInt32(numbersInput) <= (char)127)))
                    {
                        if (conversionInput == 1)
                        {
                            ConvertToDec(numbersInput);  //hexadecimal to decimal function call
                            flag2 = true;
                        }
                        else if (conversionInput == 2)
                        {
                            DecimalToHexadecimal(Convert.ToInt32(numbersInput)); //decimal to hexadecimal function call
                            flag2 = true;
                        }
                    }
                    flag1 = true;
                }
            } while (flag1 == false && flag2 == false);

            Console.ReadLine();
        }

        //pre-populated table of hex-to-decimal values
        //20%-40% faster than Convert.ToInt32(...)
        private static sbyte[] unhex_table =
        { -1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1
         ,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1
         ,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1
         , 0, 1, 2, 3, 4, 5, 6, 7, 8, 9,-1,-1,-1,-1,-1,-1
         ,-1,10,11,12,13,14,15,-1,-1,-1,-1,-1,-1,-1,-1,-1
         ,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1
         ,-1,10,11,12,13,14,15,-1,-1,-1,-1,-1,-1,-1,-1,-1
         ,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1
        };

        private static int ConvertToDec(string hexNumber)
        {
            int decValue = unhex_table[(byte)hexNumber[0]];
            for (int i = 1; i < hexNumber.Length; i++)
            {
                decValue *= 16;
                decValue += unhex_table[(byte)hexNumber[i]];
            }
            Console.WriteLine($"\tDecimal number: {decValue}");
            return decValue;
        }
        private static string DecimalToHexadecimal(int dec)
        {
            if (dec < 1) return "0";

            int hex = dec;
            string hexStr = "";

            while (dec > 0)
            {
                hex = dec % 16;

                if (hex < 10)
                    hexStr = hexStr.Insert(0, Convert.ToChar(hex + 48).ToString());
                else
                    hexStr = hexStr.Insert(0, Convert.ToChar(hex + 55).ToString());

                dec /= 16;
            }
            Console.WriteLine($"\tHexadecimal number: {hexStr}");
            return hexStr;
        }
    }//end of class program
}//end of namespace
