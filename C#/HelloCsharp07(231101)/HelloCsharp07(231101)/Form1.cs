using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace HelloCsharp07_231101_
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }



        private void button1_Click(object sender, EventArgs e)
        {
            Animal a = new Animal();
            a.age = 10;
            label1.Text = "나이" + a.age;
            a.Eat();
            a.sleep();
            //a.Born();// protected 이므로 바깥에선 호출이 불가능.
            // 바깥이란 animal을 상속받지 않은 클래스를 의미.
        }

        private void button2_Click(object sender, EventArgs e)
        {
            Cat cat = new Cat(); // Born호출됨.
            cat.age = 5; //animal에 있는 age 상속
            label2.Text = "고양이 " + cat.age;
            cat.Eat();
            cat.sleep();
            cat.Meow();
        }

        private void button3_Click(object sender, EventArgs e)
        {
            Dog dog = new Dog(); //생성자 안에서 자동으로 Born이 호출됨
            dog.age = 17;
            dog.Color = "white";
            label3.Text = "개의 나이 " + dog.age + "\n";
            label3.Text += "개의 털 색깔" + dog.Color;
            dog.Eat();
            dog.sleep();
            dog.Bark();

        }

        private void button4_Click(object sender, EventArgs e)
        {
            List<Animal> Zoo = new List<Animal>();
            Zoo.Add(new Animal());
            Zoo.Add(new Animal());
            Zoo.Add(new Dog());
            Zoo.Add(new Dog());
            Zoo.Add(new Cat());
            Zoo.Add(new Cat());
            Animal a = new Animal();
            Animal b = new Cat();
            ((Cat)b).Meow();
            (b as Cat).Meow();
            if (b is Dog) // 타입체크
            {
                (b as Dog).Bark(); // 형변환
            }

            //var t = b as Cat == null ? b as Dog : b as Cat;
            var t = b as Cat;
            //t가 null이 아니다의 의미 : 형변환(as)성공
            // null이 된 건 형 변환 실패.
            if (t != null)
            {
                t.Meow();
            }

            Animal c = new Dog();
            Zoo.Add(a);
            Zoo.Add(b);
            Zoo.Add(c);
            Cat d = new Cat();
            Dog d2 = new Dog();
            Zoo.Add(d);
            Zoo.Add(d2);
            //foreach (Animal item in Zoo) { }
            foreach (var item in Zoo)
            {
                item.Eat();
                item.sleep();
                if (item is Cat) //타입체크 : is
                {
                    (item as Cat).Meow(); // 형변환 : as
                }
                if (item is Dog)
                {
                    (item as Dog).Bark();
                }
            }
        }

        private void button5_Click(object sender, EventArgs e)
        {
            //다형성
            //왼쪽 = 오른쪽의 관계가
            // 오른쪽 is 왼쪽

            // 핸드폰 s = new 스마트폰();
            //스마트폰 is 핸드폰 okay
            //핸드폰 is 스마트폰 x 누군가는 아직 피쳐폰.
            Cat cat = new Cat();    
            Dog dog = new Dog();


            Animal a = new Dog(); // Dog is animal.
            Animal b = new Cat(); // Cat is animal

            a.age = 1;
            a.Eat();
            a.sleep();
            ((Dog)a).Bark();
            //((Dog)b).Bark(); // b는 cat이므로 무작정 형변환 시 오류가 난다.
            if(b is Dog)
            {
                ((Dog)b).Bark();
            }
            if (b is Dog)
            {
                (b as Dog).Bark();
            }
            var test = b as Dog;
            Console.WriteLine(test==null);
            if (test != null)
            { test.Bark(); }

            List<Animal> animals = new List<Animal>()
            {
                new Dog(), new Cat() , new Dog()
            };
            foreach(var item in animals)
            {
                item.Eat();
                item.sleep();
                if(item is Dog)
                {
                    
                    (item as Dog) .Bark();
                    
                }
                if(item is Cat)
                {
                    (item as Cat ).Meow();
                }
            }    



            //코드 간소화 다형성
        }

        private void button6_Click(object sender, EventArgs e)
        {
            //Age는 인스턴스 별로 다들 각자 다름
            //count는 AGE, Dog , cat이 공유하고 있음.
            Cat cat = new Cat();
            Dog dog = new Dog();
            Animal animal = new Animal();
            cat.age = 5;
            dog.age = 7;
            animal.age = 50;
            Cat.count++;
            Dog.count++;
            Animal.count++;
            MessageBox.Show("count값" + Animal.count);
            MessageBox.Show("count값" + Cat.count);
            MessageBox.Show("count값" + Dog.count);
        }

        private void button7_Click(object sender, EventArgs e)
        {
            new Animal().Wash();
        }

        private void button8_Click(object sender, EventArgs e)
        {
            Cat c = new Cat();
            c.Wash();
            (c as Animal).Wash();
        }

        private void button9_Click(object sender, EventArgs e)
        {
            new Dog().Wash();   
        }
    }
}
