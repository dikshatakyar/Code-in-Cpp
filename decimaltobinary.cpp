#include<bits/stdc++.h>
using namespace std;

int decitobin(int n) {
    int x=1,ans=0;
    while(x<=n) {
        x*=2;
    }
    x/=2;
    while(x>0) {
        int lastdigit=n/x;
        n-= lastdigit*x;
        x/=2;
        ans= ans*10 + lastdigit;
    }
    return ans;

}
int main() {
    int num;
    cout<<"enter a number"<<endl;
    cin>>num;

    cout<<"binary representation of "<<num<<" is "<<decitobin(num);
return 0;
}
