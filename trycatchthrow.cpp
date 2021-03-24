#include<iostream>
using namespace std;

int main() {
    double p,q,ans;
    
    cout<<"enter the dividend (p) \n";
    cin>>p;
    cout<<"enter the divisor (q) \n";
    cin>>q;
    try
    {
        if(q==0.00)
        throw q;      
        ans=p/q;
        cout<<"quotient is "<<ans<<endl;

    }
    catch(double& error) {
        cout<<"attempt to divide by zero \n";
    }
   
   
   return 0;
}