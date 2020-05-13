using System;
using System.Collections.Generic;
using System.Data;
using System.Windows.Forms;
using System.Data.Odbc;

namespace ElectronicRepairs
{
    public partial class frmReader : Form
    {
        OdbcCommand cmd;
        OdbcDataReader reader;
        string SQL;
        List<IdName> ListEmployees;
        DataTable tblOrders = new DataTable();

        public static string passingText;

        public frmReader()
        {
            InitializeComponent();
            cmd = new OdbcCommand();
            cmd.Connection = DB.Cn;
        }

        private void frmReader_Load(object sender, EventArgs e)
        {
            this.dgvOrders.AllowUserToAddRows = false;
            this.dgvOrders.ReadOnly = true;
            this.dtpApo.Value = new DateTime(1900, 1, 1);
            this.dtpEos.Value = DateTime.Now;
            ListEmployees = new List<IdName>();
            LoadEmployees();
        }

        private void LoadEmployees()
        {
            IdName a;
            SQL = "SELECT emp_id,emp_fname,emp_lname FROM employee";
            try
            {
                cmd.CommandText = SQL;
                reader = cmd.ExecuteReader();
                ListEmployees.Clear();
                while (reader.Read())
                {
                    a = new IdName(reader[0].ToString(),
                    reader["emp_lname"].ToString() + " " + reader["emp_fname"].ToString());

                    ListEmployees.Add(a);
                }

                cbxEmp.SelectedIndexChanged -= new EventHandler(cbxEmp_SelectedIndexChanged);
                bind(cbxEmp);

                cbxEmp.SelectedIndex = -1;
                cbxEmp.Text = "Select Employee ... ";
                cbxEmp.SelectedIndexChanged += new EventHandler(cbxEmp_SelectedIndexChanged);

            }
            catch (Exception ex) { MessageBox.Show(ex.Message); }
            finally
            {
                if (reader != null) reader.Close();// reader?.Close(); 
            }
        }

        private void bind(ComboBox cbx)
        {
            cbx.BeginUpdate();
            cbx.DataSource = null;
            cbx.DataSource = ListEmployees;
            cbx.ValueMember = "Id";
            cbx.DisplayMember = "Name";
            cbx.EndUpdate();
        }

        private void ShowOrders()
        {
            int empid;
            string sWHERE;
            try
            {
                cmd.Parameters.Clear();
                sWHERE = "WHERE OrderDate BETWEEN ? AND ? ";
                cmd.Parameters.Add("@apo", OdbcType.Date, 10).Value = dtpApo.Value;
                cmd.Parameters.Add("@eos", OdbcType.Date, 10).Value = dtpEos.Value;

                if (cbxEmp.SelectedIndex >= 0)
                {
                    IdName a = (IdName)cbxEmp.SelectedItem;
                    empid = Convert.ToInt32(a.Id);
                    sWHERE += " AND emp_id=?";
                    cmd.Parameters.Add("@emp_id", OdbcType.Int, 10).Value = empid;
                }
                
                SQL = "SELECT * FROM customers " + sWHERE;

                cmd.CommandText = SQL;
                reader = cmd.ExecuteReader();
                tblOrders.Rows.Clear();
                tblOrders.Load(reader);
                dgvOrders.DataSource = tblOrders;
                this.Text = tblOrders.Rows.Count.ToString();

            }
            catch (Exception ex) { MessageBox.Show(ex.Message.ToString()); }
            finally
            {
                if (reader != null) reader.Close(); //reader?.Close(); 
            }
        }

        private void btnReloadEmp_Click(object sender, EventArgs e)
        {
            LoadEmployees();
        }

        private void btnGo_Click(object sender, EventArgs e)
        {
            ShowCustomers();   
        }

        private void cbxEmp_SelectedIndexChanged(object sender, EventArgs e)
        {
            ShowOrders();
        }


        private void ShowCustomers()
        {
            string sWHERE, cWHERE = "", vWHERE = "", pWHERE = "";

            try
            {
                cmd.Parameters.Clear();
                sWHERE = "WHERE OrderDate BETWEEN ? AND ? ";
                cmd.Parameters.Add("@apo", OdbcType.Date, 10).Value = dtpApo.Value;
                cmd.Parameters.Add("@eos", OdbcType.Date, 10).Value = dtpEos.Value;

                if (txtCustomer.Text != "")
                {
                    cWHERE = sWHERE + " AND cust_lname LIKE ?";
                    cmd.Parameters.Add("@cust_lname", OdbcType.VarChar, 1000).Value = txtCustomer.Text + "%";
                

                    SQL = "SELECT * FROM customers " + cWHERE;

                    cmd.CommandText = SQL;
                    reader = cmd.ExecuteReader();
                    
                    if (!reader.HasRows) {

                        reader.Close();

                        vWHERE = sWHERE + " AND cust_VAT_number LIKE ?";
                        cmd.Parameters.Add("@cust_VAT_number", OdbcType.VarChar, 1000).Value = txtCustomer.Text + "%";

                        SQL = "SELECT * FROM customers " + vWHERE;

                        cmd.CommandText = SQL;
                        reader = cmd.ExecuteReader();

                    }

                    if(!reader.HasRows) {

                        reader.Close();

                        pWHERE = sWHERE + " AND cust_phone_number LIKE ?";
                        cmd.Parameters.Add("@cust_phone_number", OdbcType.VarChar, 1000).Value = txtCustomer.Text + "%";

                        SQL = "SELECT * FROM customers " + pWHERE;

                        cmd.CommandText = SQL;
                        reader = cmd.ExecuteReader();
                    }

                    if (!reader.HasRows)
                    {
                        // messageBox.show() documentation properties visual studio
                        MessageBox.Show("     No results found!");
                    }
                }
                else
                {
                    MessageBox.Show("Please insert Name, VAT or, Phone number!");
                }
               
                tblOrders.Rows.Clear();
                tblOrders.Load(reader);
                dgvOrders.DataSource = tblOrders;
                this.Text = tblOrders.Rows.Count.ToString();
            }
            catch (Exception ex) { MessageBox.Show(ex.Message.ToString()); }
            finally
            {
                if (reader != null) reader.Close(); //reader?.Close(); 
            }
        }

        private void dgvOrders_CellClick(object sender, DataGridViewCellEventArgs e)
        {
            passingText = dgvOrders.Rows[e.RowIndex].Cells[e.ColumnIndex].Value.ToString();
            DataGridviewToTextBox gtb = new DataGridviewToTextBox();
            if (dgvOrders.Rows[e.RowIndex].Cells[e.ColumnIndex].Value != null)
            {
                dgvOrders.CurrentRow.Selected = true;
                frmReader.passingText = dgvOrders.Rows[e.RowIndex].Cells["cust_id"].FormattedValue.ToString();
            }
            gtb.Show();
        }
    }
}
