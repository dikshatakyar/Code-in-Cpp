#include<bits/stdc++.h>
using namespace std;

class rectangle {
float length,width,area,peri;
public:
rectangle(float l,float w) {
    length=l;
    width=w;
}
 void calcarea() {
     
     area=length*width;
}
void calcperimeter() {
   
    peri=2*(length+width);
}
void display() {
    cout<<"area is : "<<area<<endl<<"perimeter is : "<<peri<<endl;
}

friend bool operator==(rectangle &r1,rectangle &r2);
};

bool operator==(rectangle &r1,rectangle &r2) {
    if(r1==r2)
    return true;
    return false;
}
int main() {
rectangle r1(2,3),r2(3,4);
cout<<"for first instance\n";
r1.calcarea();
r1.calcperimeter();
r1.display();
cout<<"for second instance\n";
r2.calcarea();
r2.calcperimeter();
r2.display();
cout<<"\noverloading assignment operator\n";

if(true){
    cout<<"the rectangles are equal\n";
}
else{
    cout<<"the rectangle are unequal\n";
}

    return 0;
}