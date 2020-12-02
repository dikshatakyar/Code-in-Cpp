//prime or not
#include <iostream>
using namespace std;

int main() 
{
    int i,n;
    cout<<"enter a number"<<endl;
    cin>>n;
    
    for( i=2;i<n;++i) {
        if(n%i==0) {
            
        
       cout<<"the number is non prime"<<endl;
        break;
    }
    }
    
    if(i==n) {
        cout<<"the number is prime"<<endl;
    }
    if(n==1||n==0) {
        cout<<"the number is non prime"<<endl;
    }
     
     return 0;
}