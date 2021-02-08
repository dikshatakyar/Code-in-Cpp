#include<bits/stdc++.h>
using namespace std;
int main() {
    int n1,n2;
    cout<<"Enter two numbers"<<endl;
    cin>>n1>>n2;
    char op;
    cout<<"enter operator"<<endl;
    cin>>op;

    switch(op) {
        case '+':
        cout<<n1+n2<<endl;
        break;
        case '-' :
        cout<<n1-n2<<endl;
        break;
        case '*':
        cout<<n1*n2<<endl;
        break;
        case '/' :
        cout<<n1/n2<<endl;
        break;
        case '%' :
        cout<<n1%n2<<endl;
        break;
        default :
        cout<<"operator not found!"<<endl;
        break;
    }
return 0;
}