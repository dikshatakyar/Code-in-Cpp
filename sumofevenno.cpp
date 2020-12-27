#include<bits/stdc++.h>
using namespace std;
int main() {
    int n,sum=0;
    cout<<"sum till"<<endl;
    cin>>n;
    for(int i=1;i<=n;i++) {
        if(i%2==0) 
        sum+=i;
        cout<<i<<endl;
     }
    cout<<sum;
    return 0;
}