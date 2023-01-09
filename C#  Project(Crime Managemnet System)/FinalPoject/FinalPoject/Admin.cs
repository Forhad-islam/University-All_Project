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
    public partial class Admin : Form
    {
        public string gender;
        private SqlConnection conn;
        public Admin()
        {
            InitializeComponent();
        }

        private void Admin_Load(object sender, EventArgs e)
        {

        }

        private void backToolStripMenuItem_Click(object sender, EventArgs e)
        {
            Login l = new Login();
            l.Show();
            this.Hide();
        }

        private void radioButton1_CheckedChanged(object sender, EventArgs e)
        {
          
        }

        private void radioButton2_CheckedChanged(object sender, EventArgs e)
        {

        }

        private void button1_Click(object sender, EventArgs e)
        {
            string name, email, number, password;

            name = textBox1.Text;
            email = textBox2.Text;
            number = textBox3.Text;
            password = textBox4.Text;



            if (radioButton1.Checked)
            {
                gender = "Female";
            }
            else if (radioButton2.Checked)
            {
                gender = "Male";
            }
            else
            {
                gender = "";
            }
            if (gender == "")
            {
                MessageBox.Show("Your Gender is not selected");
            }


            try
            {
                
                conn = new SqlConnection(@"Data Source=DESKTOP-3NMCDFH;Initial Catalog=FinalProjectDB;Integrated Security=True");
                conn.Open();
                if (name == "" || password == "" || email == "" || number=="" )
                {
                    MessageBox.Show("Please Fill The Entries!");

                }
                else
                {

                  string query = "insert into Police_man (Name,Email,Number,Password,Gender) values('" + name + "','" + email + "','" + number + "','" + password + "','" + gender + "')";
                SqlCommand cmm = new SqlCommand(query, conn);
                int row = cmm.ExecuteNonQuery();



                if (row > 0)
                {
                    //MessageBox.Show(value+"Please Keep this ID carefully ");
                   MessageBox.Show(name + "'s has been added successfully");
                    textBox1.Clear(); textBox2.Clear(); textBox3.Clear(); textBox4.Clear();


                }

               }


                
            }

            catch (Exception ex)
            {
                MessageBox.Show(ex.Message);
            }

            finally
            {
                conn.Close();

            }


        }

        private void button3_Click(object sender, EventArgs e)
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

        private void dataGridView1_CellContentClick(object sender, DataGridViewCellEventArgs e)
        {

        }

        private void button2_Click(object sender, EventArgs e)
         {
            string name, i, password;
            password = textBox5.Text; i = textBox8.Text; name = textBox6.Text;



            int id = int.Parse(i);

            conn = new SqlConnection(@"Data Source=DESKTOP-3NMCDFH;Initial Catalog=FinalProjectDB;Integrated Security=True");
            conn.Open();

            string query = "delete from Police_man where ID= '" + id + "' and Name = '" + name + "' and Password=  '"+password+ "'";

            SqlCommand cmm = new SqlCommand(query, conn);
            int row = cmm.ExecuteNonQuery();

            if (row > 0)
            {

                MessageBox.Show(name + "'s Delete Successfully . ");
                textBox5.Clear(); textBox6.Clear(); textBox8.Clear();


            }

            conn.Close();
        }

        private void textBox8_TextChanged(object sender, EventArgs e)
        {

        }

        private void button4_Click(object sender, EventArgs e)
        {
            UpdatePolice up = new UpdatePolice();
            up.Show();
            this.Hide();
        }



    }
}
