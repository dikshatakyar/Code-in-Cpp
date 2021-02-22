#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cout<<"size of array \n";
    cin>>n;
    cin.ignore();
    char a[n+1];
    cout<<"enter the sentence \n";
    cin.getline(a,n);
    cin.ignore();

    int i=0,currl=0,maxl=0;

    while(n) {
      if(a[i]== ' ' || a[i]== '\0') {
          if(currl>maxl)
          maxl=currl;
          currl=0;
      }
      else
      currl++;

      if(a[i]== '\0')
      break;

        i++;
    }
    cout<<maxl<<" ";

    return 0;

    }