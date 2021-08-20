#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i;
      cin>>n;
    int a[n];
    for(i=0;i<n;i++)
     cin>>a[i];
    int m;
      cin>>m;
      int b[m];
        for(i=0;i<m;i++)
        cin>>b[i];
            i=0;
            int j=0;
          while(i<n && j<m)
          {
            if(a[i]<b[j])
              i++;
            else if(a[i]>b[j])
              j++;
            else
                {
                cout<<b[j]<<" ";
                i++;
                j++;
                }
         }
    return 0;
}

