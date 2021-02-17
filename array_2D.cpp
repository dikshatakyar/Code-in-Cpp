#include<bits/stdc++.h>
using namespace std;

int main() {
    int n,m;
    cout<<"no of rows and coloumns ? \n";
    cin>>n>>m;
    int a[n][m];
cout<<"enter the elements \n";
   for(int i=0;i<n;i++) {
       for(int j=0;j<m;j++) {
           cin>>a[i][j];
       }
    }
   for(int i=0;i<n;i++) {
       for(int j=0;j<m;j++) {
           cout<<a[i][j]<<" ";
       }
       cout<<endl;
   }

   int k;
   cout<<"enter key \n";
   cin>>k;
   bool flag=0;


   for(int i=0;i<n;i++) {
       for(int j=0;j<m;j++) {
           if(a[i][j]==k) {
               cout<<i<<" "<<j<<endl;
               flag=1;
           }
       }
   }
   if(flag)
   cout<<"element is found \n";
   else
   cout<<"element not found \n";

   return 0;

}
