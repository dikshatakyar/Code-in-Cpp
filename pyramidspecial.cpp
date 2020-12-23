#include<bits/stdc++.h>
using namespace std;
int main() {
    int k=0,n;
    cout<<"print till"<<endl;
    cin>>n;
    for(int i=1;i<=n;i++,k=0) {
        for(int j=1;j<=n-i;j++) {
            cout<<" ";
        }
            while(k!=(2*i)-1) {
            cout<<"*";
            k++;
            }
        cout<<endl;
    }
    return 0;
}