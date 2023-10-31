using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace HelloCsharp06_02
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
            // 코드상에서 버튼 만들고. 버튼에 이벤트추가.
            Button b = new Button();
            b.Location = new Point(100, 100);
            b.Text = "OK";
            b.Click += B_Click;// 클릭 이벤트 추가.
            Controls.Add(b);

            // 그리고 기존에 있는 버튼에 새로운 이벤트 추가
            button1.Click += B_Click;



        }

        private void B_Click(object sender, EventArgs e)
        {
            MessageBox.Show("TEst :" + Fibonacci(10));
          
        }

        // int 4byte
        // long 8byte
        Dictionary<int, long > memo = new Dictionary<int, long>();  

        long Fibonacci(int num)
        {
            if(num<=0) {
                return 0;
            }
            if(num == 1)
            {
                return 1;
            }
            if(memo.ContainsKey(num))
            {
                return memo[num];
            }
            else
            {
                long answer = Fibonacci(num-2)+Fibonacci(num-1);
                memo[num] = answer;
                return memo[num];

            }
        }


        private void button1_Click(object sender, EventArgs e)
        {
            // int num = int.Parse(textBox1.Text);
            // num이라는 변수가 선언이 되고, 거기에 txtBox1의 글자가 숫자로 
            // 변환이 되어 들어가고, 잘못된 값이 들어갈 경우 num =0이 된다.
            // vs2015까지는 int.TryParse 할때
            // out int num 이 안되고 int num으로 먼저 변수 선언하고 나서.
            // out num 이렇게 넣어야함.

            int num2; // 2017 이전 스타일.
            int.TryParse(textBox1.Text, out num2);  

            int.TryParse(textBox1.Text, out int num); // 2017부터 됨
            label1.Text = Fibonacci(num) + "";

        }

        //enable = true상태에서 interval에 적힌 ms만큼 반복
        private void timer1_Tick(object sender, EventArgs e)
        {
            label2.Text =
                DateTime.Now.ToString("yyyy년MM월dd일 HH시mm분ss초");
        } 
    }
}
