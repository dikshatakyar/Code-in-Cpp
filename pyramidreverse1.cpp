#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,i;
    cout<<"print till"<<endl;
    cin>>n;
    for(i=0;i<n;i++) {
        int k;
       for(k=0;k<2*i;k++)
       cout<<" ";
        
        for(int j=i;j<n;j++) {
        cout<<"*";
        }
    
        cout<<endl;
    }
    return 0;
}