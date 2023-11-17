using System;
using System.Collections.Generic;
using System.Drawing;
using System.Drawing.Drawing2D;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace 맛집API해보기
{
    public class CircularButton : Button
    {
        protected override void OnPaint(PaintEventArgs pevent)
        {
            GraphicsPath g = new GraphicsPath();
            g.AddEllipse(0,0,ClientSize.Width,ClientSize.Height);
            Region = new System.Drawing.Region(g);
            base.OnPaint(pevent);
        }
    }
}
