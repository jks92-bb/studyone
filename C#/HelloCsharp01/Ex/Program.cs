using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Ex
{
    internal class Program
    {
        static void Main(string[] args)
        {
            //inch 단위를 입력 받아 cm 단위를 구하는 코드를 작성하시오.
            //Console.WriteLine("inch를 입력하시오.");
            //int num = int.Parse(Console.ReadLine());
            //Console.WriteLine(num * 2.54 + "cm");

            // 킬로그램(kg)단위를 입력 받아 파운드 단위를 구하는 코드 작성

            //Console.WriteLine("kg를 입력하시오.");
            //string num1 = Console.ReadLine();
            //int input = int.Parse(num1);
            //Console.WriteLine($"{input}kg ={input * 2.204622622}pound");

            // int.parse : 공백을 비롯하여 숫자를 입력하지 않으면 튕김
            // 이를 보완한 것이  int.Tryparse
            // 엉뚱한 값을 입력해도 튕기지 않고 0을 집어넣음.


            // 원의 반지를을 입력 받아 원의 둘레와 넓이를 구하는 
            // 코드를 작성.
            //Console.WriteLine("원의 반지름을 입력하시오. 단위 (cm)");

            // 상수
            /* const double pi = 3.14; */ // java 의 final이랑 같은 것.
                                          //int.TryParse(Console.ReadLine(), out input);
                                          //int.TryParse(Console.ReadLine(), out int radian);

            //Console.WriteLine("둘레 :" + radian * 2 * pi + "cm");
            //Console.WriteLine("넓이 :" + radian * radian * pi + " ㎠");
            //Console.WriteLine("PI :" + 3.14 + "cm");

            // 사용자에게 태어난 년도를 입력 받아 그 해의 띠를 출력하는 프로그램을 작성하시오.(if)
            Console.WriteLine("태어난 년도 입력하시오.");
            int year = int.Parse(Console.ReadLine());

            if (year % 12 == 0)
            {
                Console.WriteLine("원숭이띠 입니다.");
            }
            else if (year % 12 == 1)
            {
                Console.WriteLine("닭띠 입니다.");
            }
            else if (year % 12 == 2)
            {
                Console.WriteLine("개띠 입니다.");
            }
            else if (year % 12 == 3)
            {
                Console.WriteLine("돼지띠 입니다.");
            }
            else if (year % 12 == 4)
            {
                Console.WriteLine("쥐띠 입니다.");
            }
            else if (year % 12 == 5)
            {
                Console.WriteLine("소띠 입니다.");
            }
            else if (year % 12 == 6)
            {
                Console.WriteLine("호랑이띠 입니다.");
            }
            else if (year % 12 == 7)
            {
                Console.WriteLine("토끼띠 입니다.");
            }
            else if ((year % 12) == 8)
            {
                Console.WriteLine("용띠 입니다.");
            }
            else if (year % 12 == 9)
            {
                Console.WriteLine("뱀띠 입니다.");
            }
            else if (year % 12 == 10)
            {
                Console.WriteLine("말띠 입니다.");
            }
            else if (year % 12 == 11)
            {
                Console.WriteLine("양띠 입니다.");
            }

            // 현재 년도가 무슨 띠인지 구하는 프로그램을 작성.(switch)

            // 현재 년도.
            int nunyear = DateTime.Now.Year;

            Console.WriteLine("");
            // 띠를 구합니다.
            string zodiac = "";
            switch (nunyear % 12)
            {
                case 0:
                    zodiac = "원숭이";
                    break;
                case 1:
                    zodiac = "닭";
                    break;
                case 2:
                    zodiac = "개";
                    break;
                case 3:
                    zodiac = "돼지";
                    break;
                case 4:
                    zodiac = "쥐";
                    break;
                case 5:
                    zodiac = "소";
                    break;
                case 6:
                    zodiac = "호랑이";
                    break;
                case 7:
                    zodiac = "토끼";
                    break;
                case 8:
                    zodiac = "용";
                    break;
                case 9:
                    zodiac = "뱀";
                    break;
                case 10:
                    zodiac = "말";
                    break;
                case 11:
                    zodiac = "양";
                    break;
            }

            // 띠를 출력합니다.
            Console.WriteLine("올해는 {0}년이고, {1}띠입니다.", nunyear, zodiac);


            // 사용자에게 현재 월을 입력받아 계절을 출력하는 프로그램을 작성하시오.

            Console.WriteLine("현재 월을 입력하시오.");
            int month = DateTime.Now.Month;

            if (month == 3 || month == 4 || month == 5)
            {
                Console.WriteLine("봄 입니다.");
            }
            else if (month == 6 || month == 7 || month == 8)
            {
                Console.WriteLine("여름 입니다.");
            }
            else if (month == 9 || month == 10 || month == 11)
            {
                Console.WriteLine("가을 입니다.");
            }
            else if (month == 2 || month == 12 || month == 1)
            {
                Console.WriteLine("겨울 입니다.");
            }
            else
            {
                Console.WriteLine("잘못된 계절입니다.");
            }

            





        }
    }
}



