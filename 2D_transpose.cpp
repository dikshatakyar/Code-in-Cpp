#include <bits/stdc++.h>
using namespace std;

int main() {
    // int a[3][3]=  { {1,2,3},{4,5,6},{7,8,9}};
    int n,m;
    cout<<"no of rows and col resp? \n";
    cin>>n>>m;
    int a[n][m];
    cout<<"enter the elements \n";
    for(int i=0;i<n;i++) {
        for( int j=0;j<m;j++) {
            cin>>a[i][j];
        }
    } // 1 2 3 4 5 6 7 8 9
    
    for(int i=0;i<n;i++) { //0--1--
        for(int j=i;j<m;j++) { //0-1-2--1-2
            int temp=a[i][j]; // 1 2 3--5 6
            a[i][j]=a[j][i];
            a[j][i]=temp;// 1 4 7
                         // 2 5 
                         // 3 6
            
        }
        
    }
    cout<<"transpose is \n";
    for(int i=0;i<n;i++) {
        for(int j=0;j<m;j++) {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
