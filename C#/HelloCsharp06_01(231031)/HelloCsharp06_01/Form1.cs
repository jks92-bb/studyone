using System;
using System.Collections;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Security.Cryptography.X509Certificates;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace HelloCsharp06_01
{
    public partial class Form1 : Form
    {
        public Form1()
        {

            InitializeComponent();
            product p = new product();
            p.price = 100;
            // p.name = ?? 


            Dictionary<string, string> student = new Dictionary<string, string>();
            student["학번"] = "2321321312";
            student["이름"] = "정우성";
            student["성별"] = "남성";
            student["탈모여부"] = "없음";

            MessageBox.Show(student["학번"]);
            MessageBox.Show(student.ContainsKey("결혼여부") + "");
            MessageBox.Show(student.ContainsKey("탈모여부") + "");

            //List 같은 경우네 "인덱스"라는 게 있다.
            // 따지고 보면 키가 숫자인 dictionary 라고 볼 수도 있다.
            List<string>numbers = new List<string>();
            numbers.Add("이순신");
            numbers.Add("이순자");
            numbers.Add("강감찬");





            //ArraryList같은 경우에도 "인덱스"가 있다.
            //다만 안에 들어가는 데이터의 형태를 제한하지 않는다.
            ArrayList objectList = new ArrayList();
            objectList.Add("이순신");
            objectList.Add(454);
            objectList.Add(1);
            objectList.Add(new product());
            MessageBox.Show(objectList[0] + "");



        }

        void change(int num)
        {
            num = 1000; // a의 값을 복사만 해왔을 뿐
            // a랑 위치도 다르고 완전 별개의 존재.
        }

        void change(product p)
        {
            p.price = 0;
        }



        private void button1_Click(object sender, EventArgs e)
        {
            int a = 10;
            int b = a;
            b = 200;
            //b가 값이 바뀌었다고 해서 a의 값이 바뀌지 않음.
            label1.Text = "a= " + 10 + Environment.NewLine;
            label1.Text += "b= " + b + Environment.NewLine;
            change(a); // 이 메소드는  a의 값을 복사만 한 것.. 원본이랑 관계 없음
            label1.Text += "a= " + a + Environment.NewLine;
        }

        private void button2_Click(object sender, EventArgs e)
        {
            product product = new product();
            product.price = 100;
            product p2 = product;
            //procuct p2 = product2 불가.

            p2.price = 999;
            label2.Text = "product의 가격:" + product.price + "\n";

            change(product);
            label2.Text += "product의 가격:" + product.price + "\n";
            //product 클래스 .

            product p1 = product;
            p1.price = 1200;
            change(p1.price);
            label2.Text += "product의 가격:" + product.price + "\n";
            // 지금 현재 이건 int 클래스를 들고와서 1200price가 뜨는 것이다.
        }


        // ref  키워드 = 참조자
        // 해당 변수의 값뿐 아니라 그 변수의 위치도 같이 가져오는 것
        // 따라서 swap에서 값이 바뀌면 swap 바깥에 있는 원본의 값이 바뀐다.

        void swap(ref int a, ref int b)
        {
            int temp = a;
            a = b;
            b = temp;

        }


        private void button_swap_Click(object sender, EventArgs e)
        {

            int a = int.Parse(textBox_1.Text);  //3
            int b = int.Parse(textBox_2.Text);  //5
            MessageBox.Show("a =" + a, "b =" + b);
            swap(ref a, ref b);
            label_1.Text = a + "";  //5
            label_2.Text = b + "";  //3




        }
    }
}
