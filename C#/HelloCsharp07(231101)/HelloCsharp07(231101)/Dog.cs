using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace HelloCsharp07_231101_
{
    public class Dog:Animal
    {
        public Dog() { Born(); }
        public String Color { get; set; }
        public void Bark() { Console.WriteLine("멍멍");}
    }
}
