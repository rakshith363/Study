#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,x,i,result;
    cout<<"Enter base value"<<endl;
    cin>>n;
    cout<<"Enter power value"<<endl;
    cin>>x;
    i=1;
    result=1;
    if (n!=0)
    {
        if (x==0)
        {
            result=1;
        }
        else{
        while(i<=x)
        {
            result*=n;
            i+=1;
        }
        }
    }
    else
    {
        result=0;
    }
    cout<<result<<endl;
    
}