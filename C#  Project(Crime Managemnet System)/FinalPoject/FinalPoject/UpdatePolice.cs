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
    public partial class UpdatePolice : Form
    {
        private SqlConnection conn;
        public UpdatePolice()
        {
            InitializeComponent();
        }

        private void backToolStripMenuItem_Click(object sender, EventArgs e)
        {
            Admin ad = new Admin();
            ad.Show();
            this.Hide();
        }

        private void button2_Click(object sender, EventArgs e)
        {
            conn = new SqlConnection(@"Data Source=DESKTOP-3NMCDFH;Initial Catalog=FinalProjectDB;Integrated Security=True");
            conn.Open();

            string query = "select *from Police_man";
            SqlCommand cmd = new SqlCommand(query, conn);
            cmd.ExecuteNonQuery();
            SqlDataAdapter adp = new SqlDataAdapter(cmd);
            DataSet ds = new DataSet();
            adp.Fill(ds);
            DataTable dt = ds.Tables[0];
            dataGridView1.DataSource = dt;
            dataGridView1.Refresh();
            conn.Close();
        }

        private void button1_Click(object sender, EventArgs e)
        { 
            string name, email, number, password;
            name = textBox1.Text;
            email = textBox2.Text;
            number = textBox3.Text;
            password = textBox4.Text;

            int id=Convert.ToInt32(textBox5.Text);

         


            conn = new SqlConnection(@"Data Source=DESKTOP-3NMCDFH;Initial Catalog=FinalProjectDB;Integrated Security=True");
            conn.Open();

            string query = "update  Police_man set Name='"+name+"',Email='"+email+"',Number='"+number+"',Password='"+password+"' where ID="+id;
            SqlCommand cmd = new SqlCommand(query, conn);
         
              int row = cmd.ExecuteNonQuery();
            if (row>0)
            {
                MessageBox.Show("Update Successfully");
            }
            else{
                 MessageBox.Show("Try againg");
            }
            conn.Close();
        }

        private void dataGridView1_CellContentClick(object sender, DataGridViewCellEventArgs e)
        {
            int id = Convert.ToInt32(dataGridView1.Rows[e.RowIndex].Cells[0].Value.ToString());
            conn = new SqlConnection(@"Data Source=DESKTOP-3NMCDFH;Initial Catalog=FinalProjectDB;Integrated Security=True");
            conn.Open();

            string query = "select *from Police_man where ID=" + id;
            SqlCommand cmd = new SqlCommand(query,conn);
            cmd.ExecuteNonQuery();
            SqlDataAdapter adp = new SqlDataAdapter(cmd);

            DataSet ds = new DataSet();
            adp.Fill(ds);
            DataTable dt = ds.Tables[0];
            textBox1.Text = dt.Rows[0]["Name"].ToString();
            textBox2.Text = dt.Rows[0]["Email"].ToString();
            textBox3.Text = dt.Rows[0]["Number"].ToString();
            textBox4.Text = dt.Rows[0]["Password"].ToString();
            textBox5.Text = dt.Rows[0]["ID"].ToString();

            conn.Close();


        }
    }
}
