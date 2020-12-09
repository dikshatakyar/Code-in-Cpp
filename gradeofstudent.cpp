#include<iostream>
using namespace std;
int main() {
    float a,b,c,d,avg;
    cout<<"enter marks"<<endl;
    cin>>a>>b>>c>>d;
    
    avg=(a+b+c+d)/4;
    if(avg>=90) 
    cout<<"excellent"<<endl;
    else if(avg>=80 && avg<90)
    cout<<"very good"<<endl;
    else if(avg>=70 && avg<80)
    cout<<"good"<<endl;
    else if(avg>=60 && avg<70) 
    cout<<"can do better"<<endl;
    else
    cout<<"work hard"<<endl;
    
    return 0;
}