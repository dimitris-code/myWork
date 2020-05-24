using System;
using System.Collections.Generic;
using System.Globalization;
using System.Linq;
using System.Runtime.CompilerServices;
using System.Text;
using System.Text.RegularExpressions;
using System.Threading.Tasks;

namespace StringProject
{
    class Program
    {
        static void Main(string[] args)
        {
            int i, j;
            string name;
            bool result = false;
            string spChars = "!@#$%^&*()_-=+{};:'\"|/?.>,<`~1234567890 ";

            Console.Write("Enter a name from 6 to 12 letters, (no numbers, no symbols, no spaces: ");
            name = Console.ReadLine();

            do
            {
                if (name.Length >= 6 && name.Length <= 12)
                {
                    result = true;
                    for (i = 0; i < name.Length; i++)
                    {
                        for (j = 0; j < spChars.Length; j++)
                        {
                            try
                            {
                                if (name[i] == spChars[j])
                                {
                                    result = false;
                                    Console.Write("\nEnter a name from 6 to 12 letters, (no numbers, no symbols, no spaces: ");
                                    name = Console.ReadLine();
                                }
                            }
                            catch (Exception)
                            {
                                Console.Write("");
                            }
                        }
                    }
                }
                else
                {
                    Console.Write("Enter a name from 6 to 12 letters, (no numbers, no symbols, no spaces: ");
                    name = Console.ReadLine();
                }
            } while (result == false);

            Console.WriteLine("\n\n\tThe computer will print the name you've entered in several ways!");
            Console.WriteLine("\t----------------------------------------------------------------\n");

            //------------------------------------------------------------------------------------------------

            //1
            Console.Write("\t*The name you've entered (backwards) is: ");
            for (i = name.Length - 1; i >= 0; i--)
            {
                Console.Write(name[i]);
            }


            //2
            Console.Write("\n\n\t*Every odd index position in lower case letter and\n\t every even index position in capital case letter: ");
            for (i = 0; i < name.Length; i++)
            {
                Console.Write(char.ToLower(name[i]));
                i++;
                Console.Write(char.ToUpper(name[i]));
            }


            //3
            Console.Write("\n\n\t*Every odd index position in Unicode is: ");
            for (i = 0; i < name.Length; i++)
            {
                Console.Write((int)(name[i]) + " ");
                i++;
                Console.Write(name[i] + " ");
            }


            //4
            Console.Write("\n\n\t*Name you've entered in descending alphabetical order: ");
            char[] arr1;
            char ch;
            int l;

            l = name.Length;
            arr1 = name.ToCharArray(0, l);

            for (i = 1; i < l; i++)
            {
                for (j = 0; j < l - i; j++)
                {
                    if (arr1[j] < arr1[j + 1])
                    {
                        ch = arr1[j];
                        arr1[j] = arr1[j + 1];
                        arr1[j + 1] = ch;
                    }
                }
            }

            foreach (char c in arr1)
            {
                ch = c;
                Console.Write("{0} ", ch);
            }



            //5
            Console.Write("\n\n\t*The name you've entered by replacing each index position with its next in the alphabet: ");
            char[] arr2 = { 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z' };
            l = name.Length;
            arr1 = name.ToCharArray(0, l);

            for (i = 0; i < arr1.Length; i++)
            {
                for (j = 0; j < arr2.Length; j++)
                {
                    if (arr1[i] == arr2[j])
                    {
                        if (arr1[i] == 'z')
                        {
                            arr1[i] = 'a';
                        }
                        else
                        {
                            arr1[i] = arr2[j + 1];
                        }
                        break;

                    }
                }

            }



            for (i = 0; i < arr1.Length; i++)
            {
                Console.Write(arr1[i]);
            }



            //6
            Console.Write("\n\n\t*position of letters in alphabet index: ");
            char[] arrAlphabet = { 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z' };
            int[] arr3 = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26 };
            l = name.Length;
            arr1 = name.ToCharArray(0, l);

            for (i = 0; i < arr1.Length; i++)
            {
                for (j = 0; j < arrAlphabet.Length; j++)
                {
                    if (arr1[i] == arrAlphabet[j])
                    {
                        Console.Write(arr3[j]);
                        if (i != arr1.Length - 1)
                        {
                            Console.Write(", ");
                        }
                        break;

                    }
                }

            }







            //7
            Console.Write("\n\n\t*Consonants before vowels: ");


            char[] sentence = new char[100];
            char[] ch1 = new char[100], ch2 = new char[100];
            
            int vowels = 0, consonants = 0, special = 0, n;
           
            for (i = 0; i < arr1.Length; i++)
            {
                sentence[i] = arr1[i];
            }
            for (i = 0; sentence[i] != '\0'; i++)
            {
                if ((sentence[i] == 'a' || sentence[i] == 'e' || sentence[i] ==
                'i' || sentence[i] == 'o' || sentence[i] == 'u') ||
                (sentence[i] == 'A' || sentence[i] == 'E' || sentence[i] ==
                'I' || sentence[i] == 'O' || sentence[i] == 'U'))
                {
                    vowels = vowels + 1;
                    arr1[i] = sentence[i];
                    ch1[i] = arr1[i];
                }
                else
                {
                    consonants = consonants + 1;
                    arr1[i] = sentence[i];
                    ch2[i] = arr1[i];
                    Console.Write(ch2[i]);
                }
                
                if (sentence[i] == 't' || sentence[i] == '\0' || sentence[i] == ' ')
                {
                    special = special + 1;
                }
                
            }
            consonants = consonants - special;

            for (i = 0; i < ch1.Length; i++)
            {
                Console.Write(ch1[i]);
            }



           
            



            //------------------End of program------------------
            Console.ReadLine();

        }  //program
    }  //class
}  //namespace

