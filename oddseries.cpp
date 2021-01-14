#include<bits/stdc++.h>
using namespace std;
int main() {
    int n,m,sum=0;
    cout<<"print odd numbers between"<<endl;
    cin>>n>>m;
     for(int i=n+1;i<=m;i++) {
         if(i%2==0)
         continue;
         else
         {
             cout<<i<<" "<<endl;
             sum+=i;
         }
         
     }
     cout<<"the sum is  "<<sum;
     return 0;

}