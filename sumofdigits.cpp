#include<bits/stdc++.h>
using namespace std;
int main() {
    int i,n,sum=0;
    cout<<"enter a number"<<endl;
    cin>>n;
    while(n>0) {
    i=n%10;
    sum+=i;
    n=n/10;

    }
    cout<<"the sum of the digits is "<<sum;

    return 0;
}