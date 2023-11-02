using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace Practice_0_231102_
{
    public class Flight : IRiderable, IFlierable

    {
        public void fly()
        {
            MessageBox.Show("행복한 비행되세요.");
        }

        public void run()
        {
            MessageBox.Show("안전띠 꽉 매시길 바랍니다.");
        }

        public void stop()
        {
            MessageBox.Show("비행기 운행정지");
        }
    }
}
