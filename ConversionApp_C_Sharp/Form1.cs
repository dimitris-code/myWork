using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace ConversionApp
{
    public partial class Form1 : Form
    {
        int mov;
        int movX;
        int movY;

        public Form1()
        {
            InitializeComponent();
        }

        private void button1_Click(object sender, EventArgs e)
        {
            System.Windows.Forms.Application.ExitThread();
        }

        private void panel1_MouseDown(object sender, MouseEventArgs e)
        {
            mov = 1;
            movX = e.X;
            movY = e.Y;
        }

        private void panel1_MouseMove(object sender, MouseEventArgs e)
        {
            if(mov == 1)
            {
                this.SetDesktopLocation(MousePosition.X - movX, MousePosition.Y - movY);
            }
        }

        private void panel1_MouseUp(object sender, MouseEventArgs e)
        {
            mov = 0;
        }

        private void button2_Click(object sender, EventArgs e)
        {
            string s = txtBox1.Text;
            int bin = Convert.ToInt32(s, 2);
            txtBox2.Text = bin.ToString();
        }

        private void Form1_Paint(object sender, PaintEventArgs e)
        {
            Graphics l = e.Graphics;
            Pen p1 = new Pen(Color.Gainsboro, 5);
            l.DrawLine(p1, 40, 235, 760, 235);
            Pen p2 = new Pen(Color.Gainsboro, 5);
            l.DrawLine(p2, 255, 60, 255, 410);
            Pen p3 = new Pen(Color.Gainsboro, 5);
            l.DrawLine(p3, 540, 60, 540, 410);

        }

        private void button3_Click(object sender, EventArgs e)
        {
            int dec = int.Parse(txtBox3.Text);
            string bin = Convert.ToString(dec, 2);
            txtBox4.Text = bin.ToString();
        }

        private void button4_Click(object sender, EventArgs e)
        {
            string s = txtBox5.Text;
            int dec = Convert.ToInt32(s, 16);
            txtBox6.Text = dec.ToString();
        }

        private void button5_Click(object sender, EventArgs e)
        {
            int hex = int.Parse(txtBox7.Text);
            while(hex != 0)
            {
                if ((hex % 16) < 10)
                    txtBox8.Text = hex % 16 + txtBox8.Text;
                else
                {
                    string temp = "";

                    switch (hex % 16)
                    {
                        case 10: temp = "A"; break;
                        case 11: temp = "B"; break;
                        case 12: temp = "C"; break;
                        case 13: temp = "D"; break;
                        case 14: temp = "E"; break;
                        case 15: temp = "F"; break;
                    }

                    txtBox8.Text = temp + txtBox8.Text;
                }

                hex /= 16;
            }
        }

        private void button6_Click(object sender, EventArgs e)
        {
            string s = txtBox9.Text;
            int oct = Convert.ToInt32(s, 8);
            txtBox10.Text = oct.ToString();
        }

        private void button7_Click(object sender, EventArgs e)
        {
            int s = int.Parse(txtBox11.Text);
            string dec = Convert.ToString(s, 8);
            txtBox12.Text = dec.ToString();
        }
    }
}
