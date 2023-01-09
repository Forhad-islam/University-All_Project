using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;
using System.Data.SqlClient;

namespace FinalPoject
{
    public partial class policeForm : Form
    {
        public string name = "Forhadul Islam";
        public  int  id = 222;
        public policeForm()
        {
            InitializeComponent();
        }

        private void homeToolStripMenuItem_Click_1(object sender, EventArgs e)
        {
            Login l = new Login();
            l.Show();
            this.Hide();
        }

        private void policeForm_Load(object sender, EventArgs e)
        {

        }

        private void label1_Click(object sender, EventArgs e)
        {

        }

        private void textBox2_TextChanged(object sender, EventArgs e)
        {

        }

        private void button1_Click(object sender, EventArgs e)
        {

            SqlConnection conn = new SqlConnection(@"Data Source=DESKTOP-3NMCDFH;Initial Catalog=FinalProjectDB;Integrated Security=True");
            conn.Open();
            string query = "select * from Police_man where Name = '" + textBox1.Text.Trim() + "' and Password = '" + textBox2.Text.Trim() + "'";

            SqlDataAdapter adp = new SqlDataAdapter(query, conn);

            DataTable dt = new DataTable();
            adp.Fill(dt);
            if (dt.Rows.Count == 1)
            {

                Criminal C = new Criminal();
                C.Show();
                this.Hide();


            }
            else
            {
                MessageBox.Show("Check your ID and Pin again");
                textBox1.Clear(); textBox2.Clear();
            }




            /*
            if(textBox1.Text == name &&  int.Parse(textBox2.Text)  == id)
            {
                Criminal C = new Criminal();
                C.Show();
                this.Hide();

            }
            else
            {
                MessageBox.Show("Please try againg");
                textBox1.Clear(); textBox2.Clear();
            }
            */
            
        }
    }
}
