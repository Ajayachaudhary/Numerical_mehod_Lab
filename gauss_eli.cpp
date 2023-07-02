#include<iostream>
using namespace std;
int main()
{
    int n,i,j,k;
    float a[10][10],x[10],sum,c;
    cout<<"Enter the number of equation:";
    cin>>n;
    cout<<"Enetr coeficient of linear equation.\n";
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=(n+1);j++)
        {
            cout<<"a["<<i<<"]"<<"["<<j<<"]::";
            cin>>a[i][j];
            cout<<endl;
        }
    }
    for(j=1;j<=n;j++)
    {
        for(i=1;i<=n;i++)
        {
            if(i>j)
            {
                 c=a[i][j]/a[j][j];
                for(k=1;k<=(n+1);k++)
            {
                a[i][k]=a[i][k]-c*a[j][k];
            }
            }
            
        }
    }
    x[n]=a[n][n+1]/a[n][n];
    for(i=n-1;i>=1;i--)
    {
         sum=0;
        for(j=i+1;i<=n;j++)
        {
            sum=sum+a[i][j]*x[j];
        }
        x[i]=(a[i][n+1]-sum)/a[i][i];
    }
    cout<<"The solution is:\n";
    for(i=1;i<=n;i++)
    {
        cout<<"x[i]"<<x[i]<<endl;
    }
    return 0;
}