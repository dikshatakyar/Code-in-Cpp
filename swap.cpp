#include<iostream>
using namespace std;

int main() {
    int a,b,temp;
    cout<<"enter the number before swapping"<<endl;
    cin>>a>>b;
    cout<<"a="<<a<<"\n b="<<b<<endl;
    temp=a;
    a=b;
    b=temp;
    cout<<"after swapping"<<endl;
    cout<<"a="<<a<<"\n b="<<b<<endl;

    return 0;

}
