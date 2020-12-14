#include<iostream>
using namespace std;

int main() {
    int i,j,n;
    cout<<"print rows till"<<endl;
    cin>>n;
    
    for(i=1;i<=n;i++) {
        char ch='a';
        for(j=1;j<=i;j++) {
            cout<<ch;
            ch++;
        }
        cout<<endl;
    }
    return 0;
}