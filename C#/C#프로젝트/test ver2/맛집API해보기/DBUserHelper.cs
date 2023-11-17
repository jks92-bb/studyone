using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Data.SqlClient;
using System.Data;

namespace 맛집API해보기
{
    public static class DBUserHelper
    {
        private static SqlConnection conn = new SqlConnection();
        private const string TABLENAME = "information"; // 테이블명

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

        // 아이디 중복 체크
        public static int CheckUserIdExists(string userId)
        {
            ConnectDB();
            try
            {
                string checkUserQuery = $"SELECT COUNT(*) FROM {TABLENAME} WHERE User_ID = @UserId";
                using (SqlCommand checkUserCommand = new SqlCommand(checkUserQuery, conn))
                {
                    checkUserCommand.Parameters.AddWithValue("@UserId", userId);
                    return (int)checkUserCommand.ExecuteScalar();
                }
            }
            finally
            {
                CloseConnection();
            }
        }

        // 회원가입
        public static void RegisterUser(string userId, string password, string username, string userQues)
        {
            try
            {
                if (CheckUserIdExists(userId) > 0)
                {
                    Console.WriteLine("이미 존재하는 아이디입니다.");
                    return;
                }

                ConnectDB();
                string insertQuery = $"INSERT INTO {TABLENAME} (User_ID, User_PassWord, User_Name, User_Ques) VALUES (@UserId, @Password, @Username, @UserQues)";
                using (SqlCommand insertCommand = new SqlCommand(insertQuery, conn))
                {
                    insertCommand.Parameters.AddWithValue("@UserId", userId);
                    insertCommand.Parameters.AddWithValue("@Password", password);
                    insertCommand.Parameters.AddWithValue("@Username", username);
                    insertCommand.Parameters.AddWithValue("@UserQues", userQues);

                    int rowsAffected = insertCommand.ExecuteNonQuery();

                    if (rowsAffected <= 0)
                    {
                        Console.WriteLine("회원가입에 실패하였습니다.");
                    }
                }
            }
            finally
            {
                CloseConnection();
            }
        }
        // 로그인
        public static bool Login(string userId, string password)
        {
            ConnectDB();
            try
            {
                string loginQuery = $"SELECT COUNT(*) FROM {TABLENAME} WHERE User_ID = @UserId AND User_PassWord = @Password";
                using (SqlCommand loginCommand = new SqlCommand(loginQuery, conn))
                {
                    loginCommand.Parameters.AddWithValue("@UserId", userId);
                    loginCommand.Parameters.AddWithValue("@Password", password);

                    int userCount = (int)loginCommand.ExecuteScalar();
                    return userCount > 0;
                }
            }
            finally
            {
                CloseConnection();
            }
        }

        // 아이디 찾기 메소드
        public static string FindUserIdByName(string name)
        {
            // DB 연동
            ConnectDB();
            try
            {
                
                // SQL 쿼리
                string query = $"SELECT User_ID FROM information WHERE User_Name = @UserName";

                // SQL 쿼리 명령 객체 생성
                using (SqlCommand command = new SqlCommand(query, conn))
                {
                    // 매개 변수 추가
                    command.Parameters.AddWithValue("@UserName", name);

                    // 쿼리 실행 및 결과 반환
                    object result = command.ExecuteScalar();

                    // 결과가 있으면 해당 아이디 반환, 없으면 null 반환
                    return result != null ? result.ToString() : null;
                }
            }
            finally { CloseConnection(); }
           
        }

        // 비밀번호 찾기 메소드
        public static string FindUserPWDByQues(string userId, string userQues)
        {
            // DB 연동
            ConnectDB();
            try
            {
                // SQL 쿼리
                string PWDQuery = $"SELECT User_PassWord FROM information WHERE User_ID = @UserId AND User_Ques = @UserQues";

                // SQL 쿼리 명령 객체 생성
                using (SqlCommand command = new SqlCommand(PWDQuery, conn))
                {
                    command.Parameters.AddWithValue("@UserId", userId);
                    command.Parameters.AddWithValue("@UserQues", userQues);

                    // 쿼리 실행 및 결과 반환
                    object result = command.ExecuteScalar();

                    // 결과가 있으면 해당 비밀번호 return 없으면 null 리턴
                    return result != null ? result.ToString() : null;
                }
            }
            finally { CloseConnection(); }

            }


    }
}
