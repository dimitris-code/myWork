using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace LeapYears
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();;
        }
        private void button1_Click(object sender, EventArgs e)
        {
            string s = textBox1.Text;
            if ((int.Parse(s) % 400 == 0) || (int.Parse(s) % 4 == 0 && int.Parse(s) % 100 != 0))
                MessageBox.Show("Year " + s + " is a leap year.");
            else
                MessageBox.Show("Year " + s + " is not a leap year.");
        }

        private void button2_Click(object sender, EventArgs e)
        {
            //string s = textBox2.Text;
            int i, num, rem, sum = 0;
            num = int.Parse(textBox2.Text);
            for (i = num; i > 0; i = i / 10)
            {
                rem = i % 10;
                sum = sum + (rem * rem * rem);
            }
            if (sum == num)
            {
                MessageBox.Show("Number " + num + " is an Armostrong number.");
            }
            else
            {
                MessageBox.Show("Number " + num + " is NOT an Armostrong number.");
            }
        }

        private void button3_Click(object sender, EventArgs e)
        {
            int i, num, sum = 0;
            num = int.Parse(textBox3.Text);
            for (i = 1; i < num; i++)
            {
                if (num % i == 0)
                    sum += i;
            }
            if (sum == num)
                MessageBox.Show("Number " + num + " is a perfect number.");
            else
                MessageBox.Show("Number " + num + " is NOT a perfect number.");
        }

        private void button4_Click(object sender, EventArgs e)
        {
            string s;
            int countDigits, countAlphabet, countSpecialChar, countSpaces;
            int counter;

            countDigits = countAlphabet = countSpecialChar = countSpaces = 0;
            s = textBox4.Text;
            for (counter = 0; counter < s.Length; counter++)
            {
                if (s[counter] >= '0' && s[counter] <= '9')
                    countDigits++;
                else if ((s[counter] >= 'A' && s[counter] <= 'Z') || (s[counter] >= 'a' && s[counter] <= 'z'))
                    countAlphabet++;
                else if (s[counter] == ' ')
                    countSpaces++;
                else
                    countSpecialChar++;
            }
            MessageBox.Show("Characters: " + countAlphabet.ToString() + "\n" + "Digits: " + countDigits.ToString() + "\n" + "Signs: " + countSpecialChar.ToString() + "\n" + "Spaces: " + countSpaces.ToString());
        }

        private void button5_Click(object sender, EventArgs e)
        {
            int a = 0, b = 0, hcf = 0, num1, num2;
            num1 = int.Parse(textBox5.Text);
            num2 = int.Parse(textBox6.Text);
            hcf = findHCF(num1, num2);
            MessageBox.Show("Highest common factor: " + hcf);
        }

        int findHCF(int x, int y)
        {
            int temp;

            if (x == 0 || y == 0)
                return 0;
            while (y != 0)
            {
                temp = x % y;
                x = y;
                y = temp;
            }
            return x;
        }

        private void button6_Click(object sender, EventArgs e)
        {
            int number, revNumber = 0, rem = 0, tempNumber;

            number = int.Parse(textBox7.Text);
            tempNumber = number;

            while (tempNumber != 0)
            {
                rem = tempNumber % 10;
                revNumber = revNumber * 10 + rem;
                tempNumber = tempNumber / 10;
            }
            if (revNumber == number)
                MessageBox.Show("Number " + number + " is Palindrome.");
            if (revNumber != number)
                MessageBox.Show("Number " + number + " is NOT Palindrome.");
        }

        private void button7_Click(object sender, EventArgs e)
        {
            int i, number, x = 0;
            number = int.Parse(textBox8.Text);

            for (i = 1; i <= number; i++)
            {
                if (number % i == 0)
                {

                    x++;
                }
            }
            if (x == 2)
                MessageBox.Show("Number " + number + " is Prime.");  //prime
            else
                MessageBox.Show("Number " + number + " is NOT Prime.");  //not a prime
        }

        private void button8_Click(object sender, EventArgs e)
        {
            float a, b, c, x;

            a = float.Parse(textBox9.Text);
            b = float.Parse(textBox10.Text);
            c = float.Parse(textBox11.Text);

            x = (c * b) / a;

            MessageBox.Show("Result = " + x);
        }

        private void button9_Click(object sender, EventArgs e)
        {
            long rem;
            long num =  long.Parse(textBox12.Text);
            rem = num % 9;
            if (rem == 0)
                MessageBox.Show("Single digit result is 9");
            else
                MessageBox.Show("Single digit result is " + rem);
        }

        private void button10_Click(object sender, EventArgs e)
        {
            long n, sum = 0, m;
            n = long.Parse(textBox13.Text);
            while (n > 0)
            {
                m = n % 10;
                sum = sum + m;
                n = n / 10;
            }
            if(sum % 3 == 0)
            {
                MessageBox.Show("Number " + sum.ToString() + " is divisible by 3");
            }
            else
                MessageBox.Show("Number " + sum.ToString() + " is NOT divisible by 3");
        }
        private void button12_Click(object sender, EventArgs e)
        {
            int a, b, c = 0, d = 0;
            a = int.Parse(textBox16.Text);
            b = int.Parse(textBox17.Text);
            c = gcf(a, b);

            d = ((a / c) * b);
            MessageBox.Show("Least common multiple is: " + d.ToString());

        }
        static int gcf(int a, int b)
        {
            while (b != 0)
            {
                int temp = b;
                b = a % b;
                a = temp;
            }
            return a;
        }
    }
}
