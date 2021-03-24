#include<bits/stdc++.h>
using namespace std;


int sum(int n) {
     if(n==0) {
         return 0;
     }
    int prevsum = sum(n-1);
    return n+prevsum;
}
int main() {
  
  int n;
  cout<<"sum till? \n";
  cin>>n;

  cout<<"the sum is : "<<sum(n)<<endl;

    return 0;
}