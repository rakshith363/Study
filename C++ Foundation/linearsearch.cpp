#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"Enter number of elements in arrray"<<endl;
    cin>>n;
    int array[100];
    int i,k;
    for ( i = 0; i < n; i++)
    {
        cin>>array[i];
    }
    cout<<"Enter the element to search"<<endl;
    cin>>k;
    cout<<endl;
    for ( i = 0; i < n; i++)
    {
        if(array[i]==k)
        {
            cout<<i;
            return i;
        }
        
    }
     cout<<-1;   
}