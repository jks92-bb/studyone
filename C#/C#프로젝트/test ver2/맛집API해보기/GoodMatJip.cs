using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace 맛집API해보기
{
    public class GoodMatJip
    {
       
        // public string cnt { get; set; }
        // public string OPENDATA_ID { get; set; }

        public string FD_CS { get; set; }// 카테고리
        public string BZ_NM { get; set; }// 상호명
        public string GNG_CS { get; set; }// 주소
        public string MBZ_HR { get; set; }// 영업시간
        public string MNU { get; set; }// 메뉴
        public string TLNO { get; set; }    // 매장 전화번호
        public string SMPL_DESC { get; set; }// 매장설명
        public string BKN_YN { get; set; }  // 예약가능 여부
    }
}
