#include<bits/stdc++.h>
using namespace std;
int main() {
    int n,num,maxm;
    cout<<"enter the number of terms"<<endl;
    cin>>n;

    if(n) {
        cout<<"enter the first number"<<endl;
        cin>>num;
        maxm=num;
        for(int i=2;i<=n;i++) {
            cout<<"enter number"<<endl;
            cin>>num;
            if(num>maxm)
            maxm=num;
        }
        cout<<"greatest number of all is  "<<maxm;
    }
    else
    {
        cout<<"exit"<<endl;
    }
    return 0;
    
}