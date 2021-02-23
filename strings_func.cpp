#include<bits/stdc++.h>
using namespace std;

int main() {
    // string s1,s2;
    // cout<<"enter s1 and s2 \n";
    // cin>>s1>>s2;
    // s1.append(s2);
   /*APPEND*/
    string s1="fam",s2="ily";
    s1=s1+s2;
    cout<<s1<<endl;
    cout<<s2[0]<<endl;

   // CLEAR FUNCTION
   string p="today is a good day \n";
   p.clear();
   cout<<p<<endl;
   if(p.empty()) {  
       cout<<"string is empty \n";
   }

   //COMPARE TWO STRINGS
    string str1="DU",str2="IP";
    cout<<str1.compare(str2)<<endl;


   //ERASE THE FUNCTION
   string a="kilometer";
   a.erase(0,4);
   cout<<a<<endl;

   //FIND 
   string b="encapsulation";
  cout<<b.find("cap")<<endl;

  //INSERT
  string c="polymorphism";
  c.insert(4,"jolly");
  cout<<c<<endl;

  //LENGTH / SIZE
  string d="delhi";
  cout<<d.length()<<endl<<d.size()<<endl;

  //SUBSTRING
  string e="marketing";
  cout<<e.substr(0,4)<<endl;
  

    return 0;
}