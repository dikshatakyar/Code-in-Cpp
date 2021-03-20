#include<bits/stdc++.h>
using namespace std;

class fraction{
    int n,d;
    public:
    fraction(int a,int b) {
        n=a;
        d=b;
    }
    fraction() {
        n=d=0;
    }
    fraction operator++() {
        n=n+d;
        return *this; 
    }
    fraction operator++(int) {
        fraction temp(n,d);
        n+=d;
        return temp;

    }
  void display() {
        cout<<n<<"/"<<d<<endl;
    }

};

int main() {
    fraction o1(6,7),o2;
    // o1=++o1;
    //   o1.display();
      o2=o1++;
      o2.display();
      o1.display();

}