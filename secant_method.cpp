#include<iostream>
#include<math.h>
#include<stdio.h>
#define f(x) (x*x-4*x-10)
#define E 0.00001
using namespace std;
int main()
{
    float x1,x2,x3;
    cout<<"Enter first intial guess:";
    cin>>x1;
    cout<<"Enter second intial guess:";
    cin>>x2;
    do
    {
        x3=(x1*f(x2)-x2*f(x1))/(f(x2)-f(x1));
        x1=x2;
        x2=x3;
    } while (fabs(x1-x2)>E);
    cout<<"The root is:"<<x3;
    return 0;
    
}