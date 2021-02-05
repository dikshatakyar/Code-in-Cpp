#include<bits/stdc++.h>
using namespace std;

bool alpha( char ch) {
    for(int i='a';i<='z';i++) {
        if(ch==i) {
            return true;
        }
    }
    return false;
}
int main() {
char y;
cout<<"enter anything"<<endl;
cin>>y;
if(alpha(y))
cout<<"it is an alphabet"<<endl;
else
{
    cout<<"not an alphabet"<<endl;
}
return 0;
}