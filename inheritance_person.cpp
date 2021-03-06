#include<bits/stdc++.h>
using namespace std;

class person{
   protected:
   string name;
   public:
   person( string naam) {
       name=naam;
   }
   person () {
      
   }

   void display() {
       cout<<"name is "<<name<<endl;
   }
};

class student : public person {
    protected:
    string course;
    int marks,year;
    public:
    student(string dept,int number,int yr) {
        course=dept;
        marks=number;
        year=yr;
    }
    void display() {
        cout<<"course is "<<course<<endl<<"marks are "<<marks<<endl<<"year is "<<year<<endl;
    }


};

class employee :  public person {
     protected:
     string department;
     int salary;
     public:
     employee(string dept,int cash) {
         department=dept;
         salary=cash;
     }
     void display() {
         cout<<"department is "<<department<<endl<<"salary is "<<salary<<endl;
     }
};


int main() {
     person o1("Rahul");
     o1.display();
     student o2("computerscience",100,2020);
     o1.display();
     o2.display();
     employee o3("economics",200000);
     o1.display();
     o2.display();
     o3.display();


    return 0;
}