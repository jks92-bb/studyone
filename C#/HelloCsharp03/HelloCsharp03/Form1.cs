using System;
using System.Collections;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace HelloCsharp03
{
    public partial class Form1 : Form
    {

        // class의 name과 같은 속성에 해당함.
        string randomText = "안녕하세요. 처음뵙겠습니다.";

        //JAVA의 arraylist
        //C#의 list가 JAVA의 ArrayList랑 사실상 똑같음.
        List<string> nameList =
            new List<string> { "그래, 그래" };
        List<int> age = new List<int>{34, 23, 43};
        List<int> ag2 = new List<int>();

        //참고. c#에 있는 arraylist는
        // 자바의 arraylist<object>랑 동일.
        // 즉 아무거나 다 들어가는 리스트다.
        ArrayList tmilist = new ArrayList();  



        public Form1() // 생성자.
        {
            InitializeComponent(); // 그림 그리기.
            Button b = new Button();
            b.Text = "코드로 만든 버튼";
            b.AutoSize = true; // 글자가 길 경우 그에 따라 길이 늘어나는 거.
            b.Location = new Point(10, 10); 
            //controls: form1안에 있는 모든 구성요소들 (button들 등)
            Controls.Add(b); // add 코드가 없으면 b는 화면에 안 보임!
        }


        // 크래스의 메서드에 해당함.
        private void btn_test_Click(object sender, EventArgs e)
        {
            checkBox1.Text += "!";
            //this.checkBox1.Text = "Test";
            Random r = new Random();

            // 아래 두개 둘다 같다. char를 String으로 변환한 것.
           // checkBox2.Text = randomText[ r.Next(randomText.Length) ]+"";
            checkBox2.Text = randomText[r.Next(randomText.Length)].ToString();

            if(this.checkBox1.Checked = true)
            {
                
                MessageBox.Show("check 박스 변경 : !");
                
            }
            else { MessageBox.Show("Test2"); }

            //MessageBox.Show("반갑습니다.");
            

        }

        private void checkBox1_CheckedChanged(object sender, EventArgs e)
        {
          if(!checkBox1.Checked)
            {
                return;
            }

            if (checkBox1.Checked)
            {
                
                MessageBox.Show("클릭완료");
                checkBox1.Text = "label1";

            }
            //else
            //{
            //   // MessageBox.Show("클릭하시오.");

            //}                    

        }

        private void checkBox2_CheckedChanged(object sender, EventArgs e)
        {
            if (!checkBox2.Checked)
            {
                return;
            }
        }
    }
}
