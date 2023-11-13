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
using System.Xml.Linq;

namespace GOODRES
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
            comboBox1.Items.Add("중구");
            comboBox1.Items.Add("동구");
            comboBox1.Items.Add("서구");
            comboBox1.Items.Add("남구");
            comboBox1.Items.Add("북구");
            comboBox1.Items.Add("수성구");
            comboBox1.Items.Add("달서구");
            comboBox1.Items.Add("달성군");
        }

        private void comboBox1_SelectedIndexChanged(object sender, EventArgs e)
        {
            List<Good> goods = new List<Good>();
            int count = 0;

            string[] matjips = new string[]
            {
              "https://www.daegufood.go.kr/kor/api/tasty.html?mode=json&addr=%EC%A4%91%EA%B5%AC"/*중구*/,
              "https://www.daegufood.go.kr/kor/api/tasty.html?mode=json&addr=%EB%8F%99%EA%B5%AC"/*동구*/,
              "https://www.daegufood.go.kr/kor/api/tasty.html?mode=json&addr=%EC%84%9C%EA%B5%AC"/*서구*/,
              "https://www.daegufood.go.kr/kor/api/tasty.html?mode=json&addr=%EB%82%A8%EA%B5%AC"/*남구*/,
              "https://www.daegufood.go.kr/kor/api/tasty.html?mode=json&addr=%EB%B6%81%EA%B5%AC"/*북구*/,
              "https://www.daegufood.go.kr/kor/api/tasty.html?mode=json&addr=%EC%88%98%EC%84%B1%EA%B5%AC"/*수성구*/,
              "https://www.daegufood.go.kr/kor/api/tasty.html?mode=json&addr=%EB%8B%AC%EC%84%9C%EA%B5%AC"/*달서구*/,
              "https://www.daegufood.go.kr/kor/api/tasty.html?mode=json&addr=%EB%8B%AC%EC%84%B1%EA%B5%B0"/*달성군*/              
            };
            if (comboBox1.SelectedIndex == 0)
            {
                WebClient wc = new WebClient();
                wc.Encoding = Encoding.UTF8;
                var json = wc.DownloadString(matjips[0]);
                var jArray = JObject.Parse(json);
                var jarr = jArray["data"];
                var total = jArray["total"];

                while (count < int.Parse(total.ToString()))
                {
                    Good temp = new Good(
                        jarr[count]["cnt"].ToString(),
                        jarr[count]["OPENDATA_ID"].ToString(),
                        jarr[count]["GNG_CS"].ToString(),
                        jarr[count]["FD_CS"].ToString(),
                        jarr[count]["BZ_NM"].ToString(),
                        jarr[count]["MNU"].ToString(),
                        jarr[count]["SMPL_DESC"].ToString(),
                        jarr[count]["MBZ_HR"].ToString());
                    count++;

                    goods.Add(temp);

                }
                dataGridView1.DataSource = null;
                dataGridView1.DataSource = goods;

            }
            else if (comboBox1.SelectedIndex == 1)
            {
                WebClient wc = new WebClient();
                wc.Encoding = Encoding.UTF8;
                var json = wc.DownloadString(matjips[1]);
                var jArray = JObject.Parse(json);
                var jarr = jArray["data"];
                var total = jArray["total"];

                while (count < int.Parse(total.ToString()))
                {
                    Good temp = new Good(
                        jarr[count]["cnt"].ToString(),
                        jarr[count]["OPENDATA_ID"].ToString(),
                        jarr[count]["GNG_CS"].ToString(),
                        jarr[count]["FD_CS"].ToString(),
                        jarr[count]["BZ_NM"].ToString(),
                        jarr[count]["MNU"].ToString(),
                        jarr[count]["SMPL_DESC"].ToString(),
                        jarr[count]["MBZ_HR"].ToString());
                    count++;

                    goods.Add(temp);

                }
                dataGridView1.DataSource = null;
                dataGridView1.DataSource = goods;
            }
            else if (comboBox1.SelectedIndex == 2)
            {
                WebClient wc = new WebClient();
                wc.Encoding = Encoding.UTF8;
                var json = wc.DownloadString(matjips[2]);
                var jArray = JObject.Parse(json);
                var jarr = jArray["data"];
                var total = jArray["total"];

                while (count < int.Parse(total.ToString()))
                {
                    Good temp = new Good(
                        jarr[count]["cnt"].ToString(),
                        jarr[count]["OPENDATA_ID"].ToString(),
                        jarr[count]["GNG_CS"].ToString(),
                        jarr[count]["FD_CS"].ToString(),
                        jarr[count]["BZ_NM"].ToString(),
                        jarr[count]["MNU"].ToString(),
                        jarr[count]["SMPL_DESC"].ToString(),
                        jarr[count]["MBZ_HR"].ToString());
                    count++;

                    goods.Add(temp);

                }
                dataGridView1.DataSource = null;
                dataGridView1.DataSource = goods;
            }
            else if (comboBox1.SelectedIndex == 3)
            {
                WebClient wc = new WebClient();
                wc.Encoding = Encoding.UTF8;
                var json = wc.DownloadString(matjips[3]);
                var jArray = JObject.Parse(json);
                var jarr = jArray["data"];
                var total = jArray["total"];

                while (count < int.Parse(total.ToString()))
                {
                    Good temp = new Good(
                        jarr[count]["cnt"].ToString(),
                        jarr[count]["OPENDATA_ID"].ToString(),
                        jarr[count]["GNG_CS"].ToString(),
                        jarr[count]["FD_CS"].ToString(),
                        jarr[count]["BZ_NM"].ToString(),
                        jarr[count]["MNU"].ToString(),
                        jarr[count]["SMPL_DESC"].ToString(),
                        jarr[count]["MBZ_HR"].ToString());
                    count++;

                    goods.Add(temp);

                }
                dataGridView1.DataSource = null;
                dataGridView1.DataSource = goods;
            }
            else if (comboBox1.SelectedIndex == 4)
            {
                WebClient wc = new WebClient();
                wc.Encoding = Encoding.UTF8;
                var json = wc.DownloadString(matjips[4]);
                var jArray = JObject.Parse(json);
                var jarr = jArray["data"];
                var total = jArray["total"];

                while (count < int.Parse(total.ToString()))
                {
                    Good temp = new Good(
                        jarr[count]["cnt"].ToString(),
                        jarr[count]["OPENDATA_ID"].ToString(),
                        jarr[count]["GNG_CS"].ToString(),
                        jarr[count]["FD_CS"].ToString(),
                        jarr[count]["BZ_NM"].ToString(),
                        jarr[count]["MNU"].ToString(),
                        jarr[count]["SMPL_DESC"].ToString(),
                        jarr[count]["MBZ_HR"].ToString());
                    count++;

                    goods.Add(temp);

                }
                dataGridView1.DataSource = null;
                dataGridView1.DataSource = goods;
            }

            else if (comboBox1.SelectedIndex == 5)
            {
                WebClient wc = new WebClient();
                wc.Encoding = Encoding.UTF8;
                var json = wc.DownloadString(matjips[5]);
                var jArray = JObject.Parse(json);
                var jarr = jArray["data"];
                var total = jArray["total"];

                while (count < int.Parse(total.ToString()))
                {
                    Good temp = new Good(
                        jarr[count]["cnt"].ToString(),
                        jarr[count]["OPENDATA_ID"].ToString(),
                        jarr[count]["GNG_CS"].ToString(),
                        jarr[count]["FD_CS"].ToString(),
                        jarr[count]["BZ_NM"].ToString(),
                        jarr[count]["MNU"].ToString(),
                        jarr[count]["SMPL_DESC"].ToString(),
                        jarr[count]["MBZ_HR"].ToString());
                    count++;

                    goods.Add(temp);

                }
                dataGridView1.DataSource = null;
                dataGridView1.DataSource = goods;
            }
            else if (comboBox1.SelectedIndex == 6)
            {
                WebClient wc = new WebClient();
                wc.Encoding = Encoding.UTF8;
                var json = wc.DownloadString(matjips[6]);
                var jArray = JObject.Parse(json);
                var jarr = jArray["data"];
                var total = jArray["total"];

                while (count < int.Parse(total.ToString()))
                {
                    Good temp = new Good(
                        jarr[count]["cnt"].ToString(),
                        jarr[count]["OPENDATA_ID"].ToString(),
                        jarr[count]["GNG_CS"].ToString(),
                        jarr[count]["FD_CS"].ToString(),
                        jarr[count]["BZ_NM"].ToString(),
                        jarr[count]["MNU"].ToString(),
                        jarr[count]["SMPL_DESC"].ToString(),
                        jarr[count]["MBZ_HR"].ToString());
                    count++;

                    goods.Add(temp);

                }
                dataGridView1.DataSource = null;
                dataGridView1.DataSource = goods;
            }
            else if (comboBox1.SelectedIndex == 7)
            {
                WebClient wc = new WebClient();
                wc.Encoding = Encoding.UTF8;
                var json = wc.DownloadString(matjips[7]);
                var jArray = JObject.Parse(json);
                var jarr = jArray["data"];
                var total = jArray["total"];

                while (count < int.Parse(total.ToString()))
                {
                    Good temp = new Good(
                        jarr[count]["cnt"].ToString(),
                        jarr[count]["OPENDATA_ID"].ToString(),
                        jarr[count]["GNG_CS"].ToString(),
                        jarr[count]["FD_CS"].ToString(),
                        jarr[count]["BZ_NM"].ToString(),
                        jarr[count]["MNU"].ToString(),
                        jarr[count]["SMPL_DESC"].ToString(),
                        jarr[count]["MBZ_HR"].ToString());
                    count++;

                    goods.Add(temp);

                }
                dataGridView1.DataSource = null;
                dataGridView1.DataSource = goods;
            }
        }
    }
}
