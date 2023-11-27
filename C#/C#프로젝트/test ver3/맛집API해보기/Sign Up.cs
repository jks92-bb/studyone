using System.Data.SqlClient;
using System.Data;
using System.Windows.Forms;
using System;
using static System.Windows.Forms.VisualStyles.VisualStyleElement;
using System.Xml.Linq;
using 맛집API해보기;

namespace 맛집API해보기
{
    public partial class Sign_Up : Form
    {
        public Sign_Up()
        {
            InitializeComponent();
            // 폼에 KeyDown 이벤트 핸들러 등록
            this.KeyPreview = true;
            this.KeyDown += FormEvent.CloseFormOnEscKey;
        }

        private void Cancelbutton_Click(object sender, EventArgs e)
        {
            this.Close();
        }

        private void DCheckbutton_Click(object sender, EventArgs e)
        {
            string userId = IDtextBox.Text;

            if (string.IsNullOrEmpty(userId))
            {
                ShowMessageBox("아이디를 입력하세요.", "경고", MessageBoxIcon.Warning);
                return;
            }

            try
            {
                int userCount = DBUserHelper.CheckUserIdExists(userId);

                if (userCount > 0)
                {
                    ShowMessageBox("이미 존재하는 아이디입니다.", "경고", MessageBoxIcon.Warning);
                }
                else
                {
                    ShowMessageBox("사용 가능한 아이디입니다.", "알림", MessageBoxIcon.Information);
                }
            }
            catch (Exception ex)
            {
                ShowMessageBox("오류 발생: " + ex.Message, "오류", MessageBoxIcon.Error);
            }
            
        }

        private void Checkbutton_Click(object sender, EventArgs e)
        {
            string userId = IDtextBox.Text;
            string password = PWDtextBox.Text;

            if (string.IsNullOrEmpty(userId) || string.IsNullOrEmpty(password))
            {
                ShowMessageBox("아이디와 비밀번호를 모두 입력하세요.", "경고", MessageBoxIcon.Warning);
                return;
            }

            try
            {
               
                DBUserHelper.RegisterUser(userId, password, NametextBox.Text, QuestextBox.Text);
                ShowMessageBox("회원가입이 완료되었습니다.", "성공", MessageBoxIcon.Information);
                this.Close();
            }
            catch (Exception ex)
            {
                ShowMessageBox("오류 발생: " + ex.Message, "오류", MessageBoxIcon.Error);
            }
           
            
        }

        private void ShowMessageBox(string message, string caption, MessageBoxIcon icon)
        {
            MessageBox.Show(message, caption, MessageBoxButtons.OK, icon);
        }

    }
}