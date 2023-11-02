using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Practice_0_231102_
{
    public class Dragon : Character, IFlierable, IRiderable
    {

        public override string Die()
        {
            return " 장엄하게 쓰러진다.";
        }
        public override void Fight()
        {
            System.Windows.Forms.MessageBox.Show("드래곤 브레스!");
        }

        public void fly()
        {
            System.Windows.Forms.MessageBox.Show("웅장하게 날아간다.");
        }

        public void run()
        {
            return;
        }

        public void stop()
        {
            System.Windows.Forms.MessageBox.Show("조용히 멈춘다.");
        }
    }
}
