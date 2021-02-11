#include<bits/stdc++.h>
using namespace std;
int main() {
    int n,i;
    cout<<"how many elements"<<endl;
    cin>>n;
    cout<<"enter the numbers"<<endl;
     int arr[n];
     for(int i=0;i<n;i++) {
         cin>>arr[i];
     }
     for(int i=n-1;i>=0;i--) {
         cout<<arr[i]<<" ";
     }
     return 0;
}