#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int a,b,c,i,n;
    cout<<"Enter a number"<<endl;
    cin>>n;
    a=0;
    b=1;
    if (n==0)
    {
        cout<<a<<endl;
        return 0;
    }
    for ( i = 2; i <=n; i++)
    {
        c=a+b;
        a=b;
        b=c;
        
    }
    cout<<b<<endl;
    

}