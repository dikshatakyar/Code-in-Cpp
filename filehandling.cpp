#include<iostream>
#include<fstream>
using namespace std;

int main( ) {
    ifstream f1;
    string name;
    int rollno;
    f1.open("diksha.txt");
    if(!f1) {
        cout<<"error in opening file \n";
        return 0;
    }
    f1>>name>>rollno;  //to read the contents of the file
    cout<<name<<rollno;  //output display
    f1.close();
    if(f1.fail()) {
        cout<<"file is not closed \n";
    }
    ofstream f2;
    f2.open("hello.txt"); //no need to make a file earlier for ofstream.file is automatically made. if existing file is given,its content gets erased.
    cout<<endl;
    cout<<"enter the name and rollno \n";
    cin>>name>>rollno;
    f2<<name<<rollno; 
    return 0;
}