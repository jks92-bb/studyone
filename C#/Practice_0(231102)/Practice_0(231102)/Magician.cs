using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace Practice_0_231102_
{
    public class Magician : Character
    {
        public override string Die()
        {
            return "연기처럼 사라진다.";
        }
        public override void Fight()
        {
            MessageBox.Show("전기볼트");
        }
    }
}
