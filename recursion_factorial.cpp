#include<bits/stdc++.h>
using namespace std;

int fact(int n) {
    if(n==0) {
        return 1;
    }
    int prevfact= fact(n-1);
    return n*prevfact;
}

int main() {
    int n;
    cout<<"factorial of ? \n";
    cin>>n;

    cout<<n<<"! = "<<fact(n);
}