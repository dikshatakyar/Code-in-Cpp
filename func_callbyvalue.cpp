#include<bits/stdc++.h>
using namespace std;

void squares(int num) {
    num*=num;
    cout<<"value in function "<<num<<endl;
    return ;
}
int main() {
    int n;
    cout<<"enter any integer"<<endl;
    cin>>n;

    squares(n);
    cout<<"value in main "<<n;

    return 0;
}