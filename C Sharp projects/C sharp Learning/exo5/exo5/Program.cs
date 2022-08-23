using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace exo5
{
    class Program
    {
        static void Main(string[] args)
        {
            Angles angles = new Angles();

            Console.WriteLine("Enter the hour: ");
            angles.Hour = Convert.ToInt32(Console.ReadLine());

            Console.WriteLine("Enter the minute: ");
            angles.Minute = Convert.ToInt32(Console.ReadLine());

            // Console.WriteLine("Angle is: "); 
            angles.PrintInformation();

            Console.ReadKey();
        }
    }
}
