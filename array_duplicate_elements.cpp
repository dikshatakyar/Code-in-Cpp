#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cout<<"array of size ? \n";
    cin>>n;
    cout<<"enter the elements \n";
    int a[n];
    for(int i=0;i<n;i++) {
        cin>>a[i];
    }
    // 1 2 2 3 4 5 5
    int j=0;
    for(int i=0;i<n-1;i++) { // 0--1--2--3--4--5--
        if(a[i]!=a[i+1]) {  // 1!=2--2!=3--3!=4--4!=5--
            a[j]=a[i]; // 1 2 3 4
            j++; // 1 2 3 4 
         }
    }
    a[j]=a[n-1];  //5 
 int temp=j; //5

  for(int j=0;j<=temp;j++) {
        cout<<a[j]<<" "; 
    }
    return 0;
}