#include<bits/stdc++.h>
using namespace std;

class automobile{
    protected:
   string companyname;
   int chassisno;
   public:

   void getdisplay() {
       cout<<"company name :"<<companyname<<endl<<" chassis no : "<<chassisno<<endl;
   }
//    void getinput() {
//        cout<<"company name \n";
//        cin>>companyname;
//        cout<<"chassis number \n";
//        cin>>chassisno;
//    }//to take input from user

int getinput(string company,int chassisnum) {
    companyname=company;
    chassisno=chassisnum;
    return 0;  
      
}
    
virtual void display()=0;


};

class twowheeler : public automobile{
   int modelno,yrofpurchase;
   public:
   twowheeler(int modelnum,int yearofpurchase) {
       modelno=modelnum;
       yrofpurchase=yearofpurchase;
    }
    
 virtual void display() {
        cout<<"model number = "<<modelno<<endl;
        cout<<"year of purchase = "<<yrofpurchase<<endl;
    }
};

class fourwheeler : public automobile{
  string type;
  int purchasevalue;
  public:
  fourwheeler(string vehicle,int money) {
      type=vehicle;
       purchasevalue=money;
    }

 virtual void display() {
     cout<<"type of vehicle = "<<type<<endl;
     cout<<"purchase value of vehicle = "<<purchasevalue<<endl;
 }

};


int main() {
        automobile *o1;
        twowheeler o2(1234,2020);
        o1=&o2;
        string s="honda";
        int num=99120;
        o1->getinput(s,num);
        o1->getdisplay();
        o1->display();
  
        fourwheeler o3("car",100000);
        o1=&o3;
        o1->display();
      



    return 0;
}