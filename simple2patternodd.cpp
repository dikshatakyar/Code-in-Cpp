#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cout<<"no. of rows"<<endl;
    cin>>n;

    for(int i=1;i<=n;i++) {
        for(int j=1;j<=(2*i)-1;j++) {
            cout<<"2"<<" ";
        }
        cout<<endl;
    }
    return 0;
}