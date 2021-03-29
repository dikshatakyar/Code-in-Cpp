#include<bits/stdc++.h>
using namespace std;

int main() {
    ifstream f1;
    f1.open("diksha.txt");
    if(!f1) {
        cout<<"error in opening file\n";
    }
    char ch;
    while(f1.get(ch)) {
          if(ch!=' ' && ch!='\t' && ch!='\n') {
              cout<<ch;
          }
    }
    return 0;
}