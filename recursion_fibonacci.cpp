#include<bits/stdc++.h>
using namespace std;

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