using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Practice_231101_
{

    // 나이랑 이름 정보 있고 먹고 자고 털정리하고 사냥하는 기능이 있는 객체.

    public class Lion : Cat
    {
        public override void Eat()
        {
            Console.WriteLine("사자 냠냠");
        }

        public override void gromming()
        {
            Console.WriteLine("사자 털갈기");
        }

        public override void hunt()
        {
            Console.WriteLine("달려가서 사냥");
        }

        public override void Sleep()
        {
            Console.WriteLine("계속 잠자기");
        }
    }
}
