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
    public class DBMyPlaceHelper
    {
        private static SqlConnection conn = new SqlConnection();

        // DB 연동하는 메소드
        public static void ConnectDB()
        {
            string dataSource = "local";
            string db = "User_info"; // DB명
            string security = "SSPI";
            conn.ConnectionString =
                $"Data Source=({dataSource}); initial Catalog={db};" +
                $"integrated Security={security};" +
                "Timeout=3";

            if (conn.State != ConnectionState.Open)
                conn.Open();
        }

        public static void CloseConnection()
        {
            if (conn.State == ConnectionState.Open)
                conn.Close();
        }

        //즐겨찾기 등록
        public static void RegisterMyPlace(string userId, string bz_nm, string fd_cs, string gng_cs, string tlno)
        {
            try
            {
                ConnectDB();
                // 공백 데이터는 추가가 안되게 
                if (string.IsNullOrWhiteSpace(userId) || string.IsNullOrWhiteSpace(bz_nm) || string.IsNullOrWhiteSpace(fd_cs) || string.IsNullOrWhiteSpace(gng_cs) || string.IsNullOrWhiteSpace(tlno))
                {
                    MessageBox.Show("맛집을 선택해서 추가해주세요.");
                    return;
                }

                // 맛집이 이미 존재하는지 확인
                string checkQuery = $"SELECT COUNT(*) FROM MyPlace WHERE User_ID = @UserId AND BZ_NM = @bz_nm";
                using (SqlCommand checkCommand = new SqlCommand(checkQuery, conn))
                {
                    checkCommand.Parameters.AddWithValue("@UserId", userId);
                    checkCommand.Parameters.AddWithValue("@bz_nm", bz_nm);

                    int count = Convert.ToInt32(checkCommand.ExecuteScalar());

                    if (count > 0)
                    {
                        MessageBox.Show("이미 MyPlace에 동일한 식당이 존재합니다.");
                        return; // 데이터가 이미 존재하면 메소드를 종료합니다.
                    }
                }

                
                

                // 즐겨찾기 식당 insert
                string insertQuery = $"INSERT INTO MyPlace (User_ID, BZ_NM, FD_CS, GNG_CS,TLNO) VALUES (@UserId, @bz_nm, @fd_cs, @gng_cs, @tlno)";
                using (SqlCommand insertCommand = new SqlCommand(insertQuery, conn))
                {
                    insertCommand.Parameters.AddWithValue("@UserId", userId);
                    insertCommand.Parameters.AddWithValue("@bz_nm", bz_nm); // 상호명
                    insertCommand.Parameters.AddWithValue("@fd_cs", fd_cs);
                    insertCommand.Parameters.AddWithValue("@gng_cs", gng_cs);
                    insertCommand.Parameters.AddWithValue("@tlno", tlno);

                    insertCommand.ExecuteNonQuery();
                    
                    //Mbox 표시  상호명 
                    MessageBox.Show(bz_nm + "을(를) 즐겨찾기에 추가하였습니다.");
                }
            }
            finally
            {
                CloseConnection();
            }
        }

        //현재 로그인된 Id에 데이터 넣기
        public static DataTable GetMyPlaceData(string userId)
        {
            ConnectDB();
            try
            {
                string selectQuery = $"SELECT * FROM MyPlace where User_ID = '{userId}'";
                using (SqlCommand selectCommand = new SqlCommand(selectQuery, conn))
                {
                    SqlDataAdapter adapter = new SqlDataAdapter(selectCommand);
                    DataTable myPlaceData = new DataTable();
                    adapter.Fill(myPlaceData);

                    return myPlaceData;
                }
            }
            finally
            {
                CloseConnection();
            }
        }

        //삭제 쿼리
        public static void DeleteMyPlace(string userId, string bz_nm)
        {
            try
            {
                ConnectDB();
                string deleteQuery = $"DELETE FROM MyPlace WHERE User_ID = '{userId}' AND BZ_NM = @bz_nm";
                using (SqlCommand deleteCommand = new SqlCommand(deleteQuery, conn))
                {
                    deleteCommand.Parameters.AddWithValue("@bz_nm", bz_nm);
                    deleteCommand.ExecuteNonQuery();
                    MessageBox.Show(bz_nm + "을(를) 즐겨찾기에서 삭제했습니다.");
                }
            }
            finally
            {
                CloseConnection();
            }
        }



    }
}
