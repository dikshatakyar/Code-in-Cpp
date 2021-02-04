#include<bits/stdc++.h>
using namespace std;

bool evenodd(int n) {
    if(n%2==0)
    return true;
    
    return false;

}

int main() {
    cout<<"enter a number"<<endl;
    int num;
    cin>>num;

    if(evenodd(num))
    cout<<num<<" is an even number"<<endl;
    else
    {
        cout<<num<<" is an odd number"<<endl;
    }
    return 0;
}