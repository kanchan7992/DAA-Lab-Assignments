#include<iostream>
using namespace std;
int main() {
  int n,t,i,j,k, testcases;
    cin>>testcases;
    for(t=0;t<testcases;t++)
    {
        cout<<"INPUT : ";
        cin>>n;
        int a[n],f=0;
        for(i=1;i<=n;i++)
            cin>>a[i];
        for(i=1;i<=n;i++)
        {
            for(j=i+1;j<=n;j++)
            {
                for(k=j+1;k<=n;k++)
                {
                    if(a[i]+a[j]==a[k])
                    {
                        cout<<"OUTPUT: "<<i<<" "<<j<<" "<<k<<endl<<endl;
                        f=1;
                        break;
                    }
                }
             }
         }
    if(f==0)
    {
        cout<<"OUTPUT: No sequence found"<<endl<<endl;
    }
  }
    return 0;
}
