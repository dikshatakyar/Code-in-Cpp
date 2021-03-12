#include<bits/stdc++.h>
using namespace std;

class fraction{
    int n,d;

    public:
    fraction() {
        n=0;
        d=0;
    }

    fraction (int x,int y) {
        n=x;
        d=y;
    }//constructor
    void getinput(int x,int y) {
        n=x;
        d=y;
    }
    void display() {
        cout<<n<<"/"<<d<<endl;
    }

};

int main(){
    int a,b;
    fraction o1(100,90),o2(40,56),o3;
    o1.display();
    o2.display();
    o3.display();
    // o1.getinput(3,6);
    // o1.display();
    // cout<<"enter the values of n and d \n";
    // cin>>a>>b;
    // o1.getinput(a,b);
    // cout<<endl;
    // o1.display();

    //refer cpp for more
    
}