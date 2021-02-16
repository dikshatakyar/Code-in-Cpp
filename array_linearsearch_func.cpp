#include<bits/stdc++.h>
using namespace std;

int linearsearch(int arr[],int k,int n) {
      for(int i=0;i<n;i++) {
          if(arr[i]==k) 
          return i;
      }
      return -1;
}

int main() {
    int n;
    cout<<"size of array"<<endl;
    cin>>n;
int arr[n];
    for(int i=0;i<n;i++) {
        cin>>arr[i];
    }
int k;
    cout<<"enter key"<<endl;
    cin>>k;
    
  cout<<linearsearch(arr,k,n);

return 0;
}