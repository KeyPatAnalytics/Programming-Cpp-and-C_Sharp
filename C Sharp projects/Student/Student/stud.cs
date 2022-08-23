using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Student
{
    class stud
    {
        public string Surname;
        public string Name;
        public string Patronymic;

        private string Birthday;
        private double otsenka;
     
        

        public double Mark
        {
            get{ return otsenka; }
            set
            {
                if (value >= 0.0 && value <= 5)
                {
                    otsenka = value;
                }
                else
                {
                    Console.WriteLine("Incorect Mark!");
                    otsenka = 0.0;
                }
            }
        }


        public string Birth
        {
            get { return Birthday; }
            set
            {
                string[] datefomat = value.Split(new string[] { "/", " ", "-" }, StringSplitOptions.RemoveEmptyEntries);
                if(datefomat.Length == 3)
                {
                    Birthday = String.Join("/", datefomat); 
                }
                else
                {
                    Console.WriteLine("Incorrect date format!");
                    Birthday = "";
                }

            }
        }

        public void PrintInformation()
        {
            Console.WriteLine(Surname + " " + Name + " " + Patronymic+"   "+Birth+"   "+Mark);
        }
    }
}







