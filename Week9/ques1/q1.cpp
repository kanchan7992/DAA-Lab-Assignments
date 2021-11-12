#include<iostream>
using namespace std;
int main()
{
    int i,j,k,n,c;
    cin>>n;
    int g[n][n];
    for(i=0;i<n;i++)
       {
        for(j=0;j<n;j++)
         {cin>>g[i][j];
         }
      }

    int a[n][n];
    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
        a[i][j]=g[i][j];

    for(k=0;k<n;k++)
        {for(i=0;i<n;i++)
         {for(j=0;j<n;j++)
         {
             if(a[i][j]>(a[i][k]+a[k][j]) && (a[i][k]!=99999 && a[k][j]!=99999))
                a[i][j]=a[i][k]+a[k][j];
         }
        }
        }

    cout<<"Shortest Distance Matrix : \n";

    for(i=0;i<n;i++)
        {for(j=0;j<n;j++)
         {if(a[i][j]==99999)
            cout<<"INF ";
        else
         cout<<a[i][j]<<" ";
         }
         cout<<endl;
      }
    return 0;
}
