#include<bits/stdc++.h>
// Given an array a[] of size n. For every i from 0 to n-1 output max(a[0], a[1],..., a[i]).
using namespace std;
int main() {
int n;
cout<<"array of size ? \n";
cin>>n;

int arr[n];
cout<<"enter "<<n<<" elements \n";
for(int i=0;i<n;i++) {
    cin>>arr[i];
}

int mx= INT_MIN;

for(int i=0;i<n;i++) {
    mx=max(mx,arr[i]);
    cout<<mx<<endl;
}
return 0;
}