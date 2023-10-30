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


    public partial class Form1 : Form
    {


        #region student


        public Form1()
        {
            InitializeComponent();
            List<student> students = new List<student>();
            students.Add(new student() { Name = "이순신", grade = 1 });
            students.Add(new student() { Name = "이순자", grade = 2 });
            students.Add(new student() { Name = "이주신", grade = 3 });
            students.Add(new student() { Name = "김순신", grade = 4 });
            students.Add(new student() { Name = "장순신", grade = 1 });
            students.Add(new student() { Name = "전순신", grade = 2 });

            for (int i = 0; i < students.Count; i++)
            {
                Label label = new Label();
                label.Text = $"{students[i].grade}학년 {students[i].Name} 학생";
                label.AutoSize = true;
                label.Location = new Point(13, 13 + (23 + 3) * i);
                Controls.Add(label);
            }

            // 뭔가를 삭제할 땐  역 for문을 써야 함.
            // 그래야 indexBoundError 나 indexOverFlow에러가 나지 않는다.

            for (int i = students.Count - 1; i >= 0; i--)
            {
                if (students[i].grade > 1) //학년이 2학년 이상일 경우
                {
                    students.RemoveAt(i); // i번째 삭제.
                }

            }

            for (int i = 0; i < students.Count; i++)
            {
                Label label = new Label();
                label.Text = $"{students[i].grade}학년 {students[i].Name} 학생";
                label.AutoSize = true; // 글자 길이도 늘어난다.
                label.Location = new Point(130, 13 + (23 + 3) * i);
                Controls.Add(label);
            }

            #endregion


        }


        private void button1_Click(object sender, EventArgs e)
        {
            Hide();
            new Form2().ShowDialog();
            Show();
        }

        private void button2_Click(object sender, EventArgs e)
        {
            Hide(); // 뒤에 창 숨김
            new Form3().ShowDialog();
            Show(); // 뒤에 창 다시 나타남.

        }

        private void button3_Click(object sender, EventArgs e)
        {
            Hide();
            new Form4().ShowDialog();
            Show();
        }


    }
}

