#include<bits/stdc++.h>
using namespace std;
int main() {
    int n,sum=0;
    cout<<"print till"<<endl;
    cin>>n;
   
   for(int i=1;i<=n;i++) { 
  int ans=1;
       for(int j=1;j<=i;j++) {  //factorial
       ans*=j; 
        }
   cout<<i<<"!="<<ans<<endl;
   
        sum+=ans;
    }

   cout<<"the sum is  "<<sum<<endl;
   
    
    return 0;
    
}