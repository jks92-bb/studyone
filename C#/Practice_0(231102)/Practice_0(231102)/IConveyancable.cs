using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Practice_0_231102_
{
    //1. 인터페이스는 상속 받을 수 잇다.
    // IConveyancable 으로 3개의 메서드를 구현
    //2. 속성도 추가가 가능함(자바의 인터페이스에서는 상수가 아닌 이상 속성은 추가 불가능함).



    internal interface IConveyancable : IRiderable, IFlierable
    {
        string Name { get; set; }

    }
}
