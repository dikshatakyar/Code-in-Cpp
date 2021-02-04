#include<bits/stdc++.h>
using namespace std;

bool isprime(int n) {
    for(int i=2;i<n;i++) {
        if(n%i==0)
        return false;
    }
            return true;
        
    }

int main() {
    int n;
    cout<<"enter the number to be checked"<<endl;
    cin>>n;
    if(isprime(n))
    cout<<n<<"is a prime number"<<endl;
    else
    {
        cout<<n<<"is not a prime number"<<endl;
    }
    return 0;
}