#include<bits/stdc++.h>
using namespace std;

void fibo(int n) {
    int t1=0,t2=1,t3;

    for(int i=1;i<=n;i++) {
        cout<<t1<<" ";
        t3=t1+t2;
        t1=t2;
        t2=t3;
        
    }
    return;
}

int main() {
    int num;
    cout<<"print fibonacci series till"<<endl;
    cin>>num;

    fibo(num);

    return 0;
}