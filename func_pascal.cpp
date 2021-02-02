#include<bits/stdc++.h>
using namespace std;

int factorial(int n) {
    int ans=1;
    for(int i=2;i<=n;i++) {
        ans*=i;

    }
    return ans;
}
int main() {
    int n;
    cout<<"how many rows?"<<endl;
    cin>>n;
      for(int i=1;i<=n;i++) {
        for(int j=1;j<=i;j++) {
          int solution= factorial(i)/(factorial(i-j)*factorial(j));
          cout<<solution<<" ";
        }
        cout<<endl;
    }
    return 0;
}