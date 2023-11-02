using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace HelloCsharp08_231102_
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void button1_Click(object sender, EventArgs e)
        {
            //사번이 문자열일 경우
            Sawon  <string> dj = new Sawon <string>();
            dj.Number = textBox1.Text;
            label1.Text = "사번은" + dj.Number + "입니다.";

        }

        private void button2_Click(object sender, EventArgs e)
        {
            // 사번이 숫자일 경우
            Sawon  <int> sh = new Sawon <int>();
            int.TryParse(textBox2.Text, out int num); //별도의 예외처리 해야함.int 불편
            sh.Number = num;
            label2.Text = "사번은" + sh.Number + "입니다.";


        }

        //비행기 움직이는 함수
        // 이 함수가 실행되면서
        //out키워드가 붙은 건
        // 함수 바깥에 있는 변수 인데, 그것의 값이 바뀐다.
        // 마치 C언어의 pointer나 C#의 ref처럼.
        // ref : 참조자, 함수에서 값이 바뀌면 바깥에서도 바뀜.
        // out : 참조자, 함수에서 값이 바뀌면 바깥에서도 바뀌고 반드시 대입문이 필요함.
        // 즉 여기선 rx =0; ry = 0 이런거라도 넣어야함.
        // out은 할당이 의무.(=)
        void NextPosition(int x, int y,int vx, int vy, out int rx, out int ry)
        {
            //다음 위치 = 현재 위치 + 현재 속도
            rx = x + vx; 
            ry = y + vy;
        }
        private void button3_Click(object sender, EventArgs e)
        {
            //environment.NewLine = \n이랑 똑같음 (윈도우 기준)
            int x=0, y = 0; // x와 y 모두 0
            string nowPos =$"현재위치 :({x},{y})" + Environment.NewLine;                              
            int movePos = int.Parse(textBox3.Text); // 속도에 영향 주는 변수
            NextPosition(x, y,movePos+ 10, movePos +20, out x, out y);
            nowPos += $"이동 후 위치 :({x},{y})" + Environment.NewLine;
            label3.Text = nowPos;   
        }

        List<Product>produts = new List<Product>();
        // 제품 추가 및 출력버튼
        private void button4_Click(object sender, EventArgs e)
        {
            produts.Add(new Product() { Name=textBox4.Text});
            produts.Last().Price =int.Parse(textBox5.Text);
           // produts[0].Price = int.Parse(textBox5.Text); //C#이라서 배열 인덱스로 불러들일수 있다. java는 get set

            string prices = "";
            foreach(var item in produts)
            {
                prices += item+"\n"; // ToString 오버라이드 해야 쓸 수 있음.
               
            }
            label4.Text = prices;

        }

        // 제품을 가격순으로 출력할 버튼
        private void button5_Click(object sender, EventArgs e)
        {
            label4.Text = "";
            produts.Sort() ;// Product에 Icomparable 의 CompareTo가 구현되어 있어야 된다.
            foreach(var item in produts)    
                label4.Text += item+"\n";

            //인터페이스도 다형성을 적용받음.
            // 추상클래스와 마찬가지로 단독으로 인스턴스 생성 불가능.
            //IComparable ic = new IComparable();
            IComparable < Product > i = new Product();
        }
    }
}
