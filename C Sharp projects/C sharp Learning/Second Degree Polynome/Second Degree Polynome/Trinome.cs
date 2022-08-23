using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Second_Degree_Polynome
{
    class Trinome
    {
        public double A { get; set; }
        public double B { get; set; }
        public double C { get; set; }

        public Trinome(double a, double b, double c)
        {
            A = a;
            B = b;
            C = c;
        }

        public double Y(double x)
        {
            return A * x * x + B * x + C;
        }

        public double Integrale(double a1, double a2)
        {
            double result = 0;
            result += A * (Math.Pow(a2, 3) - Math.Pow(a1, 3)) / 3;
            result += B * (a2 * a2 - a1 * a1) / 2;
            result += C * (a2 - a1);
            return result;
        }
        
        public double AverageValue(double a1, double a2)
        {
            return Integrale(a1, a2) / (a2 - a1);
        }
        
        
        public bool HasExtremum()
        {

            if (A < 0)
            {
                Console.WriteLine("Yes the function has an extremum and it is a maximum!");
                return true;
            }
            else if (A > 0)
            {
                Console.WriteLine("Yes the function has an extremum and it is a minimum!");
                return true;
            }
            else
            {
                Console.WriteLine("The function has no extremum!");
                return false;
            }
                            
        }

        public void PrintExtremum()
        {
            double x = -B / 2 / A;
            double y = Y(x);

            if (A > 0)
                Console.WriteLine("Your function gets to its minimum at the point (" + x + ";" + y + ")");
            else if(A<0)
                Console.WriteLine("Your function gets to its maximum at the point (" + x + ";" + y + ")");
            else
                Console.WriteLine("Don't be stupid! We told your has no extremum!");

        }
        
        public double getX_extremum()
        {
            return -B / 2 / A;
        }
        public double getY_extremum()
        {
            return Y(getX_extremum());
        }


        public double Discrim()
        {
            return B * B - 4 * A * C;
        }

        public void PrintZeros()// Здесь это просто вывод значений нулей, если есть
        {
            
            Console.WriteLine("F(x) = " + A + "x^2 + " + B + "x + " + C);
            Console.WriteLine("");

            Console.WriteLine("Discriminant: "+Discrim());
            Console.WriteLine("");

            if (Discrim() < 0)
            {
                Console.WriteLine("Your function does not have zeros");
            } 
            else if (Discrim() == 0)
            {
                Console.WriteLine("Your function has a double zero: "+ (-B/2/A));// x1 = x2
            }
            else
            {
                Console.WriteLine("Your function has two distinct zeros:" +
                    " "+ ((-B - Math.Sqrt(Discrim())) / 2 / A) 
                    +" and "+ ((-B + Math.Sqrt(Discrim())) / 2 / A)); // x1 != x2
            }
        }

        public double [] Zeros() //Здесь это возврашение значения нулей
        {
            double[] zeros = new double[2];
            zeros[0] = (-B - Math.Sqrt(Discrim())) / 2 / A;
            zeros[1] = (-B + Math.Sqrt(Discrim())) / 2 / A;

            return zeros;
        } 



    }
}





