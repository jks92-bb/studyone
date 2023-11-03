using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace HelleoCsharp_231103_1_
{
    public class Product
    {
        public string Name { get; set; }
        public int Price { get; set; }
        public override string ToString()
        {
            return Name + ":" + Price + "원";
        }
    }
}
