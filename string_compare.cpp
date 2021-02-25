#include<bits/stdc++.h>
using namespace std;

int main() {
    string str1,str2;
    cout<<"enter string 1 and string 2 resp \n";
    cin>>str1>>str2;
bool flag=1;
    for(int i=0,j=0;str1[i] != '\0';i++,j++) {
        // for(int j=0;str2[j]!='\0';j++) {
        if(str1[i]!=str2[j])  {
             flag=0;
             break;
        }
    }

    if(flag==1)
    cout<<"strings are equal";
    else
    cout<<"strings are unequal";
    return 0;
}