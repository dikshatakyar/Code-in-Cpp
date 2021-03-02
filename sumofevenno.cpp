//sum of even no from 1 to 100
#include <iostream>
using namespace std;

int main() 
{
    int n,sum=0;
    cout<<"enter the no till where you have to find the sum"<<endl;
    cin>>n;
    
    for(int i=1;i<=n;i++) {
        if((i%2)==0) {
            sum+=i;
          
           
        }
        
    }
     cout<<sum<<endl;
  
     return 0;
}