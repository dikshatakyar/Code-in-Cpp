#include<bits/stdc++.h>
using namespace std;
int main() {
    int n,i;
    bool flag=0;
    int arr[30];
    cout<<"enter the total number of elements"<<endl;
    cin>>n;
    cout<<"enter "<<n<<" elements"<<endl;
    for( i=1;i<=n;i++) {
        cin>>arr[i];
    }
    int x;
    cout<<"enter the number for position"<<endl;
    cin>>x;
    
    for( i=1;i<=n;i++) {
        if(arr[i]==x) {
        flag=1;
        break;
        }
    }
    if(flag==1)
    cout<<"element found at position "<<i<<endl;
    else
    {
         cout<<"element not found"<<endl;
    }
    
    
return 0;


}