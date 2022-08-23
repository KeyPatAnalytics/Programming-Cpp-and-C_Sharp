#include<iostream>
#include<math.h>
#include<conio.h>
using namespace std;
int main()
{
    const int MaxIter = 500;
    double eps, x;
    cout<<"Enter the argument and the accuracy:\n";
    cout<<"X = ";cin>>x;
    cout<<"eps = ";cin>>eps;
    bool ok = true;
    double y=x,step=x;
    for(int n=0; fabs(step)>eps;n++ )
    {
        step *= -x*x/(2*n+2)/(2*n+3);
        y += step;
        if(n>MaxIter){
            ok = false;
            break;
        }
    }
    if(ok)cout<<"The value of the function sin("<<x<<") with the accuracy of "<<eps<<" is "<<y<<endl;
    else cout<<"The sequence is divergent!";
    return 0;
}
