#include<bits/stdc++.h>
using namespace std;

int main() {
    ifstream f1;
    f1.open("test.txt");
    if(!f1) {
        cout<<"error in opening file\n";
    }
    // char ch[100];
    // while(!f1.eof()) {
    //      f1.getline(ch,100);
    //      if(ch=="a" || ch=="e" || ch=="i" || ch=="o" || ch=="u") {
    //          cout<<ch<<" ";
    //      }
    // }
    char ch;
    while(f1.get(ch)) {
        if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u') {
             cout<<ch<<" ";
         }
    }

    f1.close();
}