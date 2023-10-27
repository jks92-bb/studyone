using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading;
using System.Threading.Tasks;

namespace HelloCsharp02
{
    internal class Program
    {
        static void Main(string[] args)
        {
            #region 피라미드 만들기
            if (false)
            {
                // 피라미드 그리시오.
                Console.WriteLine("몇 층인가요?");
                int floor = int.Parse(Console.ReadLine());
                for (int i = 1; i <= floor; i++) // floor = 3 ,3층 피라미드.
                {
                    // 3층인 경우라면 띄어쓰기가 2, 1, 0 번 일것이다.
                    for (int j = 0; j < floor - i; j++)
                    {
                        Console.Write(" ");
                    }
                    // 별의 개수는 1,3,5 개가 될것.
                    for (int j = 0; j < 2 * i - 1; j++)
                    {
                        Console.Write("*");
                    }
                    Console.WriteLine();



                }


            }
            #endregion

            #region 5개 숫자 입력해서 최대 , 최소값 구하기
            if (false)
            {
                int[] numbers = new int[5];
                for (int i = 0; i < numbers.Length; i++)
                {
                    Console.WriteLine("값 입력");
                    numbers[i] = int.Parse(Console.ReadLine());
                }
                int max = numbers[0];
                int min = max;
                for (int i = 1; i < numbers.Length; i++)
                {
                    if (max < numbers[i])
                        max = numbers[i];
                    if (min > numbers[i])
                        min = numbers[i];
                }
                Console.WriteLine("최댓값 : " + max);
                Console.WriteLine("최소값 : " + min);
            }



            #endregion

            #region 개미수열
            // 아래의 규칙을 따르는 수열의 20번째 숫자를 프로그램을 만들어 찾으시오.
            // 1, 11, 12, 1121, 122111, 112213
            // 첫 번째 수열 : 1
            // 두 번째 수열 : 1이 1개 = 11
            // 세 번째 수열 : 1이 2개 = 12
            // 네 번째 수열 : 1이 1개 , 2가 1개 = 1121
            // 다섯 번째 수열 : 1이 2개, 2가 1개, 1이 1개 = 122111
            // 여섯 번째 수열 : 1이 1개, 2가 2개, 1이 3개 = 112213

            //처음에 주어지는 값.
            if (false)
            {
                string start = "1";
                for (int i = 0; i < 20; i++)
                {
                    int count = 0; // 읽고 말하기에서 해당 숫자의 개수(읽을 숫자의 개수)
                    char num = start[0];// 읽을 숫자.
                    string end = ""; //중간 누적 값.
                    Console.WriteLine(i + 1 + "번쨰" + start);
                    for (int j = 0; j < start.Length; j++)
                    {
                        if (num != start[j])
                        {
                            end = end + num + count;
                            num = start[j];
                            count = 1;
                        }
                        else
                        {
                            count++;
                        }
                    }
                    end = end + num + count;
                    start = end;
                }
            }
            #endregion

            #region 로또 생성
            if (false)
            {
                int[] lotto = new int[6];
                int bns = -1;
                Random random = new Random();
                for (int i = 0; i < 6; i++)
                {
                    int n = random.Next(1, 46);
                    bool isDuplicate = false;   // 중복 체크
                    for (int j = 0; j < i; j++)// 중복 여부 검증
                    {
                        if (n == lotto[j])
                        {
                            Console.WriteLine("n=  " + n + ",j=" + j);
                            Console.WriteLine("중복");
                            foreach (var item in lotto)
                            {
                                if (item == 0)
                                    break;
                                Console.WriteLine(item + "");
                            }
                            isDuplicate = true;
                            i--;
                            break;
                        }
                    }
                    if (isDuplicate)
                        continue;
                    lotto[i] = n;
                }
                Console.WriteLine(Environment.NewLine + "로또");
                //Array.Sort(lotto);//오름차순 정렬

                // 버블 정렬
                for (int i = 0; i < lotto.Length; i++)
                {
                    for (int j = 0; j < lotto.Length - 1; j++)
                    {
                        if (lotto[j] > lotto[j + 1])
                        {
                            int temp = lotto[j];
                            lotto[j] = lotto[j + 1];
                            lotto[j + 1] = temp;
                        }
                    }
                }
                foreach (var item in lotto)
                    Console.Write(item + " ");
                //Environment.NewLine = \n
                //Environment.NewLine : OS별로 개행문자가 다르므로
                // os마다 다른 개행 문자를 씀.
                Console.WriteLine(Environment.NewLine + "보너스");
                bns = random.Next(1, 46);
                for (int i = 0; i < 6; i++)
                {
                    if (bns == lotto[i])
                    {
                        i = -1;
                        bns = random.Next(1, 46);
                    }
                }
                Console.WriteLine(bns);
            }
            #endregion

            #region 다이아모양 만들기
            Console.WriteLine("몇 층인가요?");
            int f = int.Parse(Console.ReadLine());
            for (int i = 1; i <= f; i++) // floor = 3 ,3층 피라미드.
            {
                // 3층인 경우라면 띄어쓰기가 2, 1, 0 번 일것이다.
                for (int j = 0; j < f - i; j++)
                {
                    Console.Write(" ");
                }
                // 별의 개수는 1,3,5 개가 될것.
                for (int j = 0; j < 2 * i - 1; j++)
                {
                    Console.Write("*");
                }
                Console.WriteLine();
            }
            //거꾸로 된 피라미드 추가.
            for (int i = 1; i < f; i++) // floor = 3 ,3층 피라미드.
            {

                for (int j = 0; j < i; j++)
                {
                    Console.Write(" ");
                }

                for (int j = 0; j < 2 * (f - i) - 1; j++)
                {
                    Console.Write("*");
                }
                Console.WriteLine();
            }

            #endregion

            #region 십이지신 출력
            if (false)
            {
                int year = DateTime.Now.Year;
                string jisin = "";
                switch (year % 10)
                {
                    case 0:
                        jisin += "경";
                        break;
                    case 1:
                        jisin += "신";
                        break;
                    case 2:
                        jisin += "임";
                        break;
                    case 3:
                        jisin += "계";
                        break;
                    case 4:
                        jisin += "갑";
                        break;
                    case 5:
                        jisin += "을";
                        break;
                    case 6:
                        jisin += "병";
                        break;
                    case 7:
                        jisin += "정";
                        break;
                    case 8:
                        jisin += "무";
                        break;
                    case 9:
                        jisin += "기";
                        break;
                    default:
                        break;
                }
                switch (year % 12)
                {
                    case 0:
                        jisin += "신";
                        break;
                    case 1:
                        jisin += "유";
                        break;
                    case 2:
                        jisin += "술";
                        break;
                    case 3:
                        jisin += "해";
                        break;
                    case 4:
                        jisin += "자";
                        break;
                    case 5:
                        jisin += "축";
                        break;
                    case 6:
                        jisin += "인";
                        break;
                    case 7:
                        jisin += "묘";
                        break;
                    case 8:
                        jisin += "진";
                        break;
                    case 9:
                        jisin += "사";
                        break;
                    case 10:
                        jisin += "오";
                        break;
                    case 11:
                        jisin += "미";
                        break;
                    default:
                        break;
                }

                Console.WriteLine(jisin);
            }
                #endregion

            

        }
    }
}
