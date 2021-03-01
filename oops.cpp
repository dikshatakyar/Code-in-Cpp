#include<bits/stdc++.h>
using namespace std;


    class student {
        string name;
        public :
        int age;
        bool gender;
    
    void setname( string s) {
        name=s;
    }

void getname() {
    cout<<name;
}
    student() {
        cout<<"default constructor"<<endl;
        cout<<"name : asmi \n age: 19 \n gender : 1 \n";
    }

    student (string s,int a,bool g) {
        name=s;
        age=a;
        gender=g;
    }//parameterised constructor


    student ( student &a) {
        cout<<" \n copy constructor \n";
        name=a.name;
        age=a.age;
        gender=a.gender;
        cout<<"name : "<<name<<"\n"<<"age :"<<age<<"\n"<<"gender :"<<gender<<endl;
    }
    void print() {
        cout<<endl;
         cout<<"name : ";
           cout<<name<<endl;
           cout<<"age : ";
           cout<<age<<endl;
           cout<<"gender : ";
           cout<<gender<<endl;
    }

~student() {
    cout<<"destructor called \n";
}

bool operator == (student &c) {
    if( name ==c.name && age==c.age && gender==c.gender)
    return true;
    return false;
}

    };

    int main() {
    //    student arr[3];
    //    for(int i=0;i<3;i++) {
    //        cout<<"name : ";
    //        string s;
    //        cin>>s;
    //        arr[i].setname(s);
    //     //    cin>>arr[i].name;
    //        cout<<"age : ";
    //        cin>>arr[i].age;
    //        cout<<"gender : ";
    //        cin>>arr[i].gender;
    //    }

    //   for(int i=0;i<3;i++) {
    //        arr[i].print();
    //   }
       


         student a("diksha",18,1);
        //  a.print();
        student b("vandana",19,1);
        student c=a;


        if(b==a) {
            cout<<"same \n";
        }
        else
        cout<<"different \n";
     

       return 0;
    }

    
