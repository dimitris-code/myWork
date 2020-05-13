using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;
using System.Data.Odbc;

namespace ElectronicRepairs
{
    public partial class frmReaderRead : Form
    {
        OdbcCommand cmd;
        OdbcDataReader reader;
        string SQL;

        public frmReaderRead()
        {
            InitializeComponent();
            cmd = new OdbcCommand();
            cmd.Connection = DB.Cn;
        }

        private void btnEmp_Click(object sender, EventArgs e)
        {
            getEmployees();
        }

        private void getEmployees()
        {
            SQL = "SELECT emp_id,emp_fname,emp_lname FROM employee";
            try
            {
                cmd.CommandText = SQL;
                reader = cmd.ExecuteReader();
                lbxEmployees.BackColor = Color.AliceBlue;
                lbxEmployees.Items.Clear();
                while (reader.Read())
                {
                    lbxEmployees.Items.Add(reader[0].ToString() +
                        " " + reader["emp_fname"] +
                        " " + reader["emp_lname"]);
                }
            }
            catch (Exception ex) { MessageBox.Show(ex.Message); }
            finally
            {
                if (reader != null) reader.Close();
            }
        }

    }
}
