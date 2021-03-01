#include<bits/stdc++.h>
using namespace std;

class myclass{
    public:
    int a;
    void funcA() {
        cout<<"public modifier : func A \n";
    }
    protected:
    int b;
    void funcB(){
        cout<<"protected modifier: func B \n";
    }
    private:
    int c;
    void funcC() {
        cout<<"private modifier : func C \n";
    }
};

int main() {
    myclass x;
    x.funcA();
    x.a=2;
}