#include<bits/stdc++.h>
using namespace std;
int main() {
    int n1,n2;
    cout<<"enter the size of the matrix \n";
    cin>>n1>>n2;
    int m1[n1][n2],m2[n1][n2],ans[n1][n2];

    cout<<"enter the elements for m1 \n";
    for(int i=0;i<n1;i++) {
        for(int j=0;j<n2;j++) {
            cin>>m1[i][j];
        }
    }
    cout<<"enter the elements for m2 \n";
    for(int i=0;i<n1;i++) {
        for(int j=0;j<n2;j++) {
            cin>>m2[i][j];
        }
    }
    for(int i=0;i<n1;i++) {
        for(int j=0;j<n2;j++) {
           ans[i][j]=0;
        }
    }

// int i=0,j=0;
// ans[i][j]=0;      //d
    for(int i=0;i<n1;i++) {
        for(int j=0;j<n2;j++) {
            ans[i][j] = m1[i][j] + m2[i][j];
        }
    }
 cout<<"matrix after additon is \n";
    for(int i=0;i<n1;i++) {
        for(int j=0;j<n2;j++) {
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }


return 0;

}