using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Data;
using System.Data.Odbc;

namespace ElectronicRepairs
{
    class DB
    {
        public static OdbcConnection Cn = new OdbcConnection();

        public static void Connect(string user, string password,
              string server = "localhost", string port = "3306",
              string database = "myCompany",
              string odbcDriver = "{MySQL ODBC 5.3 Unicode Driver}")
        {
            try
            {
                if (Cn == null)
                {
                    Cn = new OdbcConnection();
                }
                if (Cn.State != ConnectionState.Open)
                {
                    Cn.ConnectionString =
                        "Driver={MySQL ODBC 5.3 UNICODE Driver}" +
                        ";Server=" + server +
                        ";Database=" + "myCompany" +
                        ";User=" + user +
                        ";Password=" + password +
                        ";Option=3";
                    Cn.Open();
                }
            }
            catch { throw; }
        }

        public static void Disconnect()
        {
            try
            {
                if (Cn == null) return;
                if (Cn.State == ConnectionState.Closed) return;
                Cn.Close();
            }
            catch { throw; }
        }
    }
}
