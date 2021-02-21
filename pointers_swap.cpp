#include<bits/stdc++.h>
using namespace std;

void swap(int *a,int *b) {
      int temp=*a;
      *a=*b;
      *b=temp;
}
int main() {
    int a=5,b=10;

    swap(&a,&b);

    // int *aptr=&a,*bptr=&b;
    // swap(aptr,bptr);
    cout<<a<<" "<<b<<endl;
}