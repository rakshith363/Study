#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"Enter the size of array"<<endl;
    cin>>n;
    int i,k;
    int array[100];
    for ( i = 0; i < n; i++)
    {
        cin>>array[i];
    }
    for ( i = 0; i <n; i++)
    {
        bool j=true;
       for ( k = 0; k <n; k++)
       {
           if(array[i]==array[k] && k!=i){
               j=false;
               break;
           }

        } 
        if(j==true){
            cout<<array[i]<<" ";
        }
    
    }
    
}