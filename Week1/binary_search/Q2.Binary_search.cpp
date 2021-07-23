#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int binarySearch(int arr[], int key, int low, int high) {
    int c=0;
    int mid;
  while (low <= high) {
    c++;
    mid = low + (high - low) / 2;
    if (arr[mid] == key)
      break;

    else if(arr[mid] < key)
      low = mid + 1;

    else
      high = mid - 1;


  }

if(arr[mid]==key)
    cout<<"Present "<<c<<endl<<endl;
else
    cout<<"Not Present "<<c<<endl<<endl;
}

int main() {
  int n,i,j, testcases;
    cin>>testcases;
    int arr[50];
    for(i=0;i<testcases;i++)
    {
        cout<<"INPUT : ";
        cin>>n;
        int low=0;
        int high=n-1;
        for(j=0;j<n;j++)
            cin>>arr[j];

        int key;
        cin>>key;
binarySearch(arr,key,low,high);

}
return 0;
}
