#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cout<<"size of array \n";
    cin>>n;
    char a[n+1];
    cout<<"enter the elements \n";
    // cin>>a;   --only prints non spaces elements
    for(int i=0;i<n;i++) {
        cin>>a[i];    // for loop works for spaces too
    }
    cout<<a[3];

    return 0;
}