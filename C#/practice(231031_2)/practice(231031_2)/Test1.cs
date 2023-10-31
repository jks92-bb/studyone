using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace practice_231031_2_
{
    public class Test1
    {
        public int power(int input)
        {
            return input * input;
        }
        public int power(int input, int count)
        {
            int anwer = 1;
            for (int i = 0; i < count; i++)
            {
                anwer *= input;
            }

            return anwer;
        }

        public int sumAll(int end)
        {
            int result = 0;
            for(int i = 0;i <= end;i++)
            {
                result += i;               
            }
            return result;

        }




    }
}
