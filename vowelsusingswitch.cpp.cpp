//simple calculator
#include<iostream>
using namespace std;
int main() {
    char c;
    cout<<"enter an alphabet"<<endl;
    cin>>c;
    
    switch(c) {
        case 'a':
        cout<<" \n vowel"<<endl;
        break;
        
        case 'e' :
        cout<<"\n  vowel"<<endl;
        break;
        
        case 'i' :
        cout<<"\n vowel"<<endl;
        break;
        
        case 'o' :
        cout<<"\n vowel"<<endl;
        break;
        
        
        case 'u' :
        cout<<"\n vowel"<<endl;
        break;
        
        
        default :
        cout<<"\n consonant"<<endl;
        break;
        
    }
    
    cout<<endl;
    
    return 0;
    
    
}