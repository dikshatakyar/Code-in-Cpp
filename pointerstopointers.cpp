#include<bits/stdc++.h>
using namespace std;
int main() {
    int a=12;
    int *p=&a;

     cout<<*p<<endl;
     int **q=&p;
     a=20;
     cout<<*q<<"        "<<**q<<endl;
     return 0;
}