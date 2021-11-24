#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,i,a,count;
    cout<<"Enter a number"<<endl;
    cin>>n;
    count=1;
    for(i=1;count<=n;i++)
    {
        a=3*i+2;
        if (a%4==0)
        {
            continue;
        }
        else{
            cout<<a<<" ";
            count+=1;
        }
    }
    

}