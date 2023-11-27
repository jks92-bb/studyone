using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Data.SqlClient;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace 맛집API해보기
{
    public partial class MyPlace : UserControl
    {
        public MyPlace()
        {
            InitializeComponent();
            User_label.Text = DBUserHelper.GetCurrentUserId() + "님의 Place";
        }
       
        private void Delete_button_Click(object sender, EventArgs e)
        {
            DeleteSelectedRow();
        }

        //데이터그리드뷰에 나타내는 메서드
             
       public void BindMyPlaceData()
        {
            try
            {
                // MyPlace 테이블의 데이터 가져오기
                DataTable myPlaceData = DBMyPlaceHelper.GetMyPlaceData(DBUserHelper.GetCurrentUserId());
                dataGridView1.DataSource = null;
                // DataGridView에 데이터 바인딩
                if(myPlaceData.Rows.Count > 0 )
                    dataGridView1.DataSource = myPlaceData;

                dataGridView1.SelectionMode = DataGridViewSelectionMode.FullRowSelect;
            }
            catch (Exception ex)
            {
                MessageBox.Show($"데이터를 불러오는 중 오류가 발생했습니다: {ex.Message}", "오류", MessageBoxButtons.OK, MessageBoxIcon.Error);
            }
        }

        //삭제하는 메서드
        private void DeleteSelectedRow()
        {
            if (dataGridView1.SelectedRows.Count > 0)
            {
                int selectedIndex = dataGridView1.SelectedRows[0].Index;
                string userId = DBUserHelper.GetCurrentUserId();

                try
                {
                    // 해당 행을 데이터베이스에서도 삭제
                    string bz_nm = dataGridView1.SelectedRows[0].Cells["BZ_NM"].Value.ToString(); // BZ_NM에 해당하는 셀의 값을 가져옴
                    DBMyPlaceHelper.DeleteMyPlace(userId, bz_nm); // 데이터베이스에서 삭제하는 메소드 호출

                    // DataGridView에서 선택된 행 삭제
                    dataGridView1.Rows.RemoveAt(selectedIndex);
                }
                catch (Exception ex)
                {
                    MessageBox.Show($"삭제 중 오류가 발생했습니다: {ex.Message}", "오류", MessageBoxButtons.OK, MessageBoxIcon.Error);
                }
            }
        }

 
    }
}

