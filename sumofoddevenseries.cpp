//sum of odd-even series
#include<iostream>
#include<cmath>
using namespace std;

int main() {
    
    int n,i;
    float even=0,odd=0,sum=0;
    cout<<"print sum till"<<endl;
    cin>>n;
    
    for(i=1;i<=n;i++) {
        if(i%2==0) {
            even+= (1/pow(i,i));
        }
        else {
            odd+= (1/pow(i,i));
        }
       
    }
    sum= -even+odd;
    cout<<sum<<endl;
    
     return 0;
    
}