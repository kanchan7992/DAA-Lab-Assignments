#include<iostream>
#include<math.h>
using namespace std;
int main() {
  int n,t,i,j, testcases;
    cin>>testcases;
    for(t=0;t<testcases;t++)
    {
        cout<<"INPUT : ";
        cin>>n;
        int a[n],f=0;
        for(i=0;i<n;i++)
            cin>>a[i];
        int key;
        cin>>key;

        for(i=0;i<n-1;i++)
        {
            for(j=i+1;j<n;j++)
            {
                 if(abs(a[i]-a[j])==key)
                    {
                        f++;

                    }
            }
        }


        cout<<f<<endl;
  }
    return 0;
}

