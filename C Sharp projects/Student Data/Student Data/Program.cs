using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Student_Data
{
    class Program
    {
        static void Main(string[] args)
        {
            Console.Write("Enter the number of students: ");
           int totalStudent = Convert.ToInt32(Console.ReadLine());
            Console.WriteLine("");

                       
            Student[] students = new Student[totalStudent];
            for(int i=0; i< totalStudent; i++)
            {
                students[i] = new Student();
            }
            

            for(int i=0; i<totalStudent; i++)
            {
                Console.WriteLine("Student " + (i + 1) + ":");
                Console.Write("     Surame: ");
                students[i].Surname = Console.ReadLine();
                Console.Write("     Name: ");
                students[i].Name = Console.ReadLine();
                Console.Write("     Patronymic: ");
                students[i].Patronymic = Console.ReadLine();
                Console.Write("     Birthday(dd/mm/yy): ");
                students[i].Birthday = Console.ReadLine();
                Console.Write("       Gpa: ");
                students[i].Gpa = Convert.ToDouble(Console.ReadLine());
                Console.WriteLine();
            }

            for (int i = 0; i < totalStudent; i++)
            {
                students[i].PrintInformation();
            }
            
   
            Console.ReadKey();
        }
    }
}
