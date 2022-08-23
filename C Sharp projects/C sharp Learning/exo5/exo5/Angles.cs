using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace exo5
{
    class Angles
    {
        private Int32 angle;
        private Int32 hour;
        private Int32 minute;




        public Int32 Hour
        {
            get { return hour; }
            set
            {
                if (value >= 0 && value < 12)
                {
                    hour = value * 30;
                }
                else if (value >= 12 && value <24)
                {
                    hour = (value % 12) * 30;
                }
                else
                {
                    Console.WriteLine("Incorrect data intered");
                }
            }


        }


        public Int32 Minute
        {
            get { return minute; }
            set
            {
                if (value >= 0 && value < 60)
                {
                    minute = value * 6;
                }
                else
                {
                    Console.WriteLine("Incorrect data intered");
                }
            }
        }

        public Int32 Angle
        {
            get
            {
                angle  = Math.Abs(hour - minute);

                if (angle > 180)
                {
                    angle = 180 - (angle - 180);
                }

                return angle;
            }
        }



        public void PrintInformation()
        {
            Console.WriteLine("The angle between 0 and hour hand: " + Hour);
            Console.WriteLine("The angle between 0 and minute hand: " + Minute);
            Console.WriteLine("The angle between the hour and minute hand: " + Angle);
        }
    }
}
