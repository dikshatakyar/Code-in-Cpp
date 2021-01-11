#include<bits/stdc++.h>
using namespace std;
int main() {
    int n,div,sum=0;
    cout<<"enter the value to be checked"<<endl;
    cin>>n;

    for(int i=1;i<n;i++) {
      div=n%i;
      if(div==0)
      sum+=i;
  }
  if(sum==n)
  cout<<"perfect number"<<endl;
  else
  {
      cout<<"not a perfect number"<<endl;
  }
  
return 0;
}