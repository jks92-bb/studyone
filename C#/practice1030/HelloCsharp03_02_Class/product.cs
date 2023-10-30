using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace HelloCsharp03_02_Class
{
    internal class product
    {
        //static이 안 붙은 것들은 인스턴스 변수
        // 인스턴스 선언 후 메모리에 올라감
        // Product p = new Producet(); // <- 이 코드가 필수다.
        // p.name = "감자";
        public string Name;
        public int price;

        //static이 붙은 것들은 클래스 변수
        // 인스턴스 선언되기 전 프로그램 시작과 동시에 메모리에 올라감.
        // Product.companyName =" 경북농산";
        // Product 타입 객체들이 모두 공유한다. 공통적으로 접근할 수 있다.

        public static string companyName;
    }
}
