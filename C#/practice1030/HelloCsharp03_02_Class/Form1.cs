using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace HelloCsharp03_02_Class
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();

            product.companyName = "경북산업마트";

            //첫번째 방법 = 직접 대입.
            product p1 = new product();
            p1.Name = "마이크 ";
            p1.price = 90000;
            product p2 = new product();
            p2.Name = "새콤달콤";
            p2.price = 500;
            product p3 = new product();
            p3.Name = "새콤달콤";
            p3.price = 500;

            // 두번째 방법 = 선언과 동시에 값을 대입 (생성자랑 관계 없음)
            product p4 = new product() {Name = "바디워시", price = 50000 };
            // 생성자를 활용하는 방법 (자바랑 동일)
            student s1 = new student(1, "이순신");

            Console.WriteLine(p2 == p3);
            // 그냥 f5 로 실행해서 출력부분을 보거나
            // 옵션을 건드려서 콘솔창이 나오게 하면 바로 아래 출력 콘솔창에서 보는게 가능해짐.

            MessageBox.Show("TEST " + (p2 == p3)); // 메모리 위치 비교.
            
            //Console.WriteLine(p2=p3);

            //p1.comapnyName


            Animal a = new Animal();
            a.setMasterName("이순신");
            Console.WriteLine(a.getMasterName());
            a.Species = "개";    //"개" = value
            Console.WriteLine(a.Species); // get으로 리턴
            a.ID = 1;   // 1 = value.
            Console.WriteLine(a.ID);    // get으로  id리턴.
            a.Name = "구구";
            a.age = 10;

            GameCharacter g1 = new GameCharacter();
            g1.ID = "핑크";
            GameCharacter g2 = new GameCharacter("레드");
            MessageBox.Show(GameCharacter.theNumberofUser +"명");

           List<GameCharacter> list = new List<GameCharacter>();
            list.Add(g1);
            list.Add(g2);

            int i = 1;
            foreach (var item in list)
            {
                Label label = new Label();
                label.Text = item.ID;
                label.Location = new Point(10,10 + (100*i));
                i++;    
                Controls.Add(label);
            }
            

        }
    }
}
