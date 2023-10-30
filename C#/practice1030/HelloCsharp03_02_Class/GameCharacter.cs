using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace HelloCsharp03_02_Class
{
    public class GameCharacter
    {
        public string ID { get; set; }
        public static int theNumberofUser = 0;

        public GameCharacter() {
            theNumberofUser++;
        }

        public GameCharacter(string id)
        {
            this.ID = id;
            theNumberofUser++;
        }
    }
}
