#include<bits/stdc++.h>
using namespace std;


class person{
    public:
string name;
void getinput() {
    cout<<"enter the name \n";
    cin>>name;
}
virtual void display() {
    cout<<name<<endl;
}
};

class student : public person{
string course;
int marks,year;
public:
 student(string c,int number,int yr) {
   course=c;
   marks=number;
   year=yr;
 }
 virtual void display() {
     cout<<"name is : "<<name<<endl<<"course is "<<course<<endl<<"marks are : "<<marks<<endl<<"year of admission is : "<<year<<endl;
 }

};


class employee : public person {
string department;
int salary;
public:
employee(string dept,int cash) {
department=dept;
salary=cash;
}
virtual void display() {
    cout<<"name is :"<<name<<endl<<"department is : "<<department<<endl<<"salary is : "<<salary<<endl;
}
};


int main() {
person *o1;
student o2("history",95,2020);
o1 = &o2;
o1->getinput();
o1->display();


person *o4;
employee o3("economics",500000);
o4=&o3;
o4->getinput();
o4->display();



    return 0;
}