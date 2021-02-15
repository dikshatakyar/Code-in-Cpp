#include<bits/stdc++.h>
using namespace std;
int main() {
    int n,i;
    cout<<"how many elements"<<endl;
    cin>>n;
    int arr[n];

    cout<<"enter the elements"<<endl;
    for( i=0;i<n;i++) {
        cin>>arr[i];
    }
    for( i=0;i<n;i++) {
    if(arr[0]<arr[i])
    arr[0]=arr[i];
    }

    cout<<"the maximum element is "<<arr[0]<<endl;
    
    return 0;
}