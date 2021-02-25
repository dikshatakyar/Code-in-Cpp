#include<bits/stdc++.h>
using namespace std;

int main() {
    string s="53214";

    sort(s.begin(),s.end(),greater<char>());
    cout<<s;
    return 0;
}