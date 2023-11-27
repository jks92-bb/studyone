using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace 맛집API해보기
{
    public class FormEvent
    {
        // ESC 키를 눌렀을 때 폼을 닫는 메소드
        public static void CloseFormOnEscKey(object sender, KeyEventArgs e)
        {
            // ESC 키를 눌렀을 때 폼을 닫음
            if (e.KeyCode == Keys.Escape)
            {
                if (sender is Form form)
                {
                    form.Close();
                }
            }
        }
    }
}
