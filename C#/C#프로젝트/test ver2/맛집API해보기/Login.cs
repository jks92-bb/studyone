using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;
using System.Data.SqlClient;
using static System.Windows.Forms.VisualStyles.VisualStyleElement;

namespace 맛집API해보기
{
    public partial class Login : Form
    {
        public Login()
        {
            InitializeComponent();
            this.buttonLogin.Click += buttonLogin_Click;
            this.buttonCancel.Click += buttonCancel_Click;
        }

        private void buttonCancel_Click(object sender, EventArgs e)
        {
            this.DialogResult = DialogResult.Cancel;
            this.Close();
        }

        private void buttonLogin_Click(object sender, EventArgs e)
        {
            try
            {
                string login_id = textBoxID.Text;
                string login_password = textBox2PWD.Text;

                bool login = DBUserHelper.Login(login_id, login_password);

                if (login)
                {
                    
                    // Login 폼 숨기고
                    Hide();
                    // Login 폼 텍스트박스 초기화
                    textBoxID.Text = "";
                    textBox2PWD.Text = "";
                    // 로그인했을때 Form1 다시 띄우기 
                    Form1 form = new Form1();
                    form.ShowDialog();
                    Show();
                }
                else
                {
                    MessageBox.Show("아이디/암호를 확인해 주세요.");
                }
            }
            catch (Exception)
            {
                // handle exception
            }
        }

       

        // 아이디 찾기
        private void linkLabelID_LinkClicked(object sender, LinkLabelLinkClickedEventArgs e)
        {
            FindID findID = new FindID();
            findID.ShowDialog();
        }

        // 비밀번호 찾기
        private void linkLabelPWD_LinkClicked(object sender, LinkLabelLinkClickedEventArgs e)
        {
            FindPWD findPWD = new FindPWD();
            findPWD.ShowDialog();
        }

        // 회원가입
        private void linkLabelSign_LinkClicked(object sender, LinkLabelLinkClickedEventArgs e)
        {
            Sign_Up sign_Up = new Sign_Up();
            sign_Up.ShowDialog();

        }

        private void buttonLogin_Click_1(object sender, EventArgs e)
        {

        }
    }
}
