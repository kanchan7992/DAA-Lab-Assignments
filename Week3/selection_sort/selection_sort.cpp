#include<iostream>
using namespace std;

selectionsort(int a[],int n)
{
    int min ,i,j,c=0,s=0;
    for(i=0;i<n-1;i++)
    {
         min=i;
        for(j=i+1;j<n;j++)
        {
           if(a[j]<a[min])
            min=j;
          c++;
        }
        s++;
        int temp=a[min];
         a[min]=a[i];
         a[i]=temp;
    }
   // c=n*(n-1)/2;
 for(i=0;i<n;i++)
    cout<<a[i]<<" ";
  cout<<endl<<"comparisons = "<<c;
  cout<<endl<<"swaps = "<<s<<endl;
  }


int main()
{
    int T;
    cin>>T;
    for(int t=0;t<T;t++)
    {
      int n;
       cin>>n;
      int a[n],i;
    for(i=0;i<n;i++)
            cin>>a[i];

    selectionsort(a,n);
    }


return 0;
}



