#include<bits/stdc++.h>
using namespace std;

void vowel(char a[]) {
for(int i=0;a[i]!='\0';++i) {
if(a[i]=='a' || a[i]=='e' || a[i]=='i' || a[i]=='o' || a[i]=='u') {
    cout<<"*";
}
else {
    cout<<a[i];
}
}
}

int main() {
    char a[100];
    cout<<"enter a word\n";
    cin>>a;
    vowel(a);

    return 0;
}