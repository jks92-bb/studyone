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

namespace HeyAPI_231106_
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void button1_Click(object sender, EventArgs e)
        {
            List<GoodPlace> list = new List<GoodPlace>();
            using (WebClient wc = new WebClient())
            {
                wc.Encoding = Encoding.UTF8;
                var json = wc.DownloadString("https://api.odcloud.kr/api/3047940/v1/uddi:b7817f63-283f-4857-a34f-bd0e383a6545_201907161308?page=1&perPage=10&serviceKey=5yc3PHYWjB8vIqrwOK%2FTSWcKHhDYNacfLGjFQE%2BSPWmXTBg0vuZV%2FWkCQ%2FwJGV4rA6ch7QFRJe8nLu5UZEhHDQ%3D%3D");
                var jArray = JObject.Parse(json);
                int.TryParse(jArray["currentCount"].ToString(), out int count);
                for (int i = 0; i < count; i++)
                {
                    GoodPlace place = new GoodPlace();
                    place.name = jArray["data"][i]["상호명"].ToString();
                    place.address = jArray["data"][i]["주소"].ToString();
                    place.mainMenu = jArray["data"][i]["주메뉴"].ToString();
                    place.phoneNumber = jArray["data"][i]["전화번호"].ToString();
                    list.Add(place);
                }
            }
            dataGridView1.DataSource = null;
            dataGridView1.DataSource = list;
        }
    }
}
