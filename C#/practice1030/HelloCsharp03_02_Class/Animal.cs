using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace HelloCsharp03_02_Class
{
    public class Animal
    {
        #region

        public string Name { get; set; }
        public int age { get; set; }


        private int id; // 소문자
        public int ID { get { return id; } set { id = value; } } //대문자

        #endregion

        #region

        private String species;
        public string Species { get => species; set => species = value; }

        private string masterName;
        #endregion
        public string getMasterName()
        {
            return masterName;
        }
        public void setMasterName(string masterName)
        {
            this.masterName = masterName;
        }
    }
}
