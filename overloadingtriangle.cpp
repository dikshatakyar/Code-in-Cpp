#include<bits/stdc++.h>
using namespace std;


class triangle {
    double area;
    public:
    triangle() {
        area=0;
    }
  
    void display() {
        cout<<"area is "<<area<<endl;
    }
    void computearea(int a,int b,int c) {
        double s;
        s=(a+b+c)/2;
        area=sqrt(s*(s-a)*(s-b)*(s-c));

        display();
    }
    void computearea (int a,int b) {
         area=(a*b)/2;

         display();
    }

    void computearea(int a) {
        area=sqrt(3)*(a*a)/4;
        display();
    }

    void operator=(triangle o2) {
        area=o2.area;
    }

    bool operator==(triangle o2) {
        if(area==o2.area) {
            return true;
        }
        return false;
    }
};


int main() {
    triangle o1,o2,o3;
     o1.computearea(3,4,5);
     o2.computearea(4,5);
     o3.computearea(4);
    cout<<"operator overloading \n";
    o1=o2;
    o1.display();
    cout<<endl;
    o2.display();
    cout<<endl;
    cout<<"for equality operator overload \n";
    if(o1==o2) {
        cout<<"area is equal \n";
    }
    else{
        cout<<"area is unequal \n";
    }
    cout<<"if o2==o3"<<endl;
    if(o2==o3) {
        cout<<"area is equal";
    }
    else
    cout<<"area is unequal";

    return 0;
}