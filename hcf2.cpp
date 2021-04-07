//hcf
#include<iostream>
using namespace std;

int main() {
    int n1,n2 ,hcf;
    cout<<"enter two numbers"<<endl;
    
    cin>>n1>>n2;
    
    
    if(n2>n1) {
    for( int i=2;i<=n1;++i) {
        if(n1%i==0 && n2%i==0) {
            hcf=i; }
        }
    }
    else {
        for( int i=2;i<=n2;++i) {
        if(n1%i==0 && n2%i==0) {
            hcf=i; }
    }
}
cout<<hcf<<endl;

return 0;

}
