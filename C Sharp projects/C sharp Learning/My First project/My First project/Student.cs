using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace My_First_project
{
    class Student
    {
        public string name;
        public string major;
        public double gpa;


        public Student(string _name, string _major, double _gpa)
        {
            name = _name;
            major = _major;
            gpa = _gpa;
        }

        public bool hasHonors()
        {
            return gpa >= 3.5;
        }
    }

    
}
