using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Practice_0_231102_
{
    // 인터페이스네이밍 규칙
    // C#은 첫글자가 I가 꼭 붙고 뒤는 able이 붙음
    // JAVA는 뒤에  able이 붙음

    // 클래스 네이밍 규칙(JAVA,C#) : 첫글자가 무조건 대문자


    public interface IRiderable  // 탈것
    {
        void run();
        void stop();
    }
}
