#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,i;
    cout<<"Enter a number"<<endl;
    cin>>n;
    while (n%10==0)
    {
        n=n/10;
    }
    while(n>0){
    i=n%10;
    cout<<i;
    n=n/10;
    }
}