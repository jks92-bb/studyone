using System;
using System.Collections.Generic;
using System.IO;
using System.Linq;
using System.Net;
using System.Text;
using System.Threading.Tasks;
using System.Web.Script.Serialization;

namespace 맛집API해보기
{
    public class KakaoAPI
    {
        //주소로 검색 
        public static Locale SelectMap(string text)
        {
            string url = "https://dapi.kakao.com/v2/local/search/address.json";
            string query = $"{url}?analyze_type=similar&page=1&size=10&query={text}";
            string restAPIKey = "799a3031dec6472f3a94b15adf4b9b70";   
            string Header = $"KakaoAK {restAPIKey}";
            WebRequest request = WebRequest.Create(query);
            request.Headers.Add("Authorization", Header);

            //응답받기
            WebResponse response = request.GetResponse();
            Stream stream = response.GetResponseStream();
            StreamReader reader = new StreamReader(stream, Encoding.UTF8);
            string json = reader.ReadToEnd();
            JavaScriptSerializer js = new JavaScriptSerializer();

            //dynamic : var랑 좀 다르게
            dynamic dob = js.Deserialize<dynamic>(json);
            dynamic docs = dob["documents"][0];

            string lname = docs["address_name"];
            double x, y;

            // road_address가 null인 경우에 대한 처리
            if (docs["road_address"] != null)
            {
                x = double.Parse(docs["road_address"]["x"]);
                y = double.Parse(docs["road_address"]["y"]);
            }
            else
            {
                x = double.Parse(docs["x"]);
                y = double.Parse(docs["y"]);
            }

            return new Locale(lname, y, x);
        }

        #region Keyword검색
        //public static List<Locale> Search(string text)
        //{
        //    List<Locale> list = new List<Locale>();//지역정보들 불러옴
        //    string url = "https://dapi.kakao.com/v2/local/search/keyword.json";
        //    string query = $"{url}?query={text}";
        //    string restAPIKey = "799a3031dec6472f3a94b15adf4b9b70";
        //    string Header = $"KakaoAK {restAPIKey}";
        //    WebRequest request = WebRequest.Create(query);
        //    request.Headers.Add("Authorization", Header);

        //    //응답받기
        //    WebResponse response = request.GetResponse();
        //    Stream stream = response.GetResponseStream();
        //    StreamReader reader = new StreamReader(stream, Encoding.UTF8);
        //    string json = reader.ReadToEnd();
        //    JavaScriptSerializer js = new JavaScriptSerializer();

        //    //dynamic : var랑 좀 다르게

        //    dynamic dob = js.Deserialize<dynamic>(json);
        //    dynamic docs = dob["documents"];
        //    object[] buf = docs;
        //    int length = buf.Length;
        //    for (int i = 0; i < length; i++)
        //    {
        //        string lname = docs[i]["place_name"];
        //        double x = double.Parse(docs[i]["x"]);
        //        double y = double.Parse(docs[i]["y"]);
        //        list.Add(new Locale(lname, y, x));
        //    }
        //    return list;
        //}
        #endregion
    }
}
