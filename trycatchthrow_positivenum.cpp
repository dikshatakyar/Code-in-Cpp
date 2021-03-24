#include<bits/stdc++.h>
using namespace std;

int main() {
    int n,i;
    cout<<"total numbers you want to enter ? \n";
    cin>>n;
    int a[n];
     int sum=0;
    cout<<"enter "<<n<<" numbers \n";
     for(i=0;i<n;i++) {
         cin>>a[i];

     try {
         if(a[i]<0) {
           throw a[i];
         }
        sum+=a[i];
     }
     
     catch(int &err) {
         cout<<"negative number not accepted \n";
     }
     }

     cout<<"sum of only positive number is : "<<sum<<endl;

     return 0;
}