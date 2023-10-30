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
            texts.Add("환영합니다..");
            texts.Add("좋습니다.");
            texts.Add("축하드립니다.");
            texts.Add("평안한 되십시오.");

        }

        private void button1_Click(object sender, EventArgs e)
        {
            label1.Text = "";
            label1.Text = texts[new Random().Next(texts.Count)]; 
        }
    }
}
