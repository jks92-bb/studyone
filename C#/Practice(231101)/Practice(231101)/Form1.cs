﻿using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace Practice_231101_
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void button1_Click(object sender, EventArgs e)
        {
            Lion l= new Lion();
            //다형성에 의해서 왼쪽 추상 클래스
            // 오른쪽은 그걸 상속받은 자손 클래스
            Animal a = new Lion();
            Cat c = new Lion();

            //추상클래스의 또 다른 특징
            // 추상 클래스는 추상적이므로
            // 불완전하다 따라서 추상클래스 단독으로
            // 인스턴스 만들 수 없다.
            //Animal aa = new Animal();
            // Cat cc = new Cat();
            // Animal ac = new Cat();

            l.Sleep();
            l.Eat();
            l.gromming();
            l.hunt();


        }

        private void button2_Click(object sender, EventArgs e)
        {
            Tiger tiger = new Tiger();
            tiger.Name = "춘식이";
            tiger.Age = 10;
            tiger.Sleep();  
            tiger.Eat();                
            tiger.gromming();
            tiger.hunt(); 
        }

        private void button3_Click(object sender, EventArgs e)
        {
            DomesticCat t = new DomesticCat();

            t.masterName = "집사";
            t.Name = "춘식이";
            t.Age = 10;
            t.Sleep();
            t.Eat();
            t.gromming();
            t.hunt();
        }

        private void button4_Click(object sender, EventArgs e)
        {
            KoreanShortHairCat t = new KoreanShortHairCat();
           
            t.Name = "쭈니";
            t.Age = 10;
            t.Sleep();
            t.Eat();
            t.gromming();
            t.hunt();
        }

        private void button5_Click(object sender, EventArgs e)
        {
            // 모달
            //1. 코드가 멈춤
            // 2. 뒤에 있는 창 제어 불가.
            MyForm m = new MyForm();
            m.ShowDialog(); //모달(Modal)
            //MessageBox : Modal에 속함
            MessageBox.Show("Test");
            
        }

        private void circleButton1_Click(object sender, EventArgs e)
        {
            // 모달리스
            // 뒤에 창 제어 가능하고 코드는 계속 진행.
            MyForm m = new MyForm();
            m.Show(); // 모달리스(Modeless)
            MessageBox.Show("Test");
        }
    }
}
