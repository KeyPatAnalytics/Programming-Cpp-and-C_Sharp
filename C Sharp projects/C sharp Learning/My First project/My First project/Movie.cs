using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace My_First_project
{
    class Movie
    {
        public string title;
        public string director;
        private  string rating;
        public static int count;

        public Movie(string aTitle, string aDirector, string aRating)
        {
            title = aTitle;
            director = aDirector;
            Rating = aRating;
            count++;
        }

        public string Rating
        {
            get { return rating; } 
            set
            {
                if (value == "PG" || value == "PG-13" || value == "R" || value == "NR")
                    rating = value;
                else
                    rating = "NR";
            }  
        }
    }


}
