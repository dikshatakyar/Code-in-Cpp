#include<bits/stdc++.h>
using namespace std;
//this codes find a single number when user gives its position
int fib(int n) {
    if(n==0 || n==1 ) {
        return n;
    }
    return fib(n-1)+fib(n-2);
}

int main() {
   int x;
   cout<<"enter position of the fibonacci number \n";
   cin>>x;

   cout<<"at position "<<x<<" fibonacci number is : "<<fib(x);

   return 0;
}


//this codes prints the fibonacci series:
#include <iostream>

using namespace std;

int fib(int n){
    if(n==0 || n==1)
    return n;
    else
    return fib(n-1)+fib(n-2);//fib(1)+fib(0)=1--fib(2)+fib(1)=1+1=2--fib(3)+fib(2)=2+1=3
}

int main(){
    int n;//5
    cout<<"print till\n";
    cin>>n;
    for(int i=0;i<n;++i){//0 1 2 3 4
        cout<<fib(i)<<" ";//0 1 1 2 3
        }
}
