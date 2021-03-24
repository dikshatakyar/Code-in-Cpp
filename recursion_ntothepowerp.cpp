#include<bits/stdc++.h>
using namespace std;
int power(int n,int p) {
     if(p==0) {
         return 1;
     }
    int prevpow= pow(n,p-1);
    return n*prevpow;
}

int main() {
    int n,p;
    cout<<"enter a number and its power resp \n";
    cin>>n>>p;

    cout<<power(n,p)<<endl;

    return 0;
}