#include<bits/stdc++.h>
using namespace std;
// int main() {
//     int n,k,i,j,arr[10],b[10],m,c[30];
//     cout<<"enter the no. of elements in array 1"<<endl;
//     cin>>n;
//     cout<<"enter the no. of elements in array 2"<<endl;
//     cin>>m;
//     cout<<"enter elements for array 1"<<endl;
//     for( i=0;i<n;i++) {
//         cin>>arr[i];
//         c[i]=arr[i]; //c[0] = a[0] --- c[1]=a[1].....c[4]=a[4]
//     }
//     k=i; //k=5
//     cout<<"enter elements for array 2"<<endl;
//     for(j=0;j<m;j++) {
//         cin>>b[j];
//         c[k]=b[j]; //c[5]=b[1].....
//         k++;

//     }
//     cout<<"merging the arrays"<<endl;
//     for( int x=0;x<k;x++) {
//         cout<<c[x]<<" ";
//     }
//     return 0;



int main()
{   int m,n;
    cout<<"enter number of terms in first array\n";
    cin>>m;
    cout<<"enter number of terms in second list\n";
    cin>>n;
    int a[m],b[n];
    cout<<"enter terms in the first array (in ordered manner)\n";
    for(int i=0;i<m;i++)
        cin>>a[i];
    cout<<"enter terms in the second array (in ordered manner)\n";
    for(int i=0;i<n;i++)
        cin>>b[i];
    int i=0,j=0,k=0;
    int c[m+n];
    while(i<m&&j<n) //i<5 && j<6
    {
        //a={1,3,5,7,9} b={0,4,6,8,10,12}
        if(a[i]>b[j]) // 1>0
        {
            c[k]=b[j]; // 0
            k++; //1
            j++;//1
        }
        else if(a[i]<b[j]) //1<4
        {
            c[k]=a[i]; //
            i++;
            k++;
        }
        else //equal
        {
            c[k]=a[i]; 
            i++;
            k++;
            c[k]=b[j];
            j++;
            k++;
        }
    }
 
    while(i<m)
    {
        c[k]=a[i];
        i++;
        k++;
    }
    while(j<n)
    {
        c[k]=b[j];
        j++;
        k++;
    }
    
    cout<<"ordered merged array of the given two arrays :";
    for(int i=0;i<k;i++)
    {
        cout<<c[i]<<" ";

    }
    return 0;
}

