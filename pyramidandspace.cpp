#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cout<<"print till"<<endl;
cin>>n;
for(int i=1;i<=n;i++) {
    
    for(int k=1;k<=n-i;k++) 
    cout<<" ";

    for(int j=1;j<=2*i-1;j++) {
        if(j%2==0)
        cout<<" ";
        else
        {
            cout<<"*";
        }
        
    }
    cout<<endl;
}
return 0;
}