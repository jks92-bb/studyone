using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ParkingCarManager_231107_
{
    public class ParkingCar
    {
        public string parkingSpot {  get; set; }    //주차공간
        public string carNumber { get; set; }   //차 번호
        public string driverName { get; set; }  // 운전자 이름
        public string phoneNumber { get; set; } // 차 주인 연락처
        public DateTime parkingTime { get; set; }   //주차시점
    }
}
