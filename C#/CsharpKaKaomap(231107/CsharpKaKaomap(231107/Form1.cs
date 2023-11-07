using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace CsharpKaKaomap_231107
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();



        }

        private void button1_Click(object sender, EventArgs e)
        {
            List<Locale> locales = KakaoAPI.Search(textBox1.Text);
            listBox1.Items.Clear(); 
            foreach(Locale item in locales)
                listBox1.Items.Add(item);  
        }


        //특정 키를 누르고 다시 그 키가 올라올 때 이벤트가 호출됨.
        // 텍스트 박스에 엔터 쳤을때 바로 리스트 박스에 올라오게 하려고 생성했음.
        private void textBox1_KeyUp(object sender, KeyEventArgs e)
        {
            if(e.KeyCode==Keys.Enter)//엔터키 누르고 다시 올라올 때.
                button1.PerformClick();// 클릭시 강제 호출
        }

        //특정 부분 클릭시 이벤트 호출
        private void listBox1_SelectedIndexChanged(object sender, EventArgs e)
        {
            if (listBox1.SelectedIndex == -1)
                return;
            Locale ml = listBox1.SelectedItem as Locale;// 클릭한 걸 Locale 로 변경
            object[]pos = new object[] { ml.Lat,ml.Lng };
            HtmlDocument hdoc = webBrowser1.Document;
            hdoc.InvokeScript("setCenter", pos);
        }
    }
}
