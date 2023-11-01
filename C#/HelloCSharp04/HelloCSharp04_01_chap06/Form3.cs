using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace HelloCSharp04_01_chap06
{
    public partial class Form3 : Form
    {
        int limitTime = 0; //제한 시간
        int answer = 0; //정답
        int nowTime = 0; // 현재 시간(경과시간)
        public Form3()
        {
            InitializeComponent();
            label1.Text = "";
            label2.Text = "";
        }

        //타이머
        private void timer1_Tick(object sender, EventArgs e)
        {
            nowTime++; // 경과시간 증가 1초씩 지남.
            if (nowTime > limitTime)
            {
                label2.Text = "게임 끝";
                nowTime = 0;
                timer1.Enabled = false;

            }
        }

        //게임 시작 버튼
        private void button1_Click(object sender, EventArgs e)
        {
            timer1.Interval = 1000;
            timer1.Enabled = false; //일단 타이머를 멈춤

            //역for문
            for (int i = Controls.Count - 1; i >= 0; i--)
            {
                if (Controls[i] is Button) //버튼 타입익 것 발견시
                    {
                    Button temp = (Button)Controls[i];
                    if (int.TryParse(temp.Text, out int tempNum))
                        Controls.RemoveAt(i);
                }
            }





            //Textbox1에 숫자가 아닌 다른 값 넣었을 경우
            //if(int.TryParse(textBox1.Text, out limitTime)==false)
            if (!int.TryParse(textBox1.Text, out limitTime))
            {
                MessageBox.Show("제한시간을 제대로 입력하세오.");
                return;
            }

            label2.Text = "Game Start!";
            answer = new Random().Next(1, 26);
            Console.WriteLine("answer=" + answer);
            int count = 1; //순차적으로 버튼 위에 적을 텍스트
            for (int i = 0; i < 5; i++)
            {
                for (int j = 0; j < 5; j++)
                {
                    Button b = new Button();
                    Point p = new Point(); // 구조체, 위치값.
                    p.X = 15 + 100 * j;
                    p.Y = 15 + 15 + 25 * i;
                    b.Location = p;
                    b.Click += B_Click;
                    b.Text = "" + count; // 문자열로 만들려고 ""붙임. count.Tostring()같

                    count++;
                    Controls.Add(b);
                }
            }
            nowTime = 0; //경과시간을 초기화.
            timer1.Enabled = true; // 타이머 시작.

        }

        //시간지나고 나면 클릭하지 못하게 하기.
        private void B_Click(object sender, EventArgs e)
        {
            //object sender : 이벤트를 발생시킨 주체(=버튼)
            //throw new NotImplementedException();
            Button temp = (Button)sender;
            //if (temp.Text == answer.ToString()) { }
            if (temp.Text.Equals(answer.ToString()))
            {
                temp.BackColor = Color.White;
                label2.Text = "이김";
                nowTime = 0;
                timer1.Enabled = false;

            }
            else
            {
                temp.BackColor = Color.Red;
                label2.Text = "이건 보물이 아닙니다.";
            }

        }
    }
}
