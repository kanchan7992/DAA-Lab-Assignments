#include<iostream>
using namespace std;
int main()
{
    int t,n,i,j;

    cin>>t;
    for(i=0;i<t;i++)
    {
        cout<<"INPUT: ";
        cin>>n;
        int a[n];
        for(j=0;j<n;j++)
            cin>>a[j];
        int key,f=0,index=0;
        cin>>key;
        for(j=0;j<n;j++)
        {
            if(a[j]==key)
              {
                f=1;
                index=j;
                break;
              }

        }
        if(f==1)
            cout<<"OUTPUT: Present "<<index<<endl<<endl;
        else
            cout<<"OUTPUT: Not Present "<<j<<endl<<endl;

    }
    return 0;
}
