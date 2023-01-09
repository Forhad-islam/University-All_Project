using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace FinalPoject
{
    public partial class Login : Form
    {
       public string pass1="admin";
       
        public Login()
        {
            InitializeComponent();
        }

        private void IblUserName_Click(object sender, EventArgs e)
        {

        }

        private void IblPassword_Click(object sender, EventArgs e)
        {
            

        }

        private void textBox1_TextChanged(object sender, EventArgs e)
        {

        }

        private void txtPasswrd_TextChanged(object sender, EventArgs e)
        {
            
        }

        private void btnLogIn_Click(object sender, EventArgs e)
        {
            string name = txtUserName.Text;
            string pass2 = txtPassword.Text;

            if(name=="admin" && pass2==pass1)
            {
                Admin ad= new Admin() ;
                ad.Show();
                this.Hide(); 
            }
            else
            { 
                MessageBox.Show("Invalid information");
            }

           
        }

        private void groupBox1_Enter(object sender, EventArgs e)
        {

        }

        private void pictureBox1_Click(object sender, EventArgs e)
        {

        }

        private void exitToolStripMenuItem_Click(object sender, EventArgs e)
        {
            Environment.Exit(0);
        }

        private void homeToolStripMenuItem_Click(object sender, EventArgs e)
        {
           
        }

        private void linkLabel1_LinkClicked(object sender, LinkLabelLinkClickedEventArgs e)
        {
           // MessageBox.Show("Executed");
            ComplainBox ob = new ComplainBox();
            ob.Show();
            this.Hide();
        }

        private void linkLabel3_LinkClicked(object sender, LinkLabelLinkClickedEventArgs e)
        {
            MessageBox.Show("Mobile:01320001299 ,01320001300"+"--------Phone:  +880-2-223381967,+880-2-223383515","For Emergency");
            Console.WriteLine();
        }

        private void linkLabel2_LinkClicked(object sender, LinkLabelLinkClickedEventArgs e)
        {
            policeForm pf = new policeForm();
            pf.Show();
            this.Hide();
        }

       

       

       
    }
}
