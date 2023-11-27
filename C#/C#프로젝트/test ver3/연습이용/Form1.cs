using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.IO;
using System.Linq;
using System.Net.Http;
using System.Net;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;
using System.Xml.Linq;

namespace 연습이용
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
            
        }

        private void button1_Click(object sender, EventArgs e)
        {
            for (int pageNo = 1; pageNo < 3; pageNo++)
            {
                string url = "http://apis.data.go.kr/1471000/FoodNtrIrdntInfoService1/getFoodNtrItdntList1"; // URL
                url += "?ServiceKey=" + "0XISxP5LzT%2F9wRWPYz2uhKSRHFOfy0KEfmeXBhkzW6NnNEX5SRObkPqPCT5VivS7WCXm3IR%2FVoV82ZilEjZx7A%3D%3D"; // Service Key          
                url += "&pageNo=" + pageNo;
                url += "&numOfRows=100";     // 총22602개. 한번에 100개씩 나오는게 최대네;;

                var request = (HttpWebRequest)WebRequest.Create(url);
                request.Method = "GET";

                //string results = string.Empty;
                //HttpWebResponse response;
                //using (response = request.GetResponse() as HttpWebResponse)
                //{
                //    StreamReader reader = new StreamReader(response.GetResponseStream());
                //    results = reader.ReadToEnd();
                //}

                //Console.WriteLine(results);


                XElement xe = XElement.Load(url);
                List<Food> list = (from item in xe.Descendants("item")
                                   select new Food()
                                   {
                                       Name = item.Element("DESC_KOR").Value,
                                       Weight = item.Element("SERVING_WT").Value,
                                       Kcal = item.Element("NUTR_CONT1").Value,
                                   }).ToList<Food>();
                dataGridView1.DataSource = null;
                dataGridView1.DataSource = list;
            }
        }
    }
}