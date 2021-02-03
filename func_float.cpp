#include<bits/stdc++.h>
using namespace std;

float divison(float dividend,float divisor) {
    float ans=dividend/divisor;
    return ans;
}

int main() {
    float dividend,divisor;
    cout<<"enter the value of dividend and divisor respectively"<<endl;
    cin>>dividend>>divisor;
    cout<<dividend<<"/"<<divisor<<":"<<divison(dividend,divisor)<<endl;
    return 0;
}