#include<iostream>
using namespace std;

int main() {
    int a,b;
    cout<<"enter two numbers\n";
    cin>>a>>b;
    
    for(int n=a;n<=b;n++) {
        int i;
        for(i=2;i<n;i++){
            if(n%i==0) {
                break;
            }
        }
        if(n==i){
            cout<<n<<endl;
        }
    }
    return 0;
}