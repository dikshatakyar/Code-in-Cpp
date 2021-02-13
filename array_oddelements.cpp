#include<bits/stdc++.h>
using namespace std;
int main() {
    int n,i,arr[40];
    cout<<"how many elements?"<<endl;
    cin>>n;
    cout<<"enter "<<n<<" elements"<<endl;
    
    for(i=0;i<n;i++) {
        int arr[i];
      cin>>arr[i];
    
    if(arr[i]%2==1) {
      cout<<arr[i]<<" ";
    }
    }
    

  return 0;

}