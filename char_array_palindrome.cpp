#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cout<<"size of array ? \n";
    cin>>n;
    char a[n+1];
    cout<<"enter the word  \n";
    cin>>a;
    bool flag=1;
    for(int i=0;i<n;i++) {
        if(a[i] != a[n-1-i]) {
           flag=0;
           break;
        }
    }
    if(flag) {
        cout<<a<<" is a palindrome \n";
    }
    else 
    cout<<a<<" is not a palindrome \n";

    return 0;
}