#include<bits/stdc++.h>
using namespace std;

int factorial(int n) {
    int ans=1;
    for(int i=2;i<=n;i++) {
        ans*=i;
    }
    return ans;
}

int main() {
    int num;
    cout<<"print factorial of"<<endl;
    cin>>num;

    cout<<num<<"! = "<<factorial(num);
    return 0;
}