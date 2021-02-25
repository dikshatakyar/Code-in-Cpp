#include<bits/stdc++.h>
using namespace std;

int main() {
    char s1[50];
     int a[256]={0};  
    cout<<"enter the string \n";
    cin>>s1; //hello
  
    for(int i=0;s1[i] != '\0';i++) { 
        a[s1[i]]++;  
    
    }
    int mx=0;
    for(int i=0;i<256;i++) {
        if(a[i]!= 0) {
            cout<<(char)i<<" "<<a[i]<<endl;
            mx=max(a[i],mx);
        }
    }
   cout<<"max frequency is "<<mx<<endl;
    return 0;
    
}