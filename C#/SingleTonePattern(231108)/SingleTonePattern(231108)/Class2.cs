using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace SingleTonePattern_231108_
{
    public class Class2 : Class1
    {
        //class1 의 num 속성에 이어서 name 속성이 추가됨.
        //consoleprint 라는 메서드가 추가됐고. print라는 메서드는 오버라이드됨.
        public string name { get; set; }// 새로 추가된 속성
        public void ConsolePrint(string msg)
        {
            Console.WriteLine(msg);
        }
        public override void print(string msg)
        {
            System.Windows.Forms.MessageBox.Show("Test" + msg);
        }

        // 싱글톤 : 인스턴스를 하나만 만드는것.
        // 이렇게 하는 이유는 특정 메서드의 경우 오버라이드를 할 수 있기 때문.
        // 클래스 메서드의 경우에는 오버라이드가 안됨(상속 개념 아님.)

        // 인스턴스를 하나만 만드는 이유.
        // ex : DataManager.Load(), DataManager.Save()처럼/
        // 한번만 호출한다든지 하나의 객체가지고 호출할 만한 것은 굳이 인스턴스를 여러개 만들 필요 없다.

        private static Class2 _instance = null;

        // Class 2 a = new Class2(); 불가
        private Class2() // 생성자가 private이므로 그냥 만들진 못함.
        {

        }


        //java 스타일 코드
        public static Class2 _getInstance()
        {
            if (_instance == null)
            {
                _instance = new Class2(); 
            }
            return _instance;
        }


        //C#스타일
        //public int n { get; set;}의 get을 이용한 것
        public static Class2 getInstance //변수 형태 + get을 사용하고 있음.
        {
            get
            {
                if (_instance == null)
                {
                    _instance = new Class2();
                }
                return _instance;
            }
        }


    }
}
