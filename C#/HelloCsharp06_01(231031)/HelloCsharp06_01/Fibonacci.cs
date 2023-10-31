using System;
using System.Collections.Generic;
using System.Linq;
using System.Runtime.InteropServices;
using System.Text;
using System.Threading.Tasks;

namespace HelloCsharp06_01
{
    public class Fibonacci
    {
        private static Dictionary<int, long>memo = new Dictionary<int, long>(); 
        public static long Get(int i)
        {
            if (i < 0) { return 0; }
            if (i = 1) { return 1; }

            if(memo.ContainsKey(i))
            {
                return memo[i];
            }
            else
            {
                long value = Get(i-2) + Get(i-1);
                memo[i] = value;
                return value;
            }

            class Program
                {
            static void Main(string[] args) { }

            }






    }
}

    
