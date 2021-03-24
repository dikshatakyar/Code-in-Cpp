#include<bits/stdc++.h>
using namespace std;
int gcd(int a,int b) {
    if(a%b==0) {
        return b;
    }   
    return gcd(b,a%b);
}

int main(int argc, char *argv[]) {
int n1,n2;
// cout<<"enter 2 numbers \n";
// cin>>n1>>n2;
cout<<"argc = "<<argc<<endl;
for(int i=0;i<argc;++i) {
    cout<<"argv = "<<argv[i]<<endl;
}
n1=atoi(argv[1]);
n2=atoi(argv[2]);
cout<<"gcd is : "<<gcd(n1,n2);

return 0;
}