#include<bits/stdc++.h>
using namespace std;

bool prime(int n) {
    for(int i=2;i<n;i++) {
        if(n%i==0)
        return false;
    }
    return true;
}

int main() {
    int a,b;
    cout<<"print prime numbers between"<<endl;
    cin>>a>>b;
    for(int i=a;i<=b;i++) {
       if(prime(i))
       cout<<i<<endl;
       else
       {
           continue;
       }
       
    }
    return 0;
}