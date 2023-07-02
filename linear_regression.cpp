#include<iostream>
using namespace std;
int main()
{
    int i,n,j;
    float x[10],sum=0,y[10],xp,sumx=0,sumy=0,sumxy=0,sumx2=0,a,b;
    cout<<"Enter number of points:";
    cin>>n;
    cout<<"Enter the points and corresponding functional value::\n";
    for(i=1;i<=n;i++)
    {
        cout<<"x["<<i<<"]::";
        cin>>x[i];
        cout<<"y["<<i<<"]::";
        cin>>y[i];
    }
    for(i=0;i<=n;i++)
    {
        sumx=sumx+x[i];
        sumy=sumy+y[i];
        sumxy=sumxy+(x[i]*y[i]);
        sumx2=sumx2+(x[i]*x[i]);
    }
    b=((n*sumxy)-(sumx*sumy))/((n*sumx2)-(sumx*sumx));
    a=(sumy/n)-((b*sumx)/n);
    cout<<"Result is:\n";
    cout<<"Y="<<a<<"+"<<b<<"x";
    return 0;
}