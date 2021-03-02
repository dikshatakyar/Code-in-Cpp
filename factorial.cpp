//factorial
#include <iostream>
using namespace std;

int main() 
{ int n,i;
  cout<<"enter the number for factorial"<<endl;
  cin>>n;
  int ans=1;
  for(i=1;i<=n;++i) {
      ans*=i;
      
  }
  cout<<n<<"!="<<ans<<endl;

    
     return 0;
}