using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Diagnostics;
using System.Drawing;
using System.Linq;
using System.Net.Http.Headers;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;
using System.Windows.Forms.VisualStyles;
using static System.Windows.Forms.VisualStyles.VisualStyleElement;

namespace Practice_0_231102_
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        
        

        private void textBox1_TextChanged(object sender, EventArgs e)
        {

        }

        private void textBox2_TextChanged(object sender, EventArgs e)
        {

        }

        private void button1_Click_1(object sender, EventArgs e)
        {
            Warrier w = new Warrier();
            Character c = new Warrier(); // 다형성 적용됨.
            w.Fight();
            c.Fight();
        }

        private void button2_Click(object sender, EventArgs e)
        {
            
            string msg = new Warrier().Die();
            MessageBox.Show(msg);
        }

        private void button3_Click(object sender, EventArgs e)
        {
            Warrier w = new Warrier();
            w.Id = textBox1.Text;
            w.Lv = int.Parse(textBox2.Text);
            MessageBox.Show(w.SayHello());

        }

        private void button4_Click(object sender, EventArgs e)
        {
            Warrier w = new Warrier();
            w.Id = textBox1.Text;
            w.Lv = int.Parse(textBox2.Text);
            new Form2(w.SayHello()).Show();
        }

        private void linkLabel1_LinkClicked(object sender, LinkLabelLinkClickedEventArgs e)
        {
            Process.Start("https://naver.com");
        }
    }
}
