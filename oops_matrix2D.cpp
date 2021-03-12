#include<bits/stdc++.h>
using namespace std;

class matrix {
   int a[12][12];
   int row,col;
 
   public:
   matrix(int r,int c) {
       row=r;
       col=c;
   }
   matrix() {
       row=0;
       col=0;
   }

   void display() {
       cout<<"matrix is \n";
       for(int i=0;i<row;i++) {
           for(int j=0;j<col;j++) {
               cout<<a[i][j]<<" ";
           }
           cout<<endl;
       }
   }
   void getinput(int r,int c) {
       row=r;
       col=c;
          cout<<"enter the elements for matrix \n";
          for(int i=0;i<row;i++) {
              for(int j=0;j<col;j++) {
                  cin>>a[i][j];
              }
          }
   }

void add(matrix o2) {
       matrix o3;
       if(row==o2.row && col==o2.col) {
           o3.row=row;
           o3.col=col;
           for(int i=0;i<row;i++) {
               for(int j=0;j<col;j++) {
                   o3.a[i][j] =  a[i][j] + o2.a[i][j];
               }
           }
           o3.display();
        }
       else
       cout<<"matrix are not equal \n";
   

    }

    void sub(matrix o2) {
        matrix o3;
        if(row==o2.row && col==o2.col) {
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
        cout<<"matrix are not equal \n";

        
    }
    void multiply(matrix o2) {
        matrix o3;
        if(col==o2.row) {
            o3.row=row;
            o3.col=o2.col;
            for(int i=0;i<o3.row;i++) {
                for(int j=0;j<o3.col;j++) {
                    o3.a[i][j]=0;
                    for(int k=0;k<o2.row;k++) {
                       o3.a[i][j] += a[i][k]*o2.a[k][j];
                    }
                }
            }
            o3.display();
        }
        else
        cout<<"matrix dont match \n";
    }

    void transpose() {
        matrix o3;
        if(row==col) {
        o3.row=row;
        o3.col=col;
        for(int i=0;i<row;i++) {
            for(int j=0;j<col;j++) {
                o3.a[i][j]=a[j][i];
            }
        }
        o3.display();
        }
        else
        cout<<"transpose not possible \n";
    }
};


int main() {
     matrix o1,o2,o3;
int r1,r2,c1,c2;

int no;
string str;

do
{
   cout<<"0. input matrix \n";
   cout<<"1. addition \n";
   cout<<"2. subtraction \n";
   cout<<"3. multiply \n";
   cout<<"4. transpose \n";
   cout<<"5. display matrix1 and matrix2 \n";
   
   cout<<"enter the choice \n";
   cin>>no;

   switch(no) {
      case 0 : cout<<"rows and columns for matrix1 \n";
                cin>>r1>>c1;
                o1.getinput(r1,c1);
                cout<<"rows and columns for matrix2 \n";
                cin>>r2>>c2;
                o2.getinput(r2,c2);
                break;
       case 1 : o1.add(o2);
       break;
       case 2 : o1.sub(o2);
       break;
       case 3 : o1.multiply(o2);
       break;
       case 4 : o1.transpose();
       break;
       case 5 : o1.display();
                o2.display();
                break;
       default: cout<<" enter between 1-5 \n";   

   }


   cout<<"do you want to continue ? \n";
   cin>>str;
} while (str=="yes" || str=="y");


    return 0;
}