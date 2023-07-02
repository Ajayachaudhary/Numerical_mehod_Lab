#include<iostream>
#include<math.h>
#include<stdio.h>
#define f(x) (sin(x)-0.5*x)
#define g(x) (cos(x)-0.5)
#define E 0.0001
using namespace std;
int main()
{
    float x0,x1,err;
    do
    {
        cout<<"Enter inital guess:";
        cin>>x0;
    } while (g(x0)==0);
    do
    {
        x1=x0-(f(x0)/g(x0));
        err=fabs(x1-x0);
        x0=x1;
    } while (err>E);
    
    cout<<endl<<"The root is:"<<x0;
    return 0;
}