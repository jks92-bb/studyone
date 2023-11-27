using System;
using System.Collections.Generic;
using System.Data.SqlClient;
using System.Data;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace 맛집API해보기
{
    public class DBHelper
    {
        //DB 연결 및 테이블 데이터 다룰 때 필요한 객체들
        private static SqlConnection conn = new SqlConnection();
        public static SqlDataAdapter da;
        public static DataSet ds;
        public static DataTable dt;
        private const string TABLENAME = " RestaurantData ";//테이블명

        //DB 연결하는 메서드

        private static void ConnectDB()
        {
            string dataSource = "local";
            string db = "GoodRestaurant"; //DB명
            string security = "SSPI";
            conn.ConnectionString =
                $"Data Source=({dataSource}); initial Catalog={db};" +
                $"integrated Security={security};" +
                "Timeout=3";
            conn.Open();

        }
        #region 셀렉트쿼리
        public static void selectQuery()
        {
            try
            {
                ConnectDB();    //DB 연결            
                SqlCommand cmd = new SqlCommand();
                cmd.Connection = conn;
                cmd.CommandText = $"select *from {TABLENAME}";


                da = new SqlDataAdapter(cmd); //쿼리문을 활용하여 데이터 불러오는 것.
                ds = new DataSet();
                da.Fill(ds, TABLENAME); //ds 에 테이블을 채워넣음.
                dt = ds.Tables[0];  //만약 여러개의 테이블을 불러왔다면 그 중 첫번째꺼 갖고 옴.

            }
            catch (Exception)
            {

            }
            finally
            {
                conn.Close(); //DB연결이 잘못되더라도 연결 끊어주는 건 꼭 해줌
            }
        }
        #endregion

        #region data 기입
        public static void insertData(string v1, string v2, string v3, string v4, string v5, string v6, string v7, string v8, string v9, string v10, string v11, string v12, string v13, string v14, string v15, string v16, string v17, string v18, string v19)
        {
            string command = "insert into RestaurantData values(@p1,@p2,@p3,@p4,@p5,@p6,@p7,@p8,@p9,@p10,@p11,@p12,@p13,@p14,@p15,@p16,@p17,@p18,@p19)";
            try
            {
                ConnectDB();
                SqlCommand sqlcmd = new SqlCommand();
                sqlcmd.Connection = conn;
                sqlcmd.CommandType = CommandType.Text;
                sqlcmd.Parameters.AddWithValue("@p1", v1);
                sqlcmd.Parameters.AddWithValue("@p2", v2);
                sqlcmd.Parameters.AddWithValue("@p3", v3);
                sqlcmd.Parameters.AddWithValue("@p4", v4);
                sqlcmd.Parameters.AddWithValue("@p5", v5);
                sqlcmd.Parameters.AddWithValue("@p6", v6);
                sqlcmd.Parameters.AddWithValue("@p7", v7);
                sqlcmd.Parameters.AddWithValue("@p8", v8);
                sqlcmd.Parameters.AddWithValue("@p9", v9);
                sqlcmd.Parameters.AddWithValue("@p10", v10);
                sqlcmd.Parameters.AddWithValue("@p11", v11);
                sqlcmd.Parameters.AddWithValue("@p12", v12);
                sqlcmd.Parameters.AddWithValue("@p13", v13);
                sqlcmd.Parameters.AddWithValue("@p14", v14);
                sqlcmd.Parameters.AddWithValue("@p15", v15);
                sqlcmd.Parameters.AddWithValue("@p16", v16);
                sqlcmd.Parameters.AddWithValue("@p17", v17);
                sqlcmd.Parameters.AddWithValue("@p18", v18);
                sqlcmd.Parameters.AddWithValue("@p19", v19);
                sqlcmd.CommandText = command;
                sqlcmd.ExecuteNonQuery();
            }
            catch (Exception e)
            {
                Console.WriteLine(e.Message);
                Console.WriteLine(e.StackTrace);
            }
            finally
            {
                conn.Close();
            }
        }
        #endregion
    }
}
