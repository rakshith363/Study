#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int choice,n,i,a,b;
    cout<<"Enter a number"<<endl;
    cin>>n;
    cout<<"Enter a choice"<<endl;
    cin>>choice;
    if (choice==1)
    {
        a=0;
        for ( i = 1; i <=n; i++){
            a+=i;
           
        }
    }
    else{ 
        a=1; 
        for ( i = 1; i <=n; i++){
             a*=i;
        
    }
    }
     cout<<a<<endl;

    
    
}