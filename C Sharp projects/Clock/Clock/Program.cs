using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Clock
{
    class Program
    {
        static void Main(string[] args)
        {
            Console.WriteLine("What time is it?");
            Console.Write("");

            Console.Write("Hour: ");
            int hours = Convert.ToInt32(Console.ReadLine()) % 12;

            Console.Write("Minutes: ");
            int minutes = Convert.ToInt32(Console.ReadLine()) % 60;

            double alpha_minutes = 6.0 * minutes; //Положение стрелки минут(Каждая минута соответ-ет 6 градусов)
            double alpha_hours = 30.0 * (hours + minutes / 60.0); //Положение стрелки часов

            double angle = Math.Abs(alpha_hours - alpha_minutes);

            if (angle > 180)
            {
                angle = 360 - angle;
            }

            Console.Write("");
            Console.Write("Then the angle between hour hands is {0} degrees.",angle);

            Console.ReadKey();
        }
    }
}
