using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Data.SqlClient;
using System.Drawing;
using System.IO;
using System.Linq;
using System.Linq.Expressions;
using System.Net;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;
using System.Xml;

namespace Date_collect_231109_
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();

            //실시간 표시 레이블 초기화.
            label1.Text = DateTime.Now.ToString("yyyy년 MM월 dd일 HH시 mm분 ss초");

        }

        

        
        #region 블로그 검색예시 였었음.
        
        //public class APIExamSearchBlog
        //{

        //    static void Main(string[] args)
        //    {
                
        //            string query = "네이버"; // 검색할 문자열
        //            string url = "https://openapi.naver.com/v1/search/blog?query=" + query; // JSON 결과
        //                                                                                    // string url = "https://openapi.naver.com/v1/search/blog.xml?query=" + query;  // XML 결과
        //            HttpWebRequest request = (HttpWebRequest)WebRequest.Create(url);
        //            request.Headers.Add("X-Naver-Client-Id", "YOUR-CLIENT-ID"); // 클라이언트 아이디
        //            request.Headers.Add("X-Naver-Client-Secret", "YOUR-CLIENT-SECRET");       // 클라이언트 시크릿
        //            HttpWebResponse response = (HttpWebResponse)request.GetResponse();
        //            string status = response.StatusCode.ToString();
        //            try
        //            {
        //                string query = text_search.Text;

        //                //xml format
        //                string url = "https://openapi.naver.com/v1/search/blog.xml?query=" + query;

        //                /*
        //                 * JSON format
        //                 * string url = "https://openapi.naver.com/v1/search/blog?query"+query;
        //                 */

        //                HttpWebRequest request = (HttpWebRequest)WebRequest.Create(url);
        //                request.Headers.Add("X-Naver-Client-Id", clientId);
        //                request.Headers.Add("X-Naver-Client-Secret", clientSecert);
        //                HttpWebResponse response = (HttpWebResponse)request.GetResponse();
        //                string status = response.StatusCode.ToString();

        //                if (status == "OK")
        //                {
        //                    Stream stream = response.GetResponseStream();
        //                    StreamReader sr = new StreamReader(stream, Encoding.UTF8);

        //                    text_result.Text = sr.ReadToEnd();
        //                    //parsing phase
        //                    string parsed_ret = "";

        //                    XmlDocument xmldata = new XmlDocument();
        //                    xmldata.LoadXml(text_result.Text);

        //                    XmlElement root = xmldata.DocumentElement;

        //                    XmlNodeList nodelist = root.ChildNodes;

        //                    foreach (XmlNode nodeitem in nodelist)
        //                    {
        //                        for (int i = 0; i < nodeitem.ChildNodes.Count; ++i)
        //                        {
        //                            if (nodeitem.ChildNodes[i].Name == "item")
        //                                parsed_ret += nodeitem.ChildNodes[i]["title"].InnerText + "\r\n " + nodeitem.ChildNodes[i]["description"].InnerText + "\r\n\r\n";
        //                        }
        //                    }

        //                    text_parsed.Text = parsed_ret;
        //                    sr.Close();
        //                    stream.Close();
        //                }
        //                else
        //                {
        //                    MessageBox.Show("Error occured! :" + status);
        //                }
        //            }
        //            catch (Exception ee)
        //            {
        //                MessageBox.Show(ee.ToString());
        //            }





                
        //    }
            
        //}

        #endregion

        #region 실시간 표시
        private void timer1_Tick(object sender, EventArgs e)
        {
            label1.Text = DateTime.Now.ToString("yyyy년 MM월 dd일 HH시 mm분 ss초");
        }
        #endregion

        #region 검색버튼 클릭
        private void button1_Click(object sender, EventArgs e)
        {
            //네이버 API 클라이언트 아이디 시크릿.
            String ClientID = "auLK8QckZMQpy_ejkF_7";
            String ClientSecret = "1HiHnMxjb7";
            try
            {
                // 검색어 가져오기.
                String SearchText = search_box.Text;
                // API 요청 URL 생성
                String SearchURL = "Https://openapi.naver.com/v1/search/blog.xml?query=" + SearchText + "display=10&start=1&sort=sim";

                // HTTP 요청 초기화.
                HttpWebRequest web_request = (HttpWebRequest)WebRequest.Create(SearchURL);
                web_request.Method = "GET";
                web_request.Headers.Add("X-Naver-Client-Id", ClientID);
                web_request.Headers.Add("X-Naver-Client-Secret", ClientSecret);

                //HTTP 응답 받기.
                HttpWebResponse web_response = (HttpWebResponse)web_request.GetResponse();
                Stream stream = web_response.GetResponseStream();
                byte[] buf = new byte[4096];

                // 스트림에서 데이터 읽기.
               for (int len = 0; (len = stream.Read(buf, 0, buf.Length)) > 0;)
                {
                    // 텍스트 박스에 API 응답 내용 표시.
                    search_data.Text += Encoding.UTF8.GetString(buf, 0, len) + Environment.NewLine;
                }
            }
            catch (Exception ex)
            {
                // 오류 발생 시 메시지 표시.
                MessageBox.Show(ex.ToString());
            }

        }
        #endregion
    }
}
