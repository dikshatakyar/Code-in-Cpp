#include<bits/stdc++.h>
using namespace std;

class complexclass{
    int real,imaginary;
    public:
    complexclass() {
        real=imaginary=0;
    }
    complexclass(int i,int j) {
        real=i;
        imaginary=j;
    }
    complexclass operator+( complexclass o2) {
        complexclass o3;
        o3.real=real+o2.real;
        o3.imaginary=imaginary+o2.imaginary;
          
        return o3;
    }

    complexclass operator*(complexclass o2) {
        complexclass o3;
        o3.real=real*o2.real-imaginary*o2.imaginary;
        o3.imaginary=real*o2.imaginary+imaginary*o2.real;

        return o3;
    }
    /*logic for multiply 
    (a+ib)*(c+id)=a*(c+id) + bi(c+id)
                 =ac+a(di) + (bi)c + bd(i*i)
                 =ac + a(di) + (bi)c - bd       */

    void getinput(int x,int y) {
          cout<<"enter the real and imaginary number respectively  \n";
          cin>>real>>imaginary;
    }

   void display() {
        cout<<real<<"+i"<<imaginary<<endl;
    }
};


int main() {
    complexclass o1(4,5),o2(3,8),o3;
    o3=o1+o2;
    o3.display();
    int a,b;
    cout<<"for multiplication of complex number \n";
    cout<<"for first number \n";
    o1.getinput(a,b);
    cout<<"for second number \n";
    o2.getinput(a,b);
    o3=o1*o2;
    o3.display();
    

    return 0;
}