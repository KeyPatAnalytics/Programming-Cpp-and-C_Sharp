using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Student_Data
{
    class Student
    {
        public string Surname { get; set; }
        public string Name { get; set; }
        public string Patronymic { get; set; }
        private string birthday;
        private double gpa;

        public double Gpa
        {
            get { return gpa; }
            set
            {
                if(value>=0.0 && value <= 5.0)
                {
                    gpa = value;
                }
                else
                {
                    Console.WriteLine("Incorrect mark!");
                    gpa = 2.0;
                }
            }
        }

        public string Birthday
        {
            get { return birthday; }
            set
            {
                string[] ddmmyy = value.Split(new string[] { "/", " ", "-" }, StringSplitOptions.RemoveEmptyEntries);
                if( ddmmyy.Length == 3)
                {
                    birthday = String.Join("/",ddmmyy);
                }else
                {
                    birthday = "Format error ";
                }
            }
        }

       public  Student(string familia =  "", string imia="", string otchestvo=" ",double otsenka=2.0, string birth="01/01/2000")
        {
            Surname = familia;
            Name = imia;
            Patronymic = otchestvo;
            Birthday = birth;
            Gpa = otsenka;
        }

                
        public void PrintInformation()
        {
            Console.WriteLine("Full name: " + Surname + " " + Name + " " + Patronymic);
            Console.WriteLine("Birthday: " + Birthday);
            Console.WriteLine("Gpa: " + Gpa);
            Console.WriteLine();
        }


    }

    


}
