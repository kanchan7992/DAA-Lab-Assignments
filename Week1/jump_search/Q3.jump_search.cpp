#include<iostream>
#include<math.h>
using namespace std;

void jumpSearch(int a[],int n,int key) {
   int m = sqrt(n);
   int i,f=0,c=1;

   while(a[m] <= key && m < n) {
     c++;
      i = m;
      m += sqrt(n);
   }

   for(int k = i; k<m; k++)
    {
      if(a[k] == key)
         {f=1;
         break;
         }
   }
   if(f==1)
    cout<<"Present "<<c<<endl;
   else
    cout<<"Not Present "<<c<<endl;

}

int main() {
  int n,i,j, testcases;
    cin>>testcases;
    for(i=0;i<testcases;i++)
    {
        cout<<"INPUT : ";
        cin>>n;
        int a[n];
        for(j=0;j<n;j++)
            cin>>a[j];

        int key;
        cin>>key;
jumpSearch(a, n , key);

}
return 0;
}
