#include<bits/stdc++.h>
using namespace std;
int main() {
    int n,j;
    cout<<"enter the number of rows"<<endl;
  cin>>n;
    for(int i=1;i<=n;i++) {
        for( j=1;j<=n-i;j++)
        cout<<" ";
        for(int k=1;k<=i;k++) {
        if(k==1 || k== i || i==n)
        cout<<"*";
        else
        {
            cout<<" ";
        }
        }
        cout<<endl; 
    }
    return 0;
}