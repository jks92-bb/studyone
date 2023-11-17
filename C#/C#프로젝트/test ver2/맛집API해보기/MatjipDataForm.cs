using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;
using static System.Windows.Forms.VisualStyles.VisualStyleElement;
using static System.Windows.Forms.VisualStyles.VisualStyleElement.ToolBar;

namespace 맛집API해보기
{
    public partial class MatjipDataForm : Form
    {
        public MatjipDataForm()
        {
            InitializeComponent();
            dataGridView1.DataSource = null;
            //if (DataManager.SelectMatJips.Count > 0)
            //{
            //    dataGridView1.DataSource = DataManager.SelectMatJips;
            //}
            dataGridView1.CellClick += dataGridViewCellClick;


        }
        private void MatjipDataForm_Load(object sender, EventArgs e)
        {
            dataGridView1.DataSource = null; // 이전 데이터 지우기
            dataGridView1.DataSource = DataManager.SelectMatJips;
        }

        private void KoreanFood_button_Click(object sender, EventArgs e)
        {
            dataGridView1.DataSource = null; // 이전 데이터 지우기
            DataManager.Cg_Load("한식");
            dataGridView1.DataSource = DataManager.SelectCategoryMatJips;
        }

        private void ChineseFood_button_Click(object sender, EventArgs e)
        {
            dataGridView1.DataSource = null; // 이전 데이터 지우기
            DataManager.Cg_Load("중식");
            dataGridView1.DataSource = DataManager.SelectCategoryMatJips;
        }

        private void JapaneseFood_button_Click(object sender, EventArgs e)
        {
            dataGridView1.DataSource = null; // 이전 데이터 지우기
            DataManager.Cg_Load("일식");
            dataGridView1.DataSource = DataManager.SelectCategoryMatJips;
        }

        private void ItalianFood_button_Click(object sender, EventArgs e)
        {
            dataGridView1.DataSource = null; // 이전 데이터 지우기
            DataManager.Cg_Load("양식");
            dataGridView1.DataSource = DataManager.SelectCategoryMatJips;
        }

        private void WorldFood_button_Click(object sender, EventArgs e)
        {
            dataGridView1.DataSource = null; // 이전 데이터 지우기
            DataManager.Cg_Load("세계요리");
            dataGridView1.DataSource = DataManager.SelectCategoryMatJips;
        }

        private void Fusion_button_Click(object sender, EventArgs e)
        {
            dataGridView1.DataSource = null; // 이전 데이터 지우기
            DataManager.Cg_Load("퓨전/뷔페");
            dataGridView1.DataSource = DataManager.SelectCategoryMatJips;
        }

        private void Desert_button_Click(object sender, EventArgs e)
        {
            dataGridView1.DataSource = null; // 이전 데이터 지우기
            DataManager.Cg_Load("디저트/베이커리");

            dataGridView1.DataSource = DataManager.SelectCategoryMatJips;
        }

        private void TraditionalTea_button_Click(object sender, EventArgs e)
        {
            dataGridView1.DataSource = null; // 이전 데이터 지우기
            DataManager.Cg_Load("전통차/커피전문점");

            dataGridView1.DataSource = DataManager.SelectCategoryMatJips;
        }

        private void SpecialBar_button_Click(object sender, EventArgs e)
        {
            dataGridView1.DataSource = null; // 이전 데이터 지우기
            DataManager.Cg_Load("특별한 술집");
            dataGridView1.DataSource = DataManager.SelectCategoryMatJips;
        }


        private void dataGridViewCellClick(object sender, DataGridViewCellEventArgs e)
        {
            GoodMatJip m = (sender as DataGridView).CurrentRow.DataBoundItem as GoodMatJip;
            상호명.Text = m.BZ_NM;
            주소.Text = m.GNG_CS;
            영업시간.Text = m.MBZ_HR;
            메뉴.Text = m.MNU;
            매장설명.Text = m.SMPL_DESC;
            매장전화번호.Text = m.TLNO;
            카테고리.Text = m.FD_CS;
            예약가능여부.Text = m.BKN_YN;

        }

        void bookmark(object s, EventArgs e)
        {
            
            
            if (주소.Text.Trim() == "")//양쪽 공백 지워도 아무것도 없다면
            { }
            else if (상호명.Text.Trim() == "") { }
            else
            {
                try
                {
                    GoodMatJip g= DataManager.SelectCategoryMatJips.Single
                        (x => x.isbn == textBox1.Text); // (=>) o 띄어쓰기 조심. 오류남. (= >) X
                    if (g.isBorrowed)
                        MessageBox.Show("이미 빌린 책");
                    else
                    {
                        RegisterUser.userId u = DataManager.users.Single
                            (x => x.Id == textBox3.Text);
                        b.userId = u.Id;
                        
                        b.isBorrowed = true;
                        b.BorrowedAt = DateTime.Now;
                        DataManager.Save();
                        refreshScreen();
                        MessageBox.Show($"즐겨찾기 하였습니다.");
                    }
                }
                catch (Exception)
                {
                                        
                }
            }
        }






    }
}
