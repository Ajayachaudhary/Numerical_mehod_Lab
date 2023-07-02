#include<iostream>
#include<math.h>
#include<stdio.h>
#define f(x) (x*x-4*x-10)
#define E 0.0001
using namespace std;
int main()
{
    float x1,x2,xm;
    do
    {
        cout<<"Enter the value of x1:";
        cin>>x1;
        cout<<"Enter the value of x2:";
        cin>>x2;
    } while (f(x1)*f(x2)>0);
    do
    {
        xm=(x1+x2)/2;
        if(f(xm)*f(x1)<0)
        {
            x2=xm;
        }
        else
        {
            x1=xm;
        }
    } while (fabs(x1-x2)>E);
    cout<<endl<<"The root is:"<<xm;
    return 0;
    
}