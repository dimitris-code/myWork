using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Windows.Forms;
using System.Data.Odbc;

namespace ElectronicRepairs
{
    public partial class frmMain : Form
    {
        public frmMain()
        {
            InitializeComponent();
        }
     
        private void frmMain_Load(object sender, EventArgs e)
        {
            showConnectionForm();
        }

        private void showConnectionForm()
        {
            new frmConnection().ShowDialog();
        }

        private void showReaderReadForm()
        {
            new frmReaderRead().Show();
        }

        private void showReaderForm()
        {
            new frmReader().Show();
        }

        private void btnConnect_Click(object sender, EventArgs e)
        {
            showConnectionForm();
        }

        private void btnReaderRead_Click(object sender, EventArgs e)
        {
            showReaderReadForm();
        }

        private void btnReader_Click(object sender, EventArgs e)
        {
            showReaderForm();
        }
        
        private void showDataAdapterServicesForm()
        {
            new dtAdServices().Show();
        }
        private void btnAdapter_Click(object sender, EventArgs e)
        {
            showDataAdapterServicesForm();
        }
    }
}
