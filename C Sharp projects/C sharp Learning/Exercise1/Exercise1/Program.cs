using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Exercise1
{
    class Program
    {
        static void Main(string[] args)
        {
            double a, b, c, x1, x2, f, step;
            Console.WriteLine("Enter the values of the coef in a*x^2 + b*x + c: ");
            Console.WriteLine("");

            Console.Write("a = ");
            a = Convert.ToDouble(Console.ReadLine());
            Console.Write("b = ");
            b = Convert.ToDouble(Console.ReadLine());
            Console.Write("c = ");
            c = Convert.ToDouble(Console.ReadLine());

            Console.WriteLine("");
            Console.WriteLine("Enter the ends of the segment and the step: ");
            Console.WriteLine("");
            Console.Write("x1 = ");
            x1 = Convert.ToDouble(Console.ReadLine());
            Console.Write("x2 = ");
            x2 = Convert.ToDouble(Console.ReadLine());
            Console.WriteLine("");
            Console.Write("step = ");
            step = Convert.ToDouble(Console.ReadLine());

           
            double x = x1;
            while(x <= x2)
            {
                f = a * x * x + b * x + c;
                Console.WriteLine("f({0}) = {1}", x, f);
                x += step;
            }
            if(x -step != x2)
            {
                f = a * x2 * x2 + b * x2 + c;
                Console.WriteLine("f({0}) = {1}", x2, f);
            }

            Console.ReadKey();
        }
    }
}







