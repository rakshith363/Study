#include<iostream>
#include<bits/stdc++.h>
using namespace std;


void duplicate(){
    int n;
    cout<<"Enter number of elements in array"<<endl;
    cin>>n;
    int i,j,array[n];
    cout<<"Enter array elements"<<endl;
    for ( i = 0; i < n; i++)
    {
        cin>>array[i];
    }
    for ( i = 0; i < n; i++)
    {
        for ( j = 1; j <i; j++)
        {
            if(array[i]==array[j]){
                cout<<array[i]<<endl;
                return;
            }
        }
        
    }
}

int main(){
    int t,p;
    cout<<"Enter the number of test cases"<<endl;
    cin>>t;
    p=1;
   while (p<=t)
   {
       duplicate();
       p++;
    }
    
}