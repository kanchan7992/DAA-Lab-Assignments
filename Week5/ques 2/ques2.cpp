#include<bits/stdc++.h>
using namespace std;

void paired(int a[],int key, int n)
{
  int low = 0;
  int high = n - 1;
  int f=0;
  while (low < high)
  {
    if (a[low] + a[high] == key)
    {
      cout <<a[low] << " " <<a[high] << ",";
      f=1;
    }
    if (a[low] + a[high] > key)
    {
      high--;
    }
    else
    {
      low++;
    }
  }
  if(f==0)
    cout<<"No Such pair Exist";
  cout<<endl;
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,i;
        cin>>n;
        int a[n];
        for(i=0;i<n;i++)
            cin>>a[i];

        int key;
        cin>>key;

         sort(a,a+n);

       paired(a,key,n);
    }
    return 0;
}
