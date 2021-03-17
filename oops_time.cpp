#include<bits/stdc++.h>
using namespace std;

class timeclass {
    int hour,minute,second;
    public: 
    timeclass() {
        hour=minute=second;
    }
    timeclass(int h,int m,int s) {
        hour=h;
        minute=m;
        second=s;
    }
    timeclass operator++() {
        timeclass o3;
        o3.hour=++hour;
        o3.minute=++minute;
        o3.second=++second;
        return o3;
    }
    timeclass operator++(int ) {
        timeclass temp;
        temp.hour=hour++;
        temp.minute=minute++;
        temp.second=second++;
        return temp;
    }
    void display() {
    cout<<"hour is : "<<hour<<endl<<"minute is : "<<minute<<endl<<"second is : "<<second<<endl;
    }
};


int main() {
    timeclass t1(3,8,12),t2(4,5,6),t3,t4;
    t1.display();
    t2.display();
    cout<<"overloading pre-increment operator\n";
    t3=++t1;
    t3.display();
    cout<<"overloading post-increment operator\n";
    t4=t2++;
    t4.display();
    cout<<"displaying the element of post increment\n";
    t2.display();

return 0;
}