﻿using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace HelleoCsharp_231103_1_
{
    public class Weather
    {
        public string Hour {  get; set; }   
        public string Day   { get; set; }
        public string wfKor {  get; set; }

        public override string ToString()
        {
            return "시간  "+ Hour +"날  " + Day+ "날씨 "+ wfKor;
        }
    }
}
