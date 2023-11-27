using System;
using System.Collections.Generic;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace 맛집API해보기
{
    public class DataManager
    {
        public static List<GoodMatJip> matJips = new List<GoodMatJip>();

        public static List<GoodMatJip> SelectMatJips = new List<GoodMatJip>();

        public static List<GoodMatJip> SelectCategoryMatJips = new List<GoodMatJip>();
      
        public static void Gu_Load(string gu)
        {
            try
            {
                DBHelper.selectQuery();
                majipLoad();
                //2. LINQ
                var mylist = from c in matJips

                             where c.GNG_CS.Contains(" " + gu + " ")


                             select c;
                    SelectMatJips = mylist.ToList<GoodMatJip>();

            }
            catch (Exception e)
            {
                Console.WriteLine(e.Message);
                Console.WriteLine(e.StackTrace);
            }

        }
        public static void Cg_Load(string cg)
        {
            try
            {
                DBHelper.selectQuery();
                majipLoad();
                
                // LINQ 쿼리로 카테고리에 해당하는 데이터 조회
                var mylist = from c in SelectMatJips

                             where c.FD_CS.Contains(cg)

                             select c;
                SelectCategoryMatJips = new List<GoodMatJip>();
                SelectCategoryMatJips = mylist.ToList<GoodMatJip>();
            }
            catch (Exception e)
            {
                Console.WriteLine(e.Message);
                Console.WriteLine(e.StackTrace);
            }
        }

        public static void majipLoad()
        {
            matJips.Clear();
            foreach (DataRow item in DBHelper.dt.Rows)
            {
                GoodMatJip Matjips = new GoodMatJip();
                //  Matjips.OPENDATA_ID = item["OPENDATA_ID"].ToString();
                Matjips.GNG_CS = item["GNG_CS"].ToString();// 주소
                Matjips.FD_CS = item["FD_CS"].ToString(); // 카테고리
                Matjips.BZ_NM = item["BZ_NM"].ToString(); // 매장명
                Matjips.MBZ_HR = item["MBZ_HR"].ToString(); // 영업시간
                Matjips.MNU = item["MNU"].ToString().Replace("<br />", " "); //메뉴
                Matjips.TLNO = item["TLNO"].ToString();// 매장 전화번호
                Matjips.SMPL_DESC = item["SMPL_DESC"].ToString().Replace("<br />", " "); // 매장소개
                Matjips.BKN_YN = item["BKN_YN"].ToString(); // 예약가능여부
                matJips.Add(Matjips);
            }
        }

    }
}
