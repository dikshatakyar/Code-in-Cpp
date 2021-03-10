#include<bits/stdc++.h>
using namespace std;
class box{
    public:
int l,b,h;
void getinput(int len,int br,int he) {
     l=len;
     b=br;
     h=he;
    cout<<"enter length,breadth and height resp \n";
    cin>>l>>b>>h;  
}
void area() {
    if(l==b==h) {
        double area=6*l*l;
        cout<<"area is : "<<area<<endl;
    }
   else {
   double area=2*((l*b)+(b*h)+(h*l));
   cout<<"area is : "<<area<<endl;
   }
}
void volume() {
    if(l==b==h) {
        double volume = pow(l,3);
        cout<<"volume is : "<<volume<<endl;
    }
    else {
        double volume = l*b*h;
        cout<<"volume is : "<<volume<<endl;
    }
}

box operator+(box o2) {
     box temp;
     temp.l=l+o2.l;
     temp.b=b+o2.b;
     temp.h=h+o2.h;

     return temp;
}

void display() {
    cout<<"length is : "<<l<<"\n"<<"breadth is : "<<b<<"\n"<<"height is : "<<h<<endl;
}

friend bool operator==(box &o2,box&o1);

void operator=(box o2) {
    l=o2.l;
    b=o2.b;
    h=o2.h;
}

};
bool operator==(box &o2,box &o1) {
     if(o1.l==o2.l && o1.b==o2.b && o1.h==o2.h) 
     return true;
     return false;
}

int main() {
    int len,br,he;
    box o1;
    o1.getinput(len,br,he); 
    o1.area();
    o1.volume();
    box o2;
    o2.getinput(len,br,he);
    box o3;
    o3=o1+o2;
    cout<<"addition of the measurement of boxes \n";
    o3.display();
    if(o1==o2) {
        cout<<"measurements are equal \n";
    }
    else
    {
        cout<<"unequal measurement \n";
    }
    cout<<"overload assignment operator \n";
    o1=o2;
    cout<<"first box : \n";
    o1.display();
    cout<<"second box : \n";
    o2.display();
    
    return 0;
}