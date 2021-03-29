#include<bits/stdc++.h>
using namespace std;
//Copy the contents of one text file to another file, after removing all whitespaces.


int main() {
    ifstream f1;
    f1.open("diksha.txt");
    if(!f1) {
        cout<<"error in opening file \n";
        exit;
    }
    char ch;
    cout<<"showing the output \n";
    while(f1.get(ch)) {
        cout<<ch;
    }
    ifstream f2;
    f2.open("diksha.txt");
    ofstream f3;
    f3.open("dikshacopy.txt");
    while(f2.get(ch)) {
        if(ch!=' ' && ch!='\n' && ch!= '\t') {
            f3.put(ch);
        }
    }
    f2.close();
    f3.close();

    return 0;
}