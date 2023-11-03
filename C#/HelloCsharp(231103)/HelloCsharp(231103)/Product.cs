using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace HelloCsharp_231103_
{
   public class Product
    {
        public int Id { get; set; }
        public string Name { get; set; }    
        public int Price { get; set; }

        public override string ToString()
        {
            return $"id:{Id}, Name:{Name},Price:{Price}\n";
        }
    }
}
