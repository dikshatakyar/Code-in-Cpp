#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    // cout<<"array of size ?"<<endl;
    cin>>n;

    int arr[n];
    //  cout<<"enter the elements \n";

     for(int i=0;i<n;i++) {
         cin>>arr[i];
     }

     for(int i=0;i<n;i++) {
         int sum=0;
         for(int j=i;j<n;j++) {
             sum+= arr[j];
             cout<<sum<<endl;
         }
     }
     return 0;
}