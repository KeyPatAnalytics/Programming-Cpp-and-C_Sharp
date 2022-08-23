using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace My_First_project
{
    class Program
    {
        static void Main(string[] args)
        {

            /*Console.WriteLine("Welcome to the board!!!");

            Book book1 = new Book("Wisdom", "Reverend Munroe",237);
            Book book2 = new Book("The power of the cross", "Pastor Gustave",70);
            Book book3 = new Book();

            Console.WriteLine(book1.title);
            Console.WriteLine(book2.author);
            Console.WriteLine(book3.author);
            */

            /*
         
            Student student1 = new Student("Tom","Bussiness",3.6);
            Student student2 = new Student("Andrea", "Arts", 4.2);

            Console.WriteLine(student1.hasHonors());
            Console.WriteLine(student2.hasHonors());


            */
            /*
             * HOW TO USE GETTERS AND SETTERS
            Movie Makossa = new Movie("Makossa", "Cameroon", " ");
            Movie Praise = new Movie("Praises", "Ghana", "PG-13");
            Console.WriteLine(Makossa.Rating);
            *
            * TAKE NOTE OF THE STATIC CLASS ATTRIBUTES AND EVEN THE STATIC CLASSES
            Console.WriteLine(Movie.count);
            */

            Chef newChef = new Chef();
            newChef.MakeChicken();

            ItalianChef Roberto  = new ItalianChef();
            Roberto.MakeChicken();
            Roberto.MakePasta();
            Console.ReadKey(); 
        }
    }
}
