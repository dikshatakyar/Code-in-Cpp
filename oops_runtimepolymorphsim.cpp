#include<iostream>
using namespace std;
//rectangle--area,perimeter
class polygon{
    protected:
    double area,perimeter;
    public:
    void areadisplay() {
        cout<<area<<endl;
    }
    void peridisplay() {
        cout<<perimeter<<endl;
    }

    virtual void calcarea() =0;
    virtual void calcperi() =0;
};

class rectangle:public polygon{
      double l,b;
      public:
      rectangle() {
          l=b=0;
      }
      rectangle(double i,double j) {
             l=i;
             b=j;
      }
      virtual void calcarea() {
          area=l*b;
              }
      virtual void calcperi() {
          perimeter= 2*(l+b);
        
      }
};

int main() {

polygon* o1;

rectangle o2(4,5);
o1=&o2;
o1->calcarea();
o1->calcperi();
o1->areadisplay();
o1->peridisplay();


    return 0;
}