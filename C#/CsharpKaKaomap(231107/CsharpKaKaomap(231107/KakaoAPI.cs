using System;
using System.Collections.Generic;
using System.IO;
using System.Linq;
using System.Net;
using System.Text;
using System.Threading.Tasks;
using System.Web.Script.Serialization;

namespace CsharpKaKaomap_231107
{

    // REST API정보 불러오는 것.
    public class KakaoAPI  // API 정보 불러오기.
    {
        public static List<Locale> Search(string text)
        {
            List<Locale> list = new List<Locale>(); // 지역 정보를 불러옴.
            string url = "https://dapi.kakao.com/v2/local/search/keyword.json";
            string query = $"{url}?query={text}"; //띄어쓰기문제였음.
            string restAPIKey = "ad0afa922893f4514f2bf7e74df10df4";
            string Header = $"KakaoAK {restAPIKey}";
            WebRequest request = WebRequest.Create(query);
            request.Headers.Add("Authorization",Header);                

            //응답받기
            WebResponse response = request.GetResponse();
            Stream stream = response.GetResponseStream();
            StreamReader reader= new StreamReader(stream,Encoding.UTF8);
            string json = reader.ReadToEnd();
            JavaScriptSerializer js = new JavaScriptSerializer(); //newton soft 다운해서 using system 이용

            //dynamic  : var랑 다르게
            //선언한 뒤에도 자료형을 자유롭게 바꿀 수 있음.
            //dynamic ex = "이동준";// 처음 정해져도 타입이 다시 바뀔수 있음.
            dynamic dob = js.Deserialize<dynamic>(json);
            dynamic docs = dob["documents"];
            object[] buf = docs;
            int length = buf.Length;
            for(int i = 0; i<length; i++)
            {
                string lname = docs[i]["place_name"];
                double x = double.Parse(docs[i]["x"]);
                double y = double.Parse(docs[i]["y"]);
                list.Add(new Locale(lname,y,x));
            }
            

            return list;
        }


    }
}
