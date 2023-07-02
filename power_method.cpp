#include<iostream>
#include<math.h>
#define E 0.0001
using namespace std;
int main()
{
    int i,j,n,m;
    float k_o=0,X[10],A[10][10],Y[10],k_n,err;
    cout<<"Enter row and column of matrix:\n";
    cin>>n>>m;
    cout<<"Enter elment of matrix.\n";
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=m;j++)
        {
            cout<<"a["<<i<<"]"<<"["<<j<<"]::";
            cin>>A[i][j];
            cout<<endl;
        }
    }
    cout<<endl<<"Enter initial guess of eigen vector X.\n";
    for(i=1;i<=n;i++)
    {
        cout<<"x["<<i<<"]::";
        cin>>X[i];
    }
    do
    {
    for(i=1;i<=n;i++)
    {
        Y[i]=0;
        for(j=1;j<=n;j++)
        {
            Y[i]=Y[i]+A[i][j]*X[j];
        }
    }
    k_n=fabs(Y[1]);
    for(i=2;i<=n;i++)
    {
        if(k_n<fabs(Y[i]))
        {
            k_n=fabs(Y[i]);
        }
    }
    err=k_n-k_o;
    for(i=1;i<=n;i++)
    {
        X[i]=Y[i]/k_n;
    }
    k_o=k_n;
    } while (err>E);
    cout<<"The eigen value is:"<<k_n<<endl;
    cout<<"The eigen vector is:\n";
    for(i=1;i<=n;i++)
    {
        cout<<"X["<<i<<"]::"<<X[i];
        cout<<endl;
    }


}