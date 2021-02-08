#include<bits/stdc++.h>
using namespace std;

int bintodeci( int n) {
    int ans=0,x=1;
    while (n>0)
    {
      
     int lastdigit=n%10; //1 | 1
     ans+= x*lastdigit; //1 |(1+2*1)=3 | 3+(4*1)=7 ans
     x*=2; //x=2 | 4 | 8
     n/=10; // 11 | 1 | 0.1
    
    }
    return ans;
    
}
int main() {
    int num;
    cout<<"enter the digit in binary"<<endl;
    cin>>num; //111

    cout<<bintodeci(num)<<endl;
    return 0;
}