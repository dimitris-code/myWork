using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace ElectronicRepairs
{
    public partial class DataGridviewToTextBox : Form
    {
        public DataGridviewToTextBox()
        {
            InitializeComponent();
        }

        private void GridviewToTextBox_Load(object sender, EventArgs e)
        {
            txtBoxFetchCustID.Text = frmReader.passingText;
        }
    }
}
