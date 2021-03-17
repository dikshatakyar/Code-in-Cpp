#include<bits/stdc++.h>
using namespace std;

class student{
    public:
string name;
int rollno,grade,year,marks;

void getinput() {
    cout<<"enter the name \n";
    cin>>name;
    cout<<"enter the roll number \n";
    cin>>rollno;
    cout<<"enter the grade(class) \n";
    cin>>grade;
    cout<<"enter the year \n";
    cin>>year;
    cout<<"enter the marks \n";
    cin>>marks;
}

};


int main() {
    student o1,o2,o3;
    cout<<"student 1 \n";
    o1.getinput();
    cout<<"student 2 \n";
    o2.getinput();
    cout<<"student 3 \n";
    o3.getinput();

    ofstream f1;
    f1.open("student.txt");
    if(!f1) {
        cout<<"error in opening file \n";
        exit;
    }
    f1<<o1.name;
    f1.width(10);
    f1<<o1.rollno;
     f1.width(10);
    f1<<o1.grade;
     f1.width(10);
    f1<<o1.year;
     f1.width(10);
    f1<<o1.marks;
    cout<<endl;


    f1<<o2.name;
    f1.width(10);
    f1<<o2.rollno;
     f1.width(10);
    f1<<o2.grade;
     f1.width(10);
    f1<<o2.year;
     f1.width(10);
    f1<<o2.marks;
   
cout<<"\n";

     f1<<o3.name;
    f1.width(10);
    f1<<o3.rollno;
     f1.width(10);
    f1<<o3.grade;
     f1.width(10);
    f1<<o3.year;
     f1.width(10);
    f1<<o3.marks;
     cout<<"\n";


    f1.close();


    return 0;
}