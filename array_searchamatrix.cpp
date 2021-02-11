#include<bits/stdc++.h>
using namespace std;

int main() {
    int a,b;
    cout<<"enter the rows and columns respectively"<<endl;
    cin>>a>>b;

    int arr[a][b];
    cout<<"enter the elements"<<endl;
    for(int i=0;i<a;i++) {
        for(int j=0;j<b;j++) {
            cin>>arr[i][j];
        }
    }
    cout<<"the matrix is"<<endl;
    for(int i=0;i<a;i++) {
        for(int j=0;j<b;j++) {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

   bool flag=false;
    int key;
    cout<<"enter key"<<endl;
    cin>>key;
    for(int i=0;i<a;i++) {
        for(int j=0;j<b;j++) {
            
    if(key==arr[i][j]) {
        cout<<i<<" "<<j<<endl;
        flag=true;
        
    }
  
    }
    if(flag=true)
    cout<<"element found at position stated above";
    else
    {
        cout<<"element not found  ! "<<endl;
    }
    
    return 0;
    }
}
   

