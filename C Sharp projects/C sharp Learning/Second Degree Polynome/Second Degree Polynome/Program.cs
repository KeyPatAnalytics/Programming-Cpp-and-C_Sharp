using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Second_Degree_Polynome
{
    class Program
    {
        static void Main(string[] args)
        {
            Trinome trinome1 = new Trinome(1,5,7);
            trinome1.PrintZeros();
            double a1 = 4; double a2 = 7;
            double integral = trinome1.Integrale(a1, a2);
            Console.WriteLine("The integrale of this function from " + a1 + " to " + a2 + " is " + integral);
            Console.WriteLine("The average value of that function on the same interval is " + trinome1.AverageValue(a1,a2));
            trinome1.PrintExtremum();

            Console.WriteLine("");
            Console.WriteLine("");

            Trinome trinome2 = new Trinome(3, -4, 1);
            trinome2.PrintZeros();
            a1 = 0;  a2 = 10;
            integral = trinome2.Integrale(a1, a2);
            Console.WriteLine("The integrale of this function from " + a1 + " to " + a2 + " is " + integral);
            Console.WriteLine("The average value of that function on the same interval is " + trinome2.AverageValue(a1, a2));
            trinome2.PrintExtremum();

            Console.ReadKey();
        }
    }
}
