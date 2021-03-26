#include<bits/stdc++.h>
using namespace std;

class matrix {
int a[20][20],row,col;
public:
matrix(int r,int c) {
    row=r;
    col=c;
}
matrix() {
    row=col=0;
}

void getinput(int r,int c) {
      row=r;
    col=c;
    cout<<"enter the elements \n";
    for(int i=0;i<row;i++) {
        for(int j=0;j<col;j++) {
            cin>>a[i][j];
        }
    }
}

void display() {
    for(int i=0;i<row;i++) {
        for(int j=0;j<col;j++) {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
}

void add( matrix o2) {
    matrix o3;
    if(o2.row==row && o2.col==col) {
        o3.row=row;
        o3.col=col;
        for(int i=0;i<row;i++) {
            for(int j=0;j<col;j++) {
              o3.a[i][j] = a[i][j] + o2.a[i][j];
            }
        }
        o3.display();
    }
    else 
    throw "matrix are unequal \n";
}

void sub(matrix o2) {
    matrix o3;
    if(o2.row==row && o2.col==col) {
        o3.row=row;
        o3.col=col;
        for(int i=0;i<row;i++) {
            for(int j=0;j<col;j++) {
                o3.a[i][j] = a[i][j] - o2.a[i][j];
            }
        }
        o3.display();
    }
        else
        throw "matrix are unequal \n";
    
}
void multiply(matrix o2) {
    matrix o3;
    if(col==o2.row) {
        o3.row=row;
        o3.col=o2.col;
        for(int i=0;i<o3.row;i++) {
            for(int j=0;j<o3.col;j++) {
                o3.a[i][j]=0;
                for(int k=0;k<o2.col;k++) {
                    o3.a[i][j] += a[i][k] * a[k][j];
                }
            }
        }
        o3.display();
    }
    else
    throw "matrix cant be multiplied \n";
}

void transpose() {
    matrix o3;
    if(row==col) {
        o3.row=row;
        o3.col=col;
        for(int i=0;i<row;i++) {
            for(int j=0;j<col;j++) {
                o3.a[i][j] = a[j][i];
            }
        }
    o3.display();
    }
    else
    throw "transpose not possible \n";
}

};


int main() {

    matrix o1,o2,o3;
    int no,r1,c1,r2,c2;
    string str;

    do{
        cout<<"0. enter input \n 1.addition \n 2. multiplication \n 3. transpose \n 4.subtraction \n 5. display matrix 1 and matrix 2 \n";

     cout<<"enter the choice \n";
     cin>>no;

     switch(no) {
         case 0 : 
         cout<<"rows and cols ? \n";
         cout<<"for matrix 1 \n";
         cin>>r1>>c1;
         o1.getinput(r1,c1);
         cout<<"rows and cols ? \n";
         cout<<"for matrix 2 \n";
         cin>>r2>>c2;
         o2.getinput(r2,c2);
         break;
         case 1 : try{
             o1.add(o2);
         }
         catch(const char *p) {
             cout<<p<<endl;
         }
         break;
         case 2 : try{
        o1.multiply(o2);
         }
        catch(const char *p) {
            cout<<p<<endl;
        }
         break;
         case 3 : try{
         o1.transpose();
         }
         catch(const char *p) {
             cout<<p<<endl;
         }
         break;
         case 4 : try {
             o1.sub(o2);
         }
         catch(char *p) {
             cout<<p<<endl;
         }
         break;
         case 5 : cout<<"displaying matrix 1 \n";
         o1.display();
         cout<<"displaying matrix 2 \n";
         o2.display();
}
cout<<"do you want to continue ? \n";
cin>>str;
     
    }while(str=="yes" || str=="y");

    return 0;
}