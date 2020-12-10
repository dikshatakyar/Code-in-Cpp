//simple calculator
#include<iostream>
#include<cmath>
using namespace std;

int main() {
    float a,b;
    cout<<"enter two numbers such that a>b"<<endl;
    cin>>a>>b;
    
    char o;
    cout<<"enter an operator"<<endl;
    cin>>o;
    
    switch(o) {
        case '+' :
        cout<<a+b<<endl;
        break;
        
        case '-' :
        cout<<a-b<<endl;
        break;
        
        case '*' :
        cout<<a*b<<endl;
        break;
        
        case '/' :
        cout<<a/b<<endl;
        break;
        
       
        default :
        cout<<" enter any other operator :) "<<endl;
        break;
        
        
    }
    
    return 0;
}