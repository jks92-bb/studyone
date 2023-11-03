using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace BookManager
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
            dataGridView1.Columns[0].HeaderText = "ISBN";
            dataGridView1.Columns[1].HeaderText = "책이름";
            dataGridView1.Columns[2].HeaderText = "출판사";
            dataGridView1.Columns[3].HeaderText = "페이지";
            dataGridView1.Columns[4].HeaderText = "회원ID";
            dataGridView1.Columns[5].HeaderText = "회원명";
            dataGridView1.Columns[6].HeaderText = "대여 여부";
            dataGridView1.Columns[7].HeaderText = "대여 시점";
            label5.Text = DateTime.Now.ToString("yyyy년 MM월 dd일 HH시 mm분 ss초");
            label1.Text = "전체 도서수 :" + DataManager.books.Count;
            label2.Text = "전체 회원수 :" + DataManager.users.Count;

        }

        private void timer1_Tick(object sender, EventArgs e)
        {
            label5.Text = DateTime.Now.ToString("yyyy년 MM월 dd일 HH시 mm분 ss초");
        }
    }
}
