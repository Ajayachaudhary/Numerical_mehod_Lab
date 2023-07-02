#include<iostream>
#include<math.h>
#define f(x) (x*x*x+1)
using namespace std;
int main()
{
    int i,n;
    float h,a,b, sum1=0,sum2=0,Ics,y=0;
    cout<<"Enter no of segment::";
    cin>>n;
    cout<<"Enter the range of integration::\n";

    cin>>a>>b;

    h=(b-a)/n;

    for(i=1;i<=(n-1);i++)
    {
        y=(a+(i*h));
        if((i%2)!=0)
        {
            sum1=sum1+4*f(y);

        }
        else
        {
            sum2=sum2+2*f(y);
        }
    }
    Ics=(h/3)*(f(a)+sum1+sum2+f(b));

    cout<<"The result is::"<<Ics;
    return 0;
}