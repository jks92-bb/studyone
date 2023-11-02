using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Practice_0_231102_
{
    public class HCar : IConveyancable
    {
        private string brandName;
        public string Name
        {
            get =>  brandName;
            set => brandName = value;
        }

        //public string Name
        //{
        //    get { return brandName; }
        //    set { brandName = value; }
        //}

        public void fly()
        {
            throw new NotImplementedException();
        }

        public void run()
        {
            throw new NotImplementedException();
        }

        public void stop()
        {
            throw new NotImplementedException();
        }
    }
}
