#include<bits/stdc++.h>
#include<math.h>
using namespace std;
int main() {
    int n;
    cout<<"enter the number"<<endl;
    cin>>n;
 int sum=0;
 int original=n;

while(n>0) {
    int lastdigit=n%10;
    sum+=pow(lastdigit,3);
    n=n/10;
}
     if(sum==original) {
     cout<<"armstrong"<<endl; 
     }
     else
     {
         cout<<"not armstrong"<<endl;
     }
     
return 0;
}