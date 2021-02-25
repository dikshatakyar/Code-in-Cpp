#include<bits/stdc++.h>
using namespace std;

int main() {
    string str="ifbhvliefvqeb";
     for(int i=0;str[i]!='\0 ';i++) {
         if(str[i]>='a' && str[i]<='z')
         str[i]-=32;
     }
     cout<<str<<endl;
  
  //UPPER TO LOWER CASE

    //  string a;

    //  cout<<"enter the name of string \n";
    //  cin>>a;

    //  for(int i=0;i<a.size();i++) {
    //      if(a[i]>='A' && a[i]<='Z') 
    //      a[i] += 32;
    //  }
    //  cout<<a<<endl;

     //INBUILT FUNC TO CONVERT

    //  string b="polymorphism";

    //  transform(b.begin(),b.end(),b.begin(), ::toupper);
    //  cout<<b<<endl;
    //  transform(b.begin(),b.end(),b.begin(), ::tolower);
    //  cout<<b;                                                                      

     return 0;
}