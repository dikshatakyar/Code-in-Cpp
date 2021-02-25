#include<bits/stdc++.h>
using namespace std;

int main() {
    string s1;
    cout<<"enter string value \n";
    cin>>s1;
int n,i;
   for( i=0;s1[i] != '\0';i++);  
         n=i;
   
   for(int i=n;i>=0;i--) {
       cout<<s1[i];
   }   
    return 0;
}