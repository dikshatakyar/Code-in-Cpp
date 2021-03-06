#include<bits/stdc++.h>
using namespace std;

class polygon{
    protected:
    double area,peri;
    public:
    void areais() {
        cout<<"area is "<<area<<endl;

    }
    void perimeteris() {
        cout<<"perimeter is "<<peri<<endl;
    }
};

class triangle: public polygon{
    int s1,s2,s3;
    void computeperi(){
        peri=s1+s2+s3;
    }
    void computearea() {
        area=s1*s2*s3;
    }
    public:
     triangle (int i,int j,int k) {
          s1=i;
          s2=j;
          s3=k;
          computearea();
          computeperi();
    }

};


int main() {
 triangle o1(2,3,4);
 o1.areais();
 cout<<endl;
    o1.perimeteris();
}