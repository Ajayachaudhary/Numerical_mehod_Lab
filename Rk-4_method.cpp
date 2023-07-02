#include<iostream>
#define f(x,y) (2*y/x)
using namespace std;
int main()
{
    int i,n;
    float x0,y0,xp,m1,m2,m3,m4,m,y1,h,x1;
    cout<<"Enter the initial guesses::";
    cin>>x0>>y0;
    cout<<"Enter the step-size::";
    cin>>h;
    cout<<"Enter the point which functional value is to be determined::";
    cin>>xp;
     n=(xp-x0)/h;
     for(i=1;i<=n;i++)
     {
        m1=f(x0,y0);
        m2=f((x0+(h/2)),(y0+m1*(h/2)));
        m3=f((x0+(h/2)),(y0+m2*(h/2)));
        m4=f((x0+h),(y0+m3*h));
        m=(m1+2*m2+2*m3+m4)/6;
        y1=y0+m*h;
        x1=x0+h;
        x0=x1;
        y0=y1;
     }
     cout<<"The result is ::"<<y0;
     return 0;

}