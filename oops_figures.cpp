#include<bits/stdc++.h>
using namespace std;
/*Create a class 3D figures and derive from it class Cube and Cuboid.
 Override area() in the derived classes. 
 Overload == operator in the Cuboid class to compare two cuboids. 
 Overload – operator using a friend function two subtract one cube from another.
  This friend function should throw an exception if an attempt is made to subtract
   smaller cube from larger cube.*/


class figures3d{
    public:
     virtual void area() {
         cout<<"area of 3d figures \n";
     }
};

class cube : public figures3d {
float len,areaofcube;
public:
cube(float l) {
    len=l;
}
cube() {
    len=0;
}
void area() {
    areaofcube=6*pow(len,2);
}
void displaycube() {
    cout<<"area is : "<<areaofcube<<endl;
}

friend cube operator-(cube &c1,cube &c2);

};

class cuboid : public figures3d {
float l,b,h,areaofcuboid;
public: 
cuboid(float len,float br,float he) {
l=len;
b=br;
h=he;
}
cuboid() {
    l=b=h=0;
}

void area() {
   areaofcuboid= 2*((l*b)+(b*h)+(h*l));
}

void displaycuboid() {
 cout<<"area of cuboid is : "<<areaofcuboid<<endl;
}

bool operator==(cuboid &o2) {
    if(l==o2.l && b==o2.b && h==o2.h) 
    return true;
    return false;
}
};

cube operator-(cube&c1,cube&c2) {
   cube c3;
   c3=c2-c1;
return c3;
//   try {
//       if(c3<0) 
//       throw c3;
//       return c3;
//   }
//   catch(...) {
//       cout<<"the subtraction result is negative\n";
//   }
}


int main() {
figures3d *p1;
figures3d p;
p1=&p;
p1->area();
cube c1(2),c2(3),c3;
p1=&c1;
p1->area();
c1.displaycube();
p1=&c2;
p1->area();
c2.displaycube();
// c3=c1-c2;
// c3.displaycube();

cuboid o1(2,3,4),o2(1,2,3);
p1=&o1;
p1->area();
o1.displaycuboid();
p1=&o2;
p1->area();
o2.displaycuboid();
cout<<"to check whether the dimensions are equal\n";
if(o1==o2) {
    cout<<"the dimensions are equal\n";
}
else {
    cout<<"unequal dimension\n";
}


    return 0;
}