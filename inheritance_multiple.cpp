#include<bits/stdc++.h>
using namespace std;

class A {
    public:
    void funcA() {
        cout<<" this is class A \n";
    }
};

class B {
    public:
    void funcB() {
        cout<<"this is class B \n";
    }
};

class C : public A, public B {
        public:
        void funcC() {
            cout<<"this is class B \n";
        }
        ~C() {
            cout<<"destructor called \n";
        }
};


int main() {
    C z;
    z.funcA();
    z.funcB();
    z.funcC();
}