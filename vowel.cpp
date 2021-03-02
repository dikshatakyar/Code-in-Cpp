
#include <iostream>

using namespace std;

int main()
{
    char x;
    int lowercasevowel ,uppercasevowel;
    
    cout<<"enter an alphabet"<<endl;
    cin>>x;
    
    lowercasevowel=(x=='a'||x=='e'||x=='i'||x=='o'||x=='u');
    uppercasevowel=(x=='A'||x=='E'||x=='I'||x=='O'||x=='U');
    
    if(lowercasevowel||uppercasevowel) {
        cout<<"vowel="<<x<<endl;
    }
    
    else {
    cout<<"consonant="<<x<<endl;
    }
    return 0;
}
