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
            dataGridView1.CellClick += dataGridViewCellClick;
            // 폼에 KeyDown 이벤트 핸들러 등록
            this.KeyPreview = true;
            this.KeyDown += FormEvent.CloseFormOnEscKey;

        }
   
        private void MatjipDataForm_Load(object sender, EventArgs e)
        {
            dataGridView1.DataSource = null; // 이전 데이터 지우기
            dataGridView1.DataSource = DataManager.SelectMatJips;
            dataGridView1.SelectionMode = DataGridViewSelectionMode.FullRowSelect;
        }

        private void KoreanFood_button_Click(object sender, EventArgs e)
        {
            dataGridView1.DataSource = null; // 이전 데이터 지우기
            DataManager.Cg_Load("한식");
            dataGridView1.DataSource = DataManager.SelectCategoryMatJips;
            dataGridView1.SelectionMode = DataGridViewSelectionMode.FullRowSelect;
        }

        private void ChineseFood_button_Click(object sender, EventArgs e)
        {
            dataGridView1.DataSource = null; // 이전 데이터 지우기
            DataManager.Cg_Load("중식");
            dataGridView1.DataSource = DataManager.SelectCategoryMatJips;
            dataGridView1.SelectionMode = DataGridViewSelectionMode.FullRowSelect;
        }

        private void JapaneseFood_button_Click(object sender, EventArgs e)
        {
            dataGridView1.DataSource = null; // 이전 데이터 지우기
            DataManager.Cg_Load("일식");
            dataGridView1.DataSource = DataManager.SelectCategoryMatJips;
            dataGridView1.SelectionMode = DataGridViewSelectionMode.FullRowSelect;
        }

        private void ItalianFood_button_Click(object sender, EventArgs e)
        {
            dataGridView1.DataSource = null; // 이전 데이터 지우기
            DataManager.Cg_Load("양식");
            dataGridView1.DataSource = DataManager.SelectCategoryMatJips;
            dataGridView1.SelectionMode = DataGridViewSelectionMode.FullRowSelect;
        }

        private void WorldFood_button_Click(object sender, EventArgs e)
        {
            dataGridView1.DataSource = null; // 이전 데이터 지우기
            DataManager.Cg_Load("세계요리");
            dataGridView1.DataSource = DataManager.SelectCategoryMatJips;
            dataGridView1.SelectionMode = DataGridViewSelectionMode.FullRowSelect;
        }

        private void Fusion_button_Click(object sender, EventArgs e)
        {
            dataGridView1.DataSource = null; // 이전 데이터 지우기
            DataManager.Cg_Load("퓨전/뷔페");
            dataGridView1.DataSource = DataManager.SelectCategoryMatJips;
            dataGridView1.SelectionMode = DataGridViewSelectionMode.FullRowSelect;
        }

        private void Desert_button_Click(object sender, EventArgs e)
        {
            dataGridView1.DataSource = null; // 이전 데이터 지우기
            DataManager.Cg_Load("디저트/베이커리");
            dataGridView1.DataSource = DataManager.SelectCategoryMatJips;
            dataGridView1.SelectionMode = DataGridViewSelectionMode.FullRowSelect;
        }

        private void TraditionalTea_button_Click(object sender, EventArgs e)
        {
            dataGridView1.DataSource = null; // 이전 데이터 지우기
            DataManager.Cg_Load("전통차/커피전문점");
            dataGridView1.DataSource = DataManager.SelectCategoryMatJips;
            dataGridView1.SelectionMode = DataGridViewSelectionMode.FullRowSelect;
        }

        private void SpecialBar_button_Click(object sender, EventArgs e)
        {
            dataGridView1.DataSource = null; // 이전 데이터 지우기
            DataManager.Cg_Load("특별한 술집");
            dataGridView1.DataSource = DataManager.SelectCategoryMatJips;
            dataGridView1.SelectionMode = DataGridViewSelectionMode.FullRowSelect;
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

            try
            {
                Locale temp = KakaoAPI.SelectMap(m.GNG_CS);
                object[] pos = new object[] { temp.Lat, temp.Lng };
                HtmlDocument hdoc = webBrowser1.Document;
                hdoc.InvokeScript("setCenter", pos);

            }
            catch (Exception ex)
            {
                MessageBox.Show(ex.Message + "_" + ex.StackTrace);
            }
        }

        // 즐겨찾기버튼 클릭
        private void MyPlace_button_Click(object sender, EventArgs e)
        {
            //현재 로그인한 사용자의 ID를 가져오기
            string userId = DBUserHelper.GetCurrentUserId();
           
            //입력된 정보 가져오기
            string bz_nm = 상호명.Text;
            string fd_cs = 카테고리.Text;
            string gng_cs = 주소.Text;
            string tlno = 매장전화번호.Text;

            //MyPlace 등록
            
                DBMyPlaceHelper.RegisterMyPlace(userId, 상호명.Text, 카테고리.Text, 주소.Text, 매장전화번호.Text);
           
        }
            

            

          
        }
    }

