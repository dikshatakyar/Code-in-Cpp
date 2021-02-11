#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cout<<"array of size?"<<endl;
    cin>>n;

    int arr[n];
    cout<<"enter thhe elements"<<endl;

for(int i=0;i<n;i++) {
    cin>>arr[i];
}

    for(int i=0;i<n-1;i++) {
        for(int j=i+1;j<n;j++) {
            if(arr[j]<arr[i]) {
           int temp=arr[j];
            arr[j]=arr[i];
            arr[i]=temp;
            }
        }
    }
    for(int i=0;i<n;i++) {
        cout<<arr[i]<<" ";
    }
    return 0;
}