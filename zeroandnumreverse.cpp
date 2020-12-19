#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cout<<"print till"<<endl;
    cin>>n;

    for(int i=1;i<=n;i++) {
        for (int j=1;j<=n;j++) {
            if(j<=n-i)
            cout<<" ";
            else
            {
                cout<<(j%10) ;
            }
            
        }
        
    
  
        for (int j = 1; j<i; j++)
        {
          cout<<n-j;
        }
        cout<<endl;
    }
    
    return 0;
}
//code mostly used for n=10