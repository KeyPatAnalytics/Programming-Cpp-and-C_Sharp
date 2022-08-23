using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Student
{
    class Program
    {
        static void Main(string[] args)
        {
            /*
             * stud keyela = new stud();
            stud oleg = new stud();

            oleg.Surname = "Ivanov";
            oleg.Name = "Oleg";
            oleg.Birth = "";
            oleg.Mark = 4.5;

            //Console.WriteLine(keyela.Surname);
            //Console.WriteLine(oleg.Name);
            Console.WriteLine(oleg.Birth);
            */
            Console.Write("Number of students: ");
            int numberStudent = Convert.ToInt32(Console.ReadLine());
          


            stud[] students = new stud[numberStudent];

            for (int i =0; i<numberStudent; i++)
            {
                Console.WriteLine("");
                Console.WriteLine("Student "+(i+1));
                students[i] = new stud();

                Console.Write("Surname: ");
                students[i].Surname = Console.ReadLine();

                Console.Write("Name: ");
                students[i].Name = Console.ReadLine();

                Console.Write("Patronymic: ");
                students[i].Patronymic = Console.ReadLine();

                Console.Write("Birthday: ");
                students[i].Birth = Console.ReadLine();

                Console.Write("Mark: ");
                students[i].Mark = Convert.ToDouble(Console.ReadLine());
                
            }
        

            Console.WriteLine("");
            Console.WriteLine("");
            Console.WriteLine("Student List:");

            for(int i=0; i < numberStudent; i++)
            {
                students[i].PrintInformation();
            }



            Console.ReadKey();
        }
    }
}
