#include<bits/stdc++.h>
using namespace std;
int main() {
    int a,b;
    cout<<"print hcf of"<<endl;
    cin>>a>>b;
int hcf=1;
  if(a>b) {
      for(int i=1;i<=b;i++) {
          if(a%i==0 && b%i==0)
          hcf=i;
        
      }
  }
  else
  {
      for(int i=1;i<=a;i++) {
          if(a%i==0 && b%i==0)
          hcf=i;
         
      }
  }
  if(hcf==1)
  cout<<"co-prime"<<endl;
  else
  {
      cout<<"non co prime"<<endl;
  }
  
  return 0;
  
}