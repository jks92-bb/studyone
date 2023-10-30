using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace HelloCsharp03_02_Class
{
    public class student
    {
        public int id;  
        public string name;

        //이렇게 매개변수가 있는 생성자를 만들게 되면
        // 매개변수가 없는 생성자는 자연스럽게 사라짐.
        // 원래는 public student(){}이렇게 빈 생성자가 
        // 자동으로 들어감.
        // 그래서 product 클래스에서도 public produce(){} 가 있다.(안보이지만)
        public student (int id, string name)
        {
            this.id = id;
            this.name = name;
        }   
    }
}
