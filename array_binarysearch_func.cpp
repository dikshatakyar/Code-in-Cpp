#include<bits/stdc++.h>
using namespace std;

int binarysearch(int n,int arr[],int k ) {
     int s=0,e=n;
     while(s<=e) {
         int mid=(s+e)/2;

         if(arr[mid]==k) {
             return mid;
         }
         else if(arr[mid]>k)
         e=mid-1;
         else
         {
             s=mid+1;
         }
         }
         return -1;
}
int main() {
    int n;
    cout<<"array of size ?"<<endl;
    cin>>n;

    int arr[n];
    cout<<"enter"<<n<<"elements"<<endl;
    for(int i=0;i<n;i++) {
        cin>>arr[i];
    }
    cout<<"enter number to search"<<endl;
    int k;
    cin>>k;

    cout<<binarysearch(n,arr,k);
    return 0;
}
