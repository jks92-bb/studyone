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
            this.textBox2PWD.KeyDown += passwordTextBox_KeyDown;

            // 폼에 KeyDown 이벤트 핸들러 등록
            this.KeyPreview = true;
            this.KeyDown += FormEvent.CloseFormOnEscKey;
        }

        // 엔터키 입력시 로그인되는 함수
        private void passwordTextBox_KeyDown(object sender, KeyEventArgs e)
        {
            if (e.KeyCode == Keys.Enter)
            {
                // 엔터가 눌렸을때 로그인 수행
                this.buttonLogin_Click(sender, e);
                // 이벤트 처리후 이벤트가 더이상 전파되지않도록
                e.Handled = true;
                e.SuppressKeyPress = true;

            }
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

                    //  // 현재 로그인한 사용자의 ID를 가져오기
                    string currentUserId = DBUserHelper.GetCurrentUserId();

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
                //handle exception
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
        
     
        

    }
}
