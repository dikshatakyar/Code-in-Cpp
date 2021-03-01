#include<bits/stdc++.h>
using namespace std;
//single inheritance
class A {
    public:
    void func() {
        cout<<"inherited \n";
    }

};

class B : public A {
    public:
    void funcB() {
     cout<<"this is a child class \n";
    }
 ~B() {
    cout<<"destructor called \n";
}
};


int main() {
    B x;
    x.func();
    x.funcB();
}