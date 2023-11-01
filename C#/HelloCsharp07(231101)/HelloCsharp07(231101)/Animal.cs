using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace HelloCsharp07_231101_
{
    public class Animal
    {
        public static int count =0; 
        public int age { get; set; }    
        protected void Born() //Animal을 상속받은 객체만 호출해서 쓸 수 있다.
        {
            Console.WriteLine("태어난다.");
        }
        public void sleep()
        {
            Console.WriteLine("잠을 잔다."); 
        }
        public void Eat()
        {
            Console.WriteLine("먹는다.");
        }

        //자손 클래스에서 오버라이드를 할 메서드라면
        //virtual이라는 키워드를 써야함
        public virtual void Wash()
        {
            Console.WriteLine("물로 씻깁니다.");
        }


    }
}
