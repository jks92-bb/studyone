using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace 맛집API해보기
{
    public static class LoginSession
    {
        private static Form1 mainForm;
        private static Login loginForm;

        public static string CurrentUserId { get; private set; }
        public static bool IsUserLoggedIn => !string.IsNullOrEmpty(CurrentUserId);

        public static void SetMainForm(Form1 form)
        {
            mainForm = form;
        }

        public static void SetLoginForm(Login form)
        {
            loginForm = form;
        }

        public static void Login(string userId)
        {
            CurrentUserId = userId;
        }

        public static void logout()
        {
            CurrentUserId = null;
            MessageBox.Show("로그아웃 성공!");

            // Login 폼이 아직 열려있다면 닫습니다.
            mainForm?.Close();
            new Login().ShowDialog();
            // Form1을 엽니다.
            //Form1 form1 = new Form1();
            //Application.Run(form1);
        }

    }
}
