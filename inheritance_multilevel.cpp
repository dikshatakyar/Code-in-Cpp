#include<bits/stdc++.h>
using namespace std;
//*
class a{
    public:
    int x=5;
    void funca() {
        cout<<x<<endl;;
    }
};
class b: public a{
    public:
  int y=10;
  void funcb() {
       cout<<y<<endl;
  }
};
class c: public b{
    public:
    int z=15;
    void funcc() {
        cout<<z<<endl;
    }


};

int main() {
    c h;
    h.funca();
    h.funcb();
    h.funcc();
    cout<<endl;
    b i;
    i.funca();
 

    return 0;
}