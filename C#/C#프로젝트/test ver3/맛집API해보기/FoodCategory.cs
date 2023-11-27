using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace 맛집API해보기
{
    public partial class FoodCategory : UserControl
    {
        MatjipDataForm matjipDataForm = new MatjipDataForm();
       
        public FoodCategory()
        {
            InitializeComponent();
        }

        private void KoreanFood_button_Click(object sender, EventArgs e)
        {
            DataManager.Load("동구", "한식");
            matjipDataForm.ShowDialog();
        }

        private void JapaneseFood_button_Click(object sender, EventArgs e)
        {
            DataManager.Load("동구", "일식");
            matjipDataForm.ShowDialog();
        }
      
    }
}
