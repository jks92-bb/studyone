using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace Practice_0_231102_
{
    public class UniCorn : Character, IRiderable, IFlierable
    {
        public override void Fight()
        {
            MessageBox.Show("발굽 공격");
        }

        public void fly()
        {
            MessageBox.Show("날아오른다.");
        }

        public void run()
        {
            MessageBox.Show("달린다.");
        }

        public void stop()
        {
            MessageBox.Show("멈춘다.");
        }
    }
}
