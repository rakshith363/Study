#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,i,evensum,oddsum;
    cout<<"Enter a number"<<endl;
    cin>>n;
    evensum=0;
    oddsum=0;
    while(n>0)
    {
        i=n%10;
        if (i%2==0)
        {
            evensum+=i;
        }
        else
        {
            oddsum+=i;
        }
        n=n/10;
        
    }
    cout<<evensum<<endl;
    cout<<oddsum<<endl;  
    
}