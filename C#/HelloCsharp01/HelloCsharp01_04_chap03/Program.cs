using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace HelloCsharp01_04_chap03
{
    internal class Program
    {
        static void Main(string[] args)
        {
            //삼항 연산자
            // 물음표와 콜론을 통하여 조건문을 한 줄로 표현하는 것.
            int num = int.Parse(Console.ReadLine());
            string result = num % 2 == 0 ? "짝" : "짝이 아님";
            // [ 수식 ] ? [ 그 수식이 참인 경우 ] : [그 수식이 거짓인 경우]
            Console.WriteLine(result);

            // if 문


            // switch 문
            switch (num)
            {

                case 0:
                    Console.WriteLine("num 값은 0");
                    break;
                case 1:
                case 2:
                case 3:
                    Console.WriteLine("num은 1~3!!");
                    break;
                //case 4:
                    //case 밑에 단 한 줄의 코드라도 있다면 그 밑에는 꼭 break 필요
                    //java나 c 같은 경우에는 그 밑에 break없어도 돌아는 간다.
                    // C#은 안됨.
                    Console.WriteLine("4");

                case 5:
                    Console.WriteLine("5");
                    break;

                default:
                    break;

            }

            Console.WriteLine("안녕하세요".Contains("안녕"));
            Console.WriteLine("안녕하세요".Equals("안녕"));




        }
    }
}
