/*
ΥΛΟΠΟΙΗΣΤΕ ΕΝΑ ΠΡΟΓΡΑΜΜΑ ΓΙΑ ΝΑ ΕΛΕΓΞΕΤΕ ΑΠΟ ΔΥΟ ΤΡΙΨΗΦΙΟΥΣ ΑΚΕΡΑΙΟΥΣ ΠΟΥ ΔΙΝΕΙ Ο ΧΡΗΣΤΗΣ
ΑΠΟ ΤΟ ΠΛΗΚΤΡΟΛΟΓΙΟ ΣΤΟ ΔΙΑΣΤΗΜΑ [-999, +999] ΜΕ ΕΛΕΓΧΟ ΕΙΣΟΔΟΥ (ΑΜΥΝΤΙΚΟΣ ΠΡΟΓΡΑΜΜΑΤΙΣΜΟΣ),
ΕΑΝ ΚΑΠΟΙΟΣ ΕΙΝΑΙ ΘΕΤΙΚΟΣ 'Η ΑΝ ΕΙΝΑΙ ΑΡΝΗΤΙΚΟΣ ΕΤΣΙ ΩΣΤΕ:
    * ΑΝ ΚΑΙ ΟΙ ΔΥΟ ΑΡΙΘΜΟΙ ΕΙΝΑΙ ΘΕΤΙΚΟΙ, ΤΟΤΕ ΕΠΙΣΤΡΕΦΕΙ ΤΟ ΑΘΡΟΙΣΜΑ ΤΟΥΣ,
      ΑΝ ΚΑΙ ΟΙ ΔΥΟ ΑΡΙΘΜΟΙ ΕΙΝΑΙ ΑΡΝΗΤΙΚΟΙ, ΤΟΤΕ ΕΠΙΣΤΡΕΦΕΙ ΤΗ ΔΙΑΦΟΡΑ ΤΟΥΣ
      ΚΑΙ ΑΝ ΕΧΟΥΝ ΔΙΑΦΟΡΕΤΙΚΟ ΠΡΟΣΗΜΟ, ΤΟΤΕ ΕΠΙΣΤΡΕΦΕΙ ΤΟ ΓΙΝΟΜΕΝΟ ΤΟΥΣ.
    * ΕΠΙΠΛΕΟΝ, ΑΝ ΟΙ ΔΥΟ ΑΡΙΘΜΟΙ ΕΙΝΑΙ ΙΣΟΙ, ΤΟΤΕ ΑΛΛΑΖΕΙ ΤΟ ΠΡΟΣΗΜΟ ΤΟΥ ΠΡΟΗΓΟΥΜΕΝΟΥ ΥΠΟΕΡΩΤΗΜΑΤΟΣ.
    * ΣΤΗ ΣΥΝΕΧΕΙΑ ΑΝ ΤΟ ΠΡΩΤΟ ΨΗΦΙΟ ΤΟΥ ΠΡΩΤΟΥ ΤΡΙΨΗΦΙΟΥ ΑΡΙΘΜΟΥ ΕΙΝΑΙ ΜΕΓΑΛΥΤΕΡΟ ΑΠΟ ΤΟ ΤΡΙΤΟ ΨΗΦΙΟ
      ΤΟΥ ΔΕΥΤΕΡΟΥ ΤΡΙΨΗΦΙΟΥ ΑΡΙΘΜΟΥ, ΤΟΤΕ ΕΚΤΥΠΩΣΤΕ ΤΟ ΑΘΡΟΙΣΜΑ ΤΩΝ ΜΕΣΑΙΩΝ ΨΗΦΙΩΝ ΤΩΝ ΔΥΟ ΑΡΙΘΜΩΝ,
      ΑΛΛΙΩΣ ΤΟ ΓΙΝΟΜΕΝΟ ΤΟΥΣ.
*/

using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Algo_2
{
    class Program
    {
        static void Main(string[] args)
        {
            string str1;
            string str2;
            int[] check3DigitNum = new int[4];
            int[] range = new int[1000];
            string strNumberA, strNumberB;
            int finalNumberA = 0, finalNumberB = 0;
            int result = 0;
            bool flag = false;

            do
            {
                Console.WriteLine("Enter two 3digit numbers in range of [-999, 999] (press <Enter> each time)\n");

                Console.Write("Enter first number with corresponding sign at the beginning: ");
                str1 = Console.ReadLine();

                Console.Write("Enter second number with corresponding sign at the beginning: ");
                str2 = Console.ReadLine();

                if (str1.Length <= check3DigitNum.Length && str2.Length <= check3DigitNum.Length)
                {
                    try
                    {
                        if ((Convert.ToInt32(str1) >= range.Length * (-1) && Convert.ToInt32(str1) <= range.Length) &&
                            (Convert.ToInt32(str2) >= range.Length * (-1) && Convert.ToInt32(str2) <= range.Length))
                        {               
                            if (str1.Length == 3 && str1[0] != '+')
                            {
                                strNumberA = str1[0].ToString() + str1[1].ToString() + str1[2].ToString();
                            }
                            if (str2.Length == 3 && str2[0] != '+')
                            {
                                strNumberB = str2[0].ToString() + str2[1].ToString() + str2[2].ToString();
                            }
                            strNumberA = str1[0].ToString() + str1[1].ToString() + str1[2].ToString() + str1[3].ToString();
                            finalNumberA = (int)Convert.ToDecimal(strNumberA);
                            strNumberB = str2[0].ToString() + str2[1].ToString() + str2[2].ToString() + str2[3].ToString();
                            finalNumberB = (int)Convert.ToDecimal(strNumberB);
                            flag = true;
                        }
                    }
                    catch (Exception e)
                    {
                        Console.WriteLine(e.Message);
                    }
                }
            } while (flag == false);

            if (finalNumberA > 0 && finalNumberB > 0 && finalNumberA != finalNumberB)
            {
                result = finalNumberA + finalNumberB;
                Console.WriteLine($"\nYou've entered two positive numbers: {finalNumberA} and {finalNumberB} so, " +
                    $"the sum is: {result}");
            }
            else if (finalNumberA < 0 && finalNumberB < 0 && finalNumberA != finalNumberB)
            {
                result = finalNumberA - finalNumberB;
                Console.WriteLine($"\nYou've entered two negative numbers: {finalNumberA} and {finalNumberB} so, " +
                    $"the difference is: {result}");
            }
            else if ((finalNumberA < 0 && finalNumberB > 0) || (finalNumberA > 0 && finalNumberB < 0))
            {
                result = finalNumberA * finalNumberB;
                Console.WriteLine($"\nYou've entered two numbers with different signs: {finalNumberA} and {finalNumberB} so, " +
                    $"the product is: {result}");
            }
            else if ((finalNumberA == finalNumberB) && (finalNumberA != 0 && finalNumberB != 0))
            {
                result = -finalNumberA * finalNumberB;
                Console.WriteLine($"\nYou've entered two equal numbers: {finalNumberA} and {finalNumberB} so, " +
                $"the result is the product with opossite sign: {result}");
            }
            else if (finalNumberA == 0 && finalNumberB == 0)
            {
                Console.WriteLine($"\nYou've entered: {finalNumberA} and {finalNumberB} so, " +
                                  $"the result is: {result}");
            }

            Console.ReadLine();
        }

    }
}