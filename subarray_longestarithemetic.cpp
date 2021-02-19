#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cout<<"size of array ?"<<endl;
    cin>>n;
    int arr[n];

    cout<<"enter the elements"<<endl;
    for(int i=0;i<n;i++) {
        cin>>arr[i];
    }
// 9 7 5 3 0
// 10 9 6 4 2
    int ans=2,curr=2;
    int pcd= arr[1]-arr[0]; //7-9 =-2 | 9-10 =-1
    int i=2;
    while(i<n) {  //2<5  3<5 4<5 | 1<5 2<5 3<5 4<5
        if(pcd== arr[i]-arr[i-1]) { //   5-7=-2 ==pcd  3-5=-2 == pcd  0-3!=pcd | 6-9=-3!=pcd  4-6=-2!=pcd 2-4=-2==pcd
            curr++; // 3 4 | 3
        // 
        }
        else
        {
            pcd=arr[i]-arr[i-1]; // -3 -2 
             curr=2;     
        }
        ans=max(ans,curr); // 3 4 | 2 2 3
        i++; //3 4 |3 4

        
    }
// 10 9 8 7 5 0 13 15 17
    cout<<"length of array is "<<ans<<endl;
return 0;
}