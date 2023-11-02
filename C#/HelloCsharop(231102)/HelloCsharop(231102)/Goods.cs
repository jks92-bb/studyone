using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace HelloCsharop_231102_
{
    public class Goods
    {
        public string Name { get; set; }
        public int Price { get; set; }
        public string Description { get; set; }
        public string place {  get; set; }  

        public string InfluencerName; // DataGridView 에 표시 안됨.
    }
}
