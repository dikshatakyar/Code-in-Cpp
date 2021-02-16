#include<bits/stdc++.h>
using namespace std;

int main()  {
    int n;
    cout<<"size of array ?"<<endl;
    cin>>n;
int arr[n];
    cout<<"enter "<<n<<" elements"<<endl;

    for(int i=0;i<n;i++) {
        cin>>arr[i];
    }
// 12 45 23 51 19 8
    for(int i=1;i<n;i++) {
    int current=arr[i]; // 45--23--51--19--8  TO STORE THE CURRENT VALUE
    int j=i-1; // 0--1--2--3--4    TO GET PREVIOUS VALUE
    while(arr[j]>current && j>=0) { //51>19   45>19  23>19 12<19 
        arr[j+1]=arr[j]; //arr[2]=45 -- arr[4]=51  arr[3]=23 arr[2]=45 ---  FORWARDING
        j--;// 1 -- 2 1 0   TO COMPARE WITH OTHER PREVIOUS VALUES ( J=0/-1 AT LAST)
    }
    
    arr[j+1]=current; //45 23 51 19  TO KEEP THE CURRENT JUST FORWARD THE MINIMUM    
    }
    cout<<"sorted array is"<<endl;
    for(int i=0;i<n;i++) {
        cout<<arr[i]<<" ";
    }

    return 0;
    }
