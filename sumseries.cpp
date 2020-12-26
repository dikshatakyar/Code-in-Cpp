#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cout<<"print sum till"<<endl;
    cin>>n;
int sum=0;
    for(int i=2;i<=n;i++) {
    sum+=i;
    }


    cout<<sum; 
    return 0;


}