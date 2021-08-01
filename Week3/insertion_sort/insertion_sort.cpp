#include<iostream>
using namespace std;
insertion_sort(int a[],int n)
{ int temp,j,i,c=0,shift=0;
    for(i=1;i<n;i++)
    {
        temp=a[i];
      j=i-1;
      while(j>=0 && a[j]>temp)
      {
          a[j+1]=a[j];
          j--;
          c++;
          shift++;
      }
      a[j+1]=temp;
      shift++;
    }
    for(i=0;i<n;i++)
        cout<<a[i]<<" ";
  cout<<endl<<"comparisons = "<<c;
  cout<<endl<<"shifts = "<<shift<<endl;


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

    insertion_sort(a,n);
    }


return 0;
}

