using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Expractice
{
    internal class Program
    {
        static void Main(string[] args)
        {
            // 삼각형 모양 피라미드를 만드시오.
            int n = 5; // 피라미드의 높이를 원하는 값으로 변경할 수 있습니다.

            for (int i = 1; i <= n; i++)
            {
                // 왼쪽 공백을 출력
                for (int j = 1; j <= n - i; j++)
                {
                    Console.Write(" ");
                }

                // 별표 출력
                for (int k = 1; k <= 2 * i - 1; k++)
                {
                    Console.Write("*");
                }


                // 줄 바꿈
                Console.WriteLine();


            }

            Console.WriteLine();

            //5개의 숫자를 입력받은 뒤 가장 작은 수와 가장 큰 수를 출력하는 프로그램을 작성.

            int[] num = new int[5];

            for (int i = 0; i < 5; i++)
            {
                Console.Write($"숫자 {i + 1} 입력:");
                if (int.TryParse(Console.ReadLine(), out int num1))
                {
                    num[i] = num1;
                }
                else
                {
                    Console.WriteLine("올바른 숫자를 입력해주세요.");
                    i--; // 잘못된 입력을 처리하기 위해 i를 다시 감소시킴
                }
            }

            // 가장 작은 수와 가장 큰 수 찾기
            //int min = num[0];
            //int max = num[0];

            //foreach (int number in num)
            //{
            //    if (number < min)
            //        min = number;
            //    if (number > max)
            //        max = number;
            //}

            int min = num.Min();
            int max = num.Max();

            Console.WriteLine($"가장 작은 수: {min}");
            Console.WriteLine($"가장 큰 수: {max}");

            // 아래의 규칙을 따르는 수열의 20번째 숫자를 프로그램을 만들어 찾으시오.
            // 1, 11, 12, 1121, 122111, 112213
            // 첫 번째 수열 : 1
            // 두 번째 수열 : 1이 1개 = 11
            // 세 번째 수열 : 1이 2개 = 12
            // 네 번째 수열 : 1이 1개 , 2가 1개 = 1121
            // 다섯 번째 수열 : 1이 2개, 2가 1개, 1이 1개 = 122111
            // 여섯 번째 수열 : 1이 1개, 2가 2개, 1이 3개 = 112213
            // 일곱 번째 수열 : 1이 2개, 2가 2개 1이 1개 3이 1개 = 12221131
            // 여덟 번째 수열 : 1이 1개, 2가 3개, 1이 2개, 3이 1개,1이 1개 = 1123123111
            // 아홉 번째 수열 : 1이 2개, 2가 1개, 3이 1개, 1이 1개, 2가 1개, 3이 1개, 1이 3개. = 12213111213113
            // 열 번째 수열 : 1이 1개, 2가 2개, 1이 1개, 3이 1개, 1이 3개, 2가 1개, 1이 1개, 3이 1개, 1이 2개, 3이 1개.
            // = 11221131132111311231
            // 열 한번째 수열 : 1이 2개, 2가 2개, 1이 2개, 3이 1개 1이 2개 3이 1개 2가 1개 1이 3개 3이 1개 1이 2개 2가 1개 3이 1개 1이 1개
            // = 12221231123121133112213111


            //  ant 변수 초기값 1 할당
            string start_number = "1";

            // for 사용해서 2부터 21까지 반복
            for (int i = 2; i < 21; i++)
            {
                // dn 초기화값
                string dn = "";
                // start_number 변수 첫번째 문자를 number 변수에 할당
                char number = start_number[0];
                // N 변수 초기화값 0 할당.
                int N = 0;

                //start_number 변수 모든 문자 확인 루프
                for (int j = 0; j < start_number.Length; j++)
                {
                    // number 변수와 start_number 변수의 j 번째 문자가 다르면,
                    if (number != start_number[j])
                    {
                        //dn 변수에 number 변수와 n 변수의 값을 더한 문자열을 추가.
                        dn = dn + number + N;
                        //number 변수에 start_number 변수의 j 번째 문자를 할당.
                        number = start_number[j];

                        //n 변수 1로 초기화.
                        N = 1;
                    }

                    // number 변수와 start_number 변수의 j 번째 문자가 같으면 ,
                    else
                    {
                        //n변수를 1증가시킴.
                        N++;
                    }

                }
                // start_nuber 변수에 dn 변수와 number 변수의 값을 더한 문자열과 n변수의 값을 더한 문자열을 할당
                start_number = dn + number + N;

                Console.WriteLine(i + "번째 수열 = " + start_number);

            }

            Console.WriteLine($"20번째 수열 = {start_number}");



            // 로또 생성
            int[] lottoNumbers = GenerateLottoNumbers(); // 로또 번호 생성

            Console.WriteLine("로또 번호: " + string.Join(" ", lottoNumbers)); // 생성된 로또 번호 출력



            // 다이아 모양 작성.
            int a = 5; // 다이아몬드의 크기를 설정, 원하는 크기로 변경 가능

            for (int i = 1; i <= a; i++)
            {
                for (int j = 1; j <= a - i; j++)
                {
                    Console.Write(" ");
                }
                for (int k = 1; k <= 2 * i - 1; k++)
                {
                    Console.Write("*");
                }
                Console.WriteLine();
            }

            for (int i = a - 1; i >= 1; i--)
            {
                for (int j = 1; j <= a - i; j++)
                {
                    Console.Write(" ");
                }
                for (int k = 1; k <= 2 * i - 1; k++)
                {
                    Console.Write("*");
                }
                Console.WriteLine();

            }

            // 12지신 전부 출력하기.
            int startYear = 1924; // 시작 년도
            int endYear = 2031;   // 종료 년도

            for (int year = startYear; year <= endYear; year++)
            {
                string zodiac = GetZodiac(year); // 해당 년도의 12지신 동물을 얻습니다.
                Console.WriteLine($"{year}년: {zodiac}");
            }


        }

        static int[] GenerateLottoNumbers()
        {
            Random random = new Random(); // 난수 생성기 생성
            int[] lottoNumbers = new int[6]; // 6개의 로또 번호를 저장할 배열 생성

            for (int i = 0; i < 6; i++) // 6개의 로또 번호 생성
            {
                int number;
                do
                {
                    number = random.Next(1, 46); // 1부터 45 사이의 난수 생성
                } while (Array.Exists(lottoNumbers, n => n == number)); // 중복된 번호 방지

                lottoNumbers[i] = number; // 생성된 번호를 배열에 저장
            }

            Array.Sort(lottoNumbers); // 번호를 정렬
            return lottoNumbers; // 생성된 로또 번호 배열 반환
                                 //





        }

        static string GetZodiac(int year)
        {
            // 12지신 동물을 배열로 정의
            string[] zodiacs = { "쥐", "소", "범", "토끼", "용", "뱀", "말", "양", "원숭이", "닭", "개", "돼지" };

            // 시작 년도인 1924를 기준으로 12로 나눈 나머지를 계산하여 해당 년도의 12지신을 얻습니다.
            int index = (year - 1924) % 12;
            if (index < 0)
            {
                index += 12;
            }

            return zodiacs[index];
        }







    }



}
