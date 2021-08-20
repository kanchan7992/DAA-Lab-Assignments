#include<bits/stdc++.h>
using namespace std;
int findmax(char a[],int n)
{   char maxx ='a';
    int i;
    for(i=0;i<n;i++)
        if(a[i]>maxx)
        maxx=a[i];
        return (maxx-'a');
}


int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int i,n;
        cin>>n;
        char a[n];

        for(i=0;i<n;i++)
            cin>>a[i];
         int h=findmax(a,n);
        int c[h]={0};
        for(i=0;i<n;i++)
            c[a[i]-'a']++;
        int maxx=0;
        char ans;
        for(i=0;i<h;i++)
     {      if(c[i]>maxx)
               {
                maxx=c[i];
                 ans = i+'a';
               }
    }
    if(maxx==1)
        cout<<"No Duplicates Present";
    else
        cout<<ans<<"-"<<maxx<<endl;
    }
return 0;

}
