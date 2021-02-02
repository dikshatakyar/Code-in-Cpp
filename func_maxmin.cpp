#include<bits/stdc++.h>
using namespace std;

void maxmin(int a, int b, int c) {
    if(a>b) {
        if(a>c) {
            cout<<"the greatest no. is "<<a;
        }
        else
        {
            cout<<"the greatest no. is "<<c;
        }
        
    }
    else
    {
        if(b>c) {
            cout<<"the greatest no. is "<<b;
        }
        else
        {
            cout<<"the greatest no. is "<<c;
        }
        
    }
    
return ;
}

int main() {
    int x,y,z;
    cout<<"enter three numbers"<<endl;
    cin>>x>>y>>z;

maxmin(x,y,z);
return 0;
}