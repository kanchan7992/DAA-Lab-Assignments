#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;
int main()
{
    int n,c,i,t;
    cin>>n;
    vector<int> v;
    for(i=0;i<n;i++){
        cin>>t;
      v.push_back(t);
}
sort(v.begin(),v.end());
int sum=0;

for(i=0;i<n;i++)
sum+=v[i];

cout<<sum<<endl;
return 0;
}

