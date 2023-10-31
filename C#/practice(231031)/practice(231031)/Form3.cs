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
    public partial class Form3 : Form
    {

        int timeLeft = 10;

        public Form3()
        {
            InitializeComponent();
            label1.Text = timeLeft.ToString();  // 초기 시간 설정.



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

        private void button1_Click(object sender, EventArgs e)
        {
            CheckForWin();
        }

        private void button2_Click(object sender, EventArgs e)
        {
            CheckForWin();
        }

        private void button3_Click(object sender, EventArgs e)
        {
            CheckForWin();
        }

        private void button4_Click(object sender, EventArgs e)
        {
            CheckForWin();
        }

        private void CheckForWin()
        {
            Random random = new Random();
            int randomNumber = random.Next(0, 2); // 0 또는 1 중에서 랜덤 선택

            if (randomNumber == 1 && timeLeft > 0)
            {
                label1.Text = "You won!";
                label1.Visible = true;
                timer1.Stop();
               
            }
            
        }
    }
}
