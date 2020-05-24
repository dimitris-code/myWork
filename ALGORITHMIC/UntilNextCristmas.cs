/*
ΥΛΟΠΟΙΗΣΤΕ ΕΝΑ ΠΡΟΓΡΑΜΜΑ ΓΙΑ ΝΑ ΥΠΟΛΟΓΙΣΕΤΕ ΤΟΝ ΑΚΡΙΒΗ ΑΡΙΘΜΟ ΤΩΝ ΩΡΩΝ
ΠΟΥ ΑΠΟΜΕΝΟΥΝ ΜΕΧΡΙ ΤΑ ΕΠΟΜΕΝΑ ΧΡΙΣΤΟΥΓΕΝΝΑ ΜΕ ΒΑΣΗ ΤΗΝ ΤΡΕΧΟΥΣΑ ΗΜΕΡΟΜΗΝΙΑ.
ΜΗΝ ΧΡΗΣΙΜΟΠΟΙΗΣΕΤΕ ΕΤΟΙΜΕΣ ΣΥΝΑΡΤΗΣΕΙΣ ΒΙΒΛΙΟΘΗΚΩΝ ΤΥΠΟΥ Date. Η ΛΥΣΗ ΘΑ ΠΡΕΠΕΙ
ΝΑ ΕΙΝΑΙ ΚΑΘΑΡΑ ΜΕ ΔΙΚΗ ΣΑΣ ΑΛΓΟΡΙΘΜΙΚΗ ΣΚΕΨΗ.
ΗΜΕΡΟΜΗΝΙΑ ΠΡΟΓΡΑΜΜΑΤΟΣ: 24/04/2020
*/

using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Algo_1
{
    class Program
    {
        static void Main(string[] args)
        {
            int daysLeft = 0, hoursToChristmas = 0, dayHours = 24;
            int apr = 6, may = 31, jun = 30, jul = 31, aug = 31, sep = 30, oct = 31, nov = 30, dec = 25;
            daysLeft = apr + may + jun + jul + aug + sep + oct + nov + dec;
            hoursToChristmas = dayHours * daysLeft;
            Console.WriteLine($"Hours to next Christmas day: {hoursToChristmas}");

            Console.ReadLine();
        }
    }
}
