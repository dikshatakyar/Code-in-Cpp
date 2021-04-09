#include<bits/stdc++.h>
using namespace std;

int binary(int arr[],int k,int s,int e){
while(s<=e) {
     int mid=(s+e)/2;
     if(arr[mid]==k) {
         return mid;
    }
     else if(arr[mid]>k) {
         return binary(arr,k,s,mid-1);
     }
     else {
        return binary(arr,k,mid+1,e);
     }     
}
return -1;
}
int main() {
int arr[100];
cout<<"enter the size of array \n";
int n;
cin>>n;
cout<<"enter the elements \n";
for(int i=0;i<n;++i) {
    cin>>arr[i];
}
cout<<"enter key ? \n";
int k;
cin>>k;
cout<<binary(arr,k,0,n-1);
    return 0;
}
