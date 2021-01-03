#include<bits/stdc++.h>
using namespace std;
int main() {
    int n,m;
    cout<<"print odd numbers between"<<endl;
    cin>>n>>m;

    for(int i=n;i<=m;i++) {
        if(i%2==0)
        continue;
        else
        {
            cout<<i<<" ";
        }
        
    }
    return 0;
}