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
    public partial class dtAdServices : Form
    {
        OdbcCommand cmd;
        OdbcDataReader reader;
        string SQL;

        public dtAdServices()
        {
            InitializeComponent();
            cmd = new OdbcCommand();
            cmd.Connection = DB.Cn;
            loadDropDownMenus();
        }

        private void loadDropDownMenus()
        {
            IdName a;
            string s = "SELECT cust_id FROM customers";
            cmd.CommandText = SQL;
            reader = cmd.ExecuteReader();
            while (reader.Read())
            {
                a = new IdName(reader[0].ToString(),
                reader["emp_lname"].ToString());
                cmbCustID.Text = a.ToString();
            }
        }


    }
}
