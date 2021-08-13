#include<iostream>
using namespace std;

int bleft(int a[],int n, int key,int l, int r)
{
    while(l<=r){
    int mid=l+(r-l)/2;

    if(a[mid]==key && a[mid-1]==key)
        return bleft(a,n,key,l,mid-1);
    else if(a[mid]==key && a[mid-1]!=key)
        return mid;
    else if(a[mid]<key)
        return bleft(a,n,key,mid+1,r);
    else if(a[mid]>key)
        return bleft(a,n,key,l,mid-1);
    }
    return -1;
}

int bright(int a[],int n, int key, int l, int r)
{
     while(l<=r){
    int mid=l+(r-l)/2;
    if(a[mid]==key && a[mid+1]==key)
        return bright(a,n,key,mid+1,r);
    else if(a[mid]==key && a[mid+1]!=key)
        return mid;
    else if(a[mid]<key)
        return bright(a,n,key,mid+1,r);
    else if(a[mid]>key)
        return bright(a,n,key,l,mid-1);
    }
    return -1;
}


int main()
{
    int n,key,count=0,t;
    cin>>t;
    for(int j=0;j<t;j++){
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    cin>>key;
    int left=bleft(a,n,key,0,n-1);
    int right=bright(a,n,key,0,n-1);
    count=(right-left)+1;
    if(count<=0)
        cout<<"Key not present"<<endl;
    else
        cout<<key<<" - "<<count<<endl;
    }
    return 0;
}


