#include<iostream>
using namespace std;
int main()
{
    int n, pivot, fact, i,j,k, a[10][10];
    cout<<"Enter the number of equation:";
    cin>>n;
    cout<<"Enter data in order.\n";
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=(n+1);j++)
        {
            cin>>a[i][j];
        }
    }
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(i!=j)
            {
                pivot=a[j][i]/a[i][i];
                for(k=1;k<=(n+1);k++)
                {
                    a[j][k]=a[j][k]-pivot*a[i][k];
                }
            }
        }
        
    }
    cout<<"Result are:"<<endl;
    for(i=1;i<=n;i++)
    {
        cout<<a[i][n+1]/a[i][i]<<endl;
    }
    return 0;
}
