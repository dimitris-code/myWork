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

    public partial class frmConnection : Form
    {
        public frmConnection()
        {
            InitializeComponent();
        }

        private void frmConnection_Load(object sender, EventArgs e)
        {
            txtOdbcDriver.Text = "MySQL ODBC 5.3 Unicode Driver";
            txtServer.Text = "localhost";
            txtPort.Text = "3306";
            txtUser.Text = "root";
            showState();
        }

        private void btnConnect_Click(object sender, EventArgs e)
        {
            connect();
        }

        private void btnDisconnect_Click(object sender, EventArgs e)
        {
            disconnect();
        }

        //----------------------------------------------------------

        private void showState()
        {
            Color cc1 = ColorTranslator.FromHtml("#FFB748");
            Color cc2 = ColorTranslator.FromHtml("#FFB748");
            
            try
            {
                if (DB.Cn == null || DB.Cn.State != ConnectionState.Open)
                {
                    lblColorState.BackColor = Color.Red;
                    lblColorState.ForeColor = cc2;
                    lblColorState.Text = "Close";
                }
                else
                {
                    lblColorState.BackColor = Color.Green;
                    lblColorState.ForeColor = cc1;
                    lblColorState.Text = "Open";
                }
            }
            catch { }
        }


        //----------------------------------------------------------

        private void connect()
        {
            try
            {
                DB.Connect(txtUser.Text, txtPwd.Text,
                            txtServer.Text, txtPort.Text,
                            "myCompany", txtOdbcDriver.Text);

                if (DB.Cn.State == ConnectionState.Open)
                {
                    this.Close();
                }

                lblMsg.Text = "\rConnection State: " + DB.Cn.State + "\r\n" +
                    "ServerVersion: " + DB.Cn.ServerVersion + "\r\n" +
                    "Driver: " + DB.Cn.Driver + "\r\n";
            }
            catch (Exception ex)
            {

                lblMsg.Text = ex.Message;
            }
            finally { showState(); }
        }

        //----------------------------------------------------------

        private void disconnect()
        {
            try
            {
                if (DB.Cn == null || DB.Cn.State == ConnectionState.Closed) return;
                DB.Disconnect();
                lblMsg.Text += "\r\nDisconnected\n";
            }
            catch (Exception ex)
            {

                lblMsg.Text = ex.Message;
            }
            finally { showState(); }
        }

        //----------------------------------------------------------

    }
}
