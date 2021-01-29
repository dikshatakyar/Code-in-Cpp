#include<bits/stdc++.h>
using namespace std;

void swap( int &a , int &b) {
       int temp;
       temp=a;
       a=b;
       b=temp;
       cout<<a<<" "<<b<<endl;
       return;
}

int main() {
    int x,y;
    cout<<"enter two numbers"<<endl;
    cin>>x>>y;

swap(x,y);
cout<<"value in main "<<x<<" "<<y;

return 0;
}