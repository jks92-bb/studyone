using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Practice_231101_
{
    public class Tiger : Cat // alt + enter 
    {
        public override void Eat()
        {
            Console.WriteLine("호랑이 냠냠");
        }

        public override void gromming()
        {
            Console.WriteLine("호랑이 털갈기");
        }

        public override void hunt()
        {
            Console.WriteLine("호랑호랑 사냥");          
        }

        public override void Sleep()
        {
            Console.WriteLine("호랑이 이름" + Name);
            Console.WriteLine("매우 잘 잡니다.");
            Console.WriteLine(Age + "답게 잘 잡니다.");
        }
    }
}
