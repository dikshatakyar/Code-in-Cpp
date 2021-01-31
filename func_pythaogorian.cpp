//doubt
#include<bits/stdc++.h>
using namespace std;
bool check(int a,int b,int c) {
    int hypo = max(a,max(b,c));  
    // int sum = a*a + b*b + c*c -ans*ans; 
    // if(sum==ans) {
    //     return true;
    // }
   
    // return false;
     int s1,s2;
    if (hypo == a) 
 {
    s1=b;
    s2=c;
 
 }
 else if(hypo == b) {
     s1=a;
     s2=c;
 }
 else
 {
     s1=a;
     s2=b;
 }
 
 if (hypo*hypo == s1*s1 + s2*s2)
 return true;

 return false;
 }

int main() {
    int x,y,z;
    cout<<"enter three integers"<<endl;
    cin>>x>>y>>z;

    if(check(x,y,z))
    cout<<"pythagorean triplet"<<endl;
    else
    {
        cout<<"not a pythagorean triplet"<<endl;

    }

    return 0;
    
}