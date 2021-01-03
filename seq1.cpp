#include<bits/stdc++.h>
using namespace std;
int main() {
    int n,m;
    cout<<"print even sequence bewteen"<<endl;
    cin>>n>>m;

    for(int i=n;i<=m;i++) {
        if(i%2==0)
        cout<<i<<" ";
        else
        continue;
        
    }
    return 0;
}