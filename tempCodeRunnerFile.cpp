#include<iostream>
using namespace std;
int main()
{
    int i,n,j;
    float x[10],sum=0,prod,f[10],xp;
    cout<<"Enter number of points:";
    cin>>n;
    cout<<"Enter the points and corresponding functional value::\n";
    for(i=1;i<=n;i++)
    {
        cout<<"x["<<i<<"]::";
        cin>>x[i];
        cout<<"f["<<i<<"]::";
        cin>>f[i];
    }
    cout<<"Enter the point whose functional value is to be determine::";
    cin>>xp;
    for(i=1;i<=n;i++)
    {
        prod=1;
        for(j=1;j<=n;j++)
        {
            if(i!=j)
            {
                prod=prod*((xp-x[j])/(x[i]-x[j]));
            }
        }
        sum=sum+prod*f[i];
    }
    cout<<"Result is::";
    cout<<"f["<<xp<<"]::"<<sum<<endl;
    return 0;
}