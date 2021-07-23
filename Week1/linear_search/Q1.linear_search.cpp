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
        int c=0;
        for(j=0;j<n;j++)
        {
            if(a[j]==key)
              {
                f=1;
                index=j+1;
                break;

              }
              c++;

        }
        if(f==1)
            cout<<"Present "<<index<<endl<<endl;
        else
            cout<<"Not Present "<<c<<endl<<endl;

    }
    return 0;
}
