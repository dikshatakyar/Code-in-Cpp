#include<iostream>
using namespace std;

int main() {
    int arr[]= {10,20,30};
    cout<<*arr<<endl;
    int *ptr=arr;
    for(int i=0;i<3;i++) {
        // cout<<*ptr<<endl;
        // ptr++;
        cout<<*(arr+i)<<endl; //array is a constant pointer. it cant be modified like arr++;
    } //array is indexing pointer

    return 0;
}