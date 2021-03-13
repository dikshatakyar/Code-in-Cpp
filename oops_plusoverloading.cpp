#include<iostream>
using namespace std;

class fraction{
    int n,d;
    public:
    fraction(int x,int y) {
        n=x;
        d=y;
    }
    fraction() {
        n=d=0;
    }
fraction  operator + ( fraction o2) {
     fraction o3;
     o3.n=n*o2.d +d*o2.n;
     o3.d= o2.d * d;

    return o3;
 }

 void display() {
     cout<<n<<"/"<<d<<endl;
 }
   
};

int main() {
     fraction o1(4,5), o2(6,7),o3;
     o3=o1+o2;
     o3.display();
 
}