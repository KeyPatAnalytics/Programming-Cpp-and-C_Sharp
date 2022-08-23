#include <iostream>
#include "A.h"
#include "B.h"
using namespace std;
using namespace A;
namespace EMMA
{
    namespace Pat
    {
        void test(){
            cout<<"Emmanuel Patatchona"<<endl;
        }
    }
}
int main()
{
    int iu = 5;
    cout << "Hello Emma world!" << endl;
    cout<<funct(iu) <<endl;// name space A
    cout<< B::Funct(iu) <<endl;
    EMMA::Pat::test();
    using namespace EMMA::Pat;
    test();
    return 0;
}
