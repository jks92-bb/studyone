using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Practice_0_231102_
{
    public abstract class Character
    {

        public string Id { get; set; }  // Id
        public int Lv { get; set; } // Lv

        public abstract void Fight(); // 오버라이딩 필수

        public virtual string Die() // 오버라이딩이 가능함.(오버라이딩 필수 아님)
        {
            return "사망하셨습니다.";
        }
        public string SayHello() // 오버라이딩 안됨.
        {
            string introduce = "만나서 반가워" + "\n";
            introduce += "ID " + Id.ToString();
            introduce += " LV " + Lv + "\n";
            return introduce;

        }

    }
}
