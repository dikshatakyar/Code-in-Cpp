/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    int i, n,sum;
    
    cout<<"print the sum of even numbers till:"<<endl;
    
    cin>>n;
    
    
    for(i=1;i<=n;++i) {
        if((i%2)==0) {
            sum+=i;
        }
    
    }
    
    cout<<"sum of all even numbers from 1 to"<<n<<"="<<sum<<endl;
    
    

    return 0;
}
