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
    public partial class Criminal : Form
    {
        SqlConnection conn;
        public Criminal()
        {
            InitializeComponent();
        }

        private void homeToolStripMenuItem_Click(object sender, EventArgs e)
        {
            Login l = new Login();
            l.Show();
            this.Hide();
        }

        private void backToolStripMenuItem_Click(object sender, EventArgs e)
        {
            policeForm p = new policeForm();
            p.Show();
            this.Hide();

        }

        private void label1_Click(object sender, EventArgs e)
        {

        }

        private void textBox2_TextChanged(object sender, EventArgs e)
        {

        }

        private void button3_Click(object sender, EventArgs e)
        {
            conn = new SqlConnection(@"Data Source=DESKTOP-3NMCDFH;Initial Catalog=FinalProjectDB;Integrated Security=True");
            conn.Open();

            string query = "select *from Complained";
            SqlCommand cmd = new SqlCommand(query,conn);
            cmd.ExecuteNonQuery();
            SqlDataAdapter adp = new SqlDataAdapter(cmd);
            DataSet ds = new DataSet();
            adp.Fill(ds);
            DataTable dt = ds.Tables[0];
            dataGridView1.DataSource = dt;
            dataGridView1.Refresh();
            conn.Close();
        
        }

        private void Criminal_Load(object sender, EventArgs e)
        {

        }

        private void button1_Click(object sender, EventArgs e)
        {
            string name, fathername,crime,punishment,address;
            name = textBox1.Text;
            fathername = textBox2.Text; crime = textBox3.Text; punishment = textBox4.Text; address = textBox9.Text;

            try
            {
                conn = new SqlConnection(@"Data Source=DESKTOP-3NMCDFH;Initial Catalog=FinalProjectDB;Integrated Security=True");
                conn.Open();
                string query = "insert into Criminal_info (Name,FatherName,Crime,Punishment,Address) values('" + name + "','" + fathername + "','" + crime + "','" + punishment + "','"+address+"')";
                SqlCommand cmm = new SqlCommand(query, conn);
                int row = cmm.ExecuteNonQuery();



                if (row > 0)
                {
                    
                    MessageBox.Show(name + "'s Your complaint has been successfully received. ");
                    textBox1.Clear(); textBox2.Clear(); textBox3.Clear(); textBox4.Clear(); textBox9.Clear();


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

        private void button4_Click(object sender, EventArgs e)
        {
            try
            {
                conn = new SqlConnection(@"Data Source=DESKTOP-3NMCDFH;Initial Catalog=FinalProjectDB;Integrated Security=True");
                conn.Open();

                string query = "select *from Criminal_info";
                SqlCommand cmd = new SqlCommand(query, conn);
                cmd.ExecuteNonQuery();
                SqlDataAdapter adp = new SqlDataAdapter(cmd);
                DataSet ds = new DataSet();
                adp.Fill(ds);
                DataTable dt = ds.Tables[0];
                dataGridView1.DataSource = dt;
                dataGridView1.Refresh();

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

        private void button2_Click(object sender, EventArgs e)
        {
            string i, name;
            i = textBox5.Text; name = textBox6.Text;

            int id = int.Parse(i);

            conn = new SqlConnection(@"Data Source=DESKTOP-3NMCDFH;Initial Catalog=FinalProjectDB;Integrated Security=True");
            conn.Open();

            string query = "delete from Criminal_info where ID= '" + id + "' and Name = '" + name + "' ";

            SqlCommand cmm = new SqlCommand(query, conn);
            int row = cmm.ExecuteNonQuery();

            if (row > 0)
            {

                MessageBox.Show(name + "'s Delete Successfully . ");
                textBox5.Clear(); textBox6.Clear(); 


            }

            conn.Close();

        }

        private void button5_Click(object sender, EventArgs e)
        {
            try
            {
             string i, name;
            i = textBox7.Text; name = textBox8.Text;

            int id = int.Parse(i);

            conn = new SqlConnection(@"Data Source=DESKTOP-3NMCDFH;Initial Catalog=FinalProjectDB;Integrated Security=True");
            conn.Open();

            string query = "select *from Criminal_info where ID= '" + id + "' and Name = '" + name + "' ";

            SqlCommand cmd = new SqlCommand(query, conn);
             cmd.ExecuteNonQuery();

                SqlDataAdapter adp = new SqlDataAdapter(cmd);
                DataSet ds = new DataSet();
                adp.Fill(ds);
                DataTable dt = ds.Tables[0];
                dataGridView1.DataSource = dt;
                dataGridView1.Refresh();

                textBox7.Clear(); textBox8.Clear();

            }
            catch(Exception ex)
            {
                MessageBox.Show(ex.Message);
            }
           
            finally
                {
                 conn.Close();
                }

           
        }
        //self click
       private void dataGridView1_CellClick(object sender, DataGridViewCellEventArgs e)
       {
           
        }

       private void button6_Click(object sender, EventArgs e)
       {
           string name, i, number;
           name = textBox10.Text; i = textBox11.Text; number =  textBox12.Text;

           try
           {
               int id = int.Parse(i);

               conn = new SqlConnection(@"Data Source=DESKTOP-3NMCDFH;Initial Catalog=FinalProjectDB;Integrated Security=True");
               conn.Open();

               string query = "delete from Complained where ID= '" + id + "' and Name = '" + name + "' and Number = '" + number + " ' ";

               SqlCommand cmm = new SqlCommand(query, conn);
               int row = cmm.ExecuteNonQuery();

               if (row > 0)
               {

                   MessageBox.Show(name + "'s Delete Successfully . ");
                   textBox10.Clear(); textBox11.Clear(); textBox12.Clear();


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

       private void dataGridView1_CellContentClick(object sender, DataGridViewCellEventArgs e)
       {

       }





    }
}
