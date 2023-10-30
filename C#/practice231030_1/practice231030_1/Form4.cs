using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace practice231030_1
{
    public partial class Form4 : Form
    {
        List<string> texts = new List<string>();
        public Form4()
        {
            InitializeComponent();
            label1.Text = "label1";
            texts.Add("안녕하세요.");
            texts.Add("aaa.");
            texts.Add("sss.");
            texts.Add("ddd.");
            texts.Add("안ffff녕하세요.");

        }

        private void button1_Click(object sender, EventArgs e)
        {
            label1.Text = "";
            label1.Text = texts[new Random().Next(texts.Count)]; 
        }
    }
}
