#include<bits/stdc++.h>
using namespace std;

int fact(int n) {
    int fac=1;
for(int i=2;i<=n;i++) {
     fac*=i;
}
return fac;

}

int main() {
    int n,r;
    cout<<"value of n and r respectively"<<endl;
    cin>>n>>r;

    int ans= fact(n)/(fact(r)*fact(n-r));

    cout<<ans;

    return 0;
}