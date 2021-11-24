#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,pv,i,result,rem;
    cout<<"Enter a binary number"<<endl;
    cin>>n;
    result=0;
    i=n;
    pv=1;
    while(i>0)
    {
        rem=i%10;
        result=result+rem*pv;
        pv*=2;
        i=i/10;
    }
    cout<<result<<endl;
    return 0;
}