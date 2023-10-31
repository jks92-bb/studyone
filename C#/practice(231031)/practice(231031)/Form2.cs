using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;
using static System.Windows.Forms.VisualStyles.VisualStyleElement.Header;

namespace practice_231031_
{
    public partial class Form2 : Form
    {
        int number;
        int answer;
        int timeLeft = 10;

        public Form2()
        {
            InitializeComponent();
            number = new Random().Next(1,10);
            Console.WriteLine(number);         
                    




        }

        private void button1_Click(object sender, EventArgs e)
        {
            int num = int.Parse(textBox1.Text);
            if(num<answer) {
                MessageBox.Show("정답보다 숫자가 작습니다.");
            }
            else if (num > answer)
            {
                MessageBox.Show("정답보다 숫자가 큽니다.");
            }
            else
            {
                MessageBox.Show("정답입니다.");
                number = new Random().Next(1, 10);
                Console.WriteLine(number);
            }


        }

        private void timer1_Tick(object sender, EventArgs e)
        {
            

            if (timeLeft > 0)
            {
                timeLeft--;
                label1.Text = timeLeft.ToString();
            }
            else
            {
                timer1.Stop();
                label1.Text = "Time over";
                label1.Visible = true;
            }
        }
    }
}
