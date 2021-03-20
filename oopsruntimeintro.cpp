#include<bits/stdc++.h>
using namespace std;

class base {
public:
virtual void print() {
    cout<<"base class object \n";
}
void display() {
    cout<<" non virtual base class \n";
}
};

class derived : public base{
  public:
  virtual void print() {
cout<<"derived class object \n";
  }
        void display() {
            cout<<"non virtual derived class \n";
        }
  
};

int main() {
// base* ptr=new base;
// ptr->print();
// delete ptr;

// ptr=new derived;
// ptr->print();


base *ptr;
derived o1;
ptr=&o1;
ptr->display();
o1.display();
cout<<endl;
ptr->print();

return 0;

}