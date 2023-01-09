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
    public partial class ComplainBox : Form
    {
        private SqlConnection conn;
        public ComplainBox()
        {
            InitializeComponent();
        }

        private void homeToolStripMenuItem_Click(object sender, EventArgs e)
        {
            Login l = new Login();
            l.Show();
            this.Hide();
        }

        private void ComplainBox_Load(object sender, EventArgs e)
        {

        }

        private void textBox1_TextChanged(object sender, EventArgs e)
        {
            if(textBox1.Text=="")
            {
                button1.Enabled = false;
            }
            else
            {
                button1.Enabled = true;
            }
        }

        private void label2_Click(object sender, EventArgs e)
        {

        }

        private void label5_Click(object sender, EventArgs e)
        {

        }

        private void radioButton1_CheckedChanged(object sender, EventArgs e)
        {

        }

        private void button1_Click(object sender, EventArgs e)
        {
            String name, fathername, email, number, address, objection;
            string gender = "";


            name = textBox1.Text;
            fathername =  textBox2.Text;
            number = textBox3.Text;
            email = textBox4.Text;
            address = textBox5.Text;
            objection = textBox6.Text;

            if (radioButton1.Checked)
            {
                gender = "Male";
            }
            else if (radioButton2.Checked)
            {
                gender = "Female";
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
                string query = "insert into Complained (Name,FatherName,Email,Number,Gender,Address,Complain) values('" + name + "','" + fathername + "','" + email + "','" + number + "','" + gender + "','" + address + "','" + objection + "')";
                SqlCommand cmm = new SqlCommand(query, conn);
                int row = cmm.ExecuteNonQuery();
               


                if (row > 0)
                {
                    //MessageBox.Show(value+"Please Keep this ID carefully ");
                    MessageBox.Show(name + "'s Your complaint has been successfully received. ");
                    textBox1.Clear(); textBox2.Clear(); textBox3.Clear(); textBox4.Clear(); textBox5.Clear(); textBox6.Clear();
                    

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
    }
}
