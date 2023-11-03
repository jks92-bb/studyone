using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Drawing.Printing;
using System.Linq;
using System.Text;
using System.Threading;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace HelloCsharp_231103_
{
    public partial class Form1 : Form
    {
        delegate void TestDelegate();
        List<Product> products = new List<Product>();
        public Form1()
        {
            InitializeComponent();
            products.Add(new Product() { Name = "고구마", Id = 2, Price = 500 });
            //products[0].Name = "고구마";
            //products[0].Id = 2;
            //products[0].Price = 500;
            products.Add(new Product());
            products[1].Name = "귤";
            products[1].Id = 3;
            products[1].Price = 400;
            products.Add(new Product());
            products[2].Name = "사과";
            products[2].Id = 1;
            products[2].Price = 300;

            label1.Text = "";
            label2.Text = "";
            button2.Text = "가격 오름차순";
            button3.Text = "ID 내림차순";
            // AutoSize = true 옵션은 권장사항일까? 아니다.

            button2.AutoSize = true;    // 글자 길어지면 버튼 길이 늘어남.
            button3.AutoSize = true;

            Button b = new Button();
            b.Click += myEvent;
            b.Click += delegate (object s, EventArgs e)
            {
                SayMsg();
            };
            b.Click += (s, e) =>
            {
                MessageBox.Show("안녕하십니까.");
            };
            b.Location = new Point(100, 100);
            b.Text = "테스트";
            // 버튼 1개에 3개의 이벤트(=메서드) 가 들어감.
            b.Click -= myEvent;  // 메서드에 이름이 있으면 해당 메서드는 이벤트에서 제외 가능.

            Controls.Add(b);
        }

        private void myEvent(object s, EventArgs eventArgs)
        {
            MessageBox.Show("안녕하세요.");
        }

        void SayMsg()
        {
            MessageBox.Show("안녕");
        }

        void LoopFunc(TestDelegate a, int count)
        {
            for (int i = 0; i < count; i++)
            {
                a();
            }
        }
        private void button1_Click(object sender, EventArgs e)
        {
            SayMsg();   //한번 호출
            LoopFunc(SayMsg, 3); // saymsg3번호출

            // 무명 델리게이트 : 메서드이긴 한데 
            // 한번 만 쓰이는 메서드이며 이름이 없는 메서드
            LoopFunc(delegate () { MessageBox.Show("Test"); }, 2);


            //람다 : 무명 델리게이트를 축약한 형태
            LoopFunc(() => { MessageBox.Show("lambda"); }, 3);
        }

        int compare(Product a, Product b)
        {
            return a.Price.CompareTo(b.Price);
        }

        private void button2_Click(object sender, EventArgs e)
        {
            products.Sort(compare);
            foreach (var item in products)
                label1.Text += item;

        }

        private void button3_Click(object sender, EventArgs e)
        {

            ////무명 델리게이트
            //products.Sort(
            //    delegate(Product a, Product b)
            //    {
            //        return b.Id.CompareTo(a.Id);
            //    });

            //람다1(매개변수의 타입이랑 return 키워드도 생략했다.)
            //products.Sort((a,b) => b.Id.CompareTo(a.Id));
            //람다2
            products.Sort((a, b) => { return b.Id.CompareTo(a.Id); });

            foreach (var item in products)
                label2.Text += item;
        }

        void printA()
        {
            for (int i = 0; i < 100; i++)
                Console.Write('A');
        }
        private void button4_Click(object sender, EventArgs e)
        {
            Thread t1 = new Thread(printA);
            Thread t2 = new Thread(() =>
            {
                for (int i = 0; i < 100; i++)
                    Console.Write("B");
            });
            Thread t3 = new Thread(delegate ()
            {
                for (int i = 0; i < 100; i++)
                    Console.Write("C");
            });
            // 시분할 시스템
            // 비동기화
            t1.Start();
            t2.Start();
            t3.Start();
            new Thread(
                () =>
                {
                    for (int i = 0; i < 100; i++)
                        Console.Write("D");
                }).Start();


        }
    }
}
