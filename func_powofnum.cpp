#include<bits/stdc++.h>
using namespace std;

int power(int num,int pow) {
    int ans=1;
    for(int i=1;i<=pow;i++) {
       ans=ans*num;
    }
    return ans;
}

int main() {
    int n,p;
    cout<<"enter number"<<endl;
    cin>>n;
    cout<<"enter power"<<endl;
    cin>>p;
    cout<<power(n,p)<<endl;
    return 0;

}