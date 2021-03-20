#include<bits/stdc++.h>
using namespace std;

// int main() {
//     int m=1,n=2,i=1,j=5;
//     cout<<i--<<endl;
//     // cout<<i--&&(4* ++m <=n);
//     cout<<i&&(4* ++m <=n);
//     cout<<"\n \n \n";
//     int x,k=5;
//     x=(100%k?k+1:k-1);
//     cout<<" x = "<<x<<endl<<" k = "<<k<<endl;
//       cout<<"\n \n \n";
//       int list[]={2,4,-5,6,7,0,-1,6};
//       bool pos=true;
//       int y=0;
//       while(pos && list[y]!=0) {
//           pos=(list[y++]>0); 
//       }
//     cout<<"final output : "<<pos<<endl<<" y = "<<y<<endl;
      
//       int p=1,q=0,r=1;
//       p++;
//       r=p+1;
// cout<<" p = "<<p<<endl<<" r = "<<r<<endl;
    
// }
int main()
{   
    int list[]={1,2,-3,5,6,0,-1,6};
    bool pos=true;
    int y=0;
    while(pos && list[y]!=0)
    {   cout<<y<<endl;//0 1 2 
        pos=(list[y++]>0);//1 1 0
        cout<<y<<endl;//1 2 3
    }
    cout<<"pos="<<pos<<" y="<<y;
    return 0;
}