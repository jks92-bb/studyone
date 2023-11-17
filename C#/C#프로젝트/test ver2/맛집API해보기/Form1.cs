using Newtonsoft.Json.Linq;
using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Net;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;
using static System.Windows.Forms.VisualStyles.VisualStyleElement;

namespace 맛집API해보기
{
    public partial class Form1 : Form
    {
        MatjipDataForm matjipdataform = new MatjipDataForm();
        public Form1()
        {
            InitializeComponent();
            Side_panel.Height = Home_button.Height;
            Side_panel.Top = Home_button.Top;
            groupBox1.BringToFront();
        }
        // DB에 API데이터 넣는 버튼
        private void button1_Click(object sender, EventArgs e)
        {
            string[] matjips = new string[] { "중구", "수성구", "남구", "동구", "서구", "북구", "달서구", "달성군" };

            for (int i = 0; i < matjips.Length; i++)
            {
                using (WebClient wc = new WebClient())
                {
                    wc.Encoding = Encoding.UTF8;

                    try
                    {
                        //API에서 데이터를 가져오는 URL
                        string apiUrl = "https://www.daegufood.go.kr/kor/api/tasty.html?mode=json&addr=" + matjips[i];

                        //JSON 형식의 데이터를 문자열로 다운로드
                        string json = wc.DownloadString(apiUrl);
                        //JSON데이터 파싱
                        var jArray = JObject.Parse(json);
                        var jarr = jArray["data"];
                        var total = jArray["total"];

                        int count = 0;

                        //JSON 데이터를 Good 객체로 변환하여 List에 추가
                        while (count < int.Parse(total.ToString()))
                        {

                            DBHelper.insertData(jarr[count]["cnt"].ToString(),
                                jarr[count]["OPENDATA_ID"].ToString(),
                                jarr[count]["GNG_CS"].ToString(),
                                jarr[count]["FD_CS"].ToString(),
                                jarr[count]["BZ_NM"].ToString(),
                                jarr[count]["TLNO"].ToString(),
                                jarr[count]["MBZ_HR"].ToString(),
                                jarr[count]["PKPL"].ToString(),
                                jarr[count]["HP"].ToString(),
                                jarr[count]["BKN_YN"].ToString(),
                                jarr[count]["INFN_FCL"].ToString(),
                                jarr[count]["MNU"].ToString(),
                                jarr[count]["SMPL_DESC"].ToString(),
                                jarr[count]["SEAT_CNT"].ToString(),
                                jarr[count]["SBW"].ToString(),
                                jarr[count]["PSB_FRN"].ToString(),
                                jarr[count]["BUS"].ToString(),
                                jarr[count]["BRFT_YN"].ToString(),
                                jarr[count]["DSSRT_YN"].ToString());
                            count++;
                        }

                    }
                    catch (Exception ex)
                    {
                        Console.WriteLine("데이터 가져오기 또는 파싱 오류: " + ex.Message);
                        // 예외처리: 로깅이나 사용자에게 알림 등을 추가할 수 있음
                    }
                }
            }
        }

        // 대구시 맛집 전체 조회 버튼 클릭시
        private void button2_Click(object sender, EventArgs e)
        {
            //dataGridView1.DataSource = null;
            //dataGridView1.DataSource = DataManager.matJips;
        }
        // Home 버튼 클릭시
        private void Home_button_Click(object sender, EventArgs e)
        {
            Side_panel.Height = Home_button.Height;
            Side_panel.Top = Home_button.Top;
            groupBox1.BringToFront();
        }
        // MyPlace 버튼 클릭시
        private void MyPlace_button_Click(object sender, EventArgs e)
        {
            Side_panel.Height = MyPlace_button.Height;
            Side_panel.Top = MyPlace_button.Top;
            myPlace1.BringToFront();
        }
        // 동구 버튼 클릭시
        private void donggu_button_Click(object sender, EventArgs e)
        {
            DataManager.Gu_Load("동구");
            matjipdataform.ShowDialog();
        }
        // 북구 버튼 클릭시
        private void bukgu_button_Click(object sender, EventArgs e)
        {
            DataManager.Gu_Load("북구");
            matjipdataform.ShowDialog();
        }
        // 서구 버튼 클릭시
        private void seogu_button_Click(object sender, EventArgs e)
        {
            DataManager.Gu_Load("서구");
            matjipdataform.ShowDialog();
        }
        // 중구 버튼 클릭시
        private void junggu_button_Click(object sender, EventArgs e)
        {
            DataManager.Gu_Load("중구");
            matjipdataform.ShowDialog();
        }
        // 수성구 버튼 클릭시
        private void suseonggu_button_Click(object sender, EventArgs e)
        {
            DataManager.Gu_Load("수성구");
            matjipdataform.ShowDialog();
        }
        // 남구 버튼 클릭시
        private void namgu_button_Click(object sender, EventArgs e)
        {
            DataManager.Gu_Load("남구");
            matjipdataform.ShowDialog();
        }

        // 달서구 버튼 클릭시
        private void dalseogu_button_Click(object sender, EventArgs e)
        {
            DataManager.Gu_Load("달서구");
            matjipdataform.ShowDialog();
        }

        // 달성군 버튼 클릭시
        private void dalseonggun_button_Click(object sender, EventArgs e)
        {
            DataManager.Gu_Load("달성군");
            matjipdataform.ShowDialog();
        }

        // 로그아웃 버튼 클릭시
        private void LogOutpictureBox_Click(object sender, EventArgs e)
        {
            Dispose();
        }
    }  
}


