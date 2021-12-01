#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"Enter number of elements in array"<<endl;
    cin>>n;
    int array[100];
    int sum,i=0;
    int value=0;
   for ( i = 0; i < n; i++)
   {
       cin>>array[i];
       value=array[i];
       sum=sum+array[i];
   }
    cout<<sum<<endl;
   
}