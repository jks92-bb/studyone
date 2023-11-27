using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace 맛집API해보기
{
    public class Good
    {
        public string cnt { get; set; }
        public string OPENDATA_ID { get; set; }
        public string GNG_CS { get; set; }
        public string FD_CS { get; set; }
        public string BZ_NM { get; set; }
        public string MNU { get; set; }
        public string SMPL_DESC { get; set; }
        public string MBZ_HR { get; set; }

        public Good(string cnt, string OPENDATA_ID, string GNG_CS, string FD_CS, string BZ_NM, string MNU, string SMPL_DESC, string MBZ_HR)
        {
            this.cnt = cnt;
            this.OPENDATA_ID = OPENDATA_ID;
            this.GNG_CS = GNG_CS;
            this.FD_CS = FD_CS;
            this.BZ_NM = BZ_NM;
            this.MNU = MNU;
            this.SMPL_DESC = SMPL_DESC;
            this.MBZ_HR = MBZ_HR;
        }

    }

 }
