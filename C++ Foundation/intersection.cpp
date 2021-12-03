#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void intersection(){
    int n1,n2,i,j;
    int arr1[100],arr2[100];
    cout<<"Enter number of elements in array1"<<endl;
    cin>>n1;
    cout<<"enter elements of array1"<<endl;
    for (i = 0; i < n1; i++)
    {
        cin>>arr1[i];
    }
    cout<<"Enter number of elements in array2"<<endl;
    cin>>n2;
    cout<<"enter elements of array2"<<endl;
    for (j = 0; j < n2; j++)
    {
        cin>>arr2[j];
    }
    for ( i = 0; i < n1; i++)
    {
        for ( j = 0; j < n2; j++)
        {
            if(arr1[i]==arr2[j]){
                cout<<arr1[i]<<" ";
            }
        }
        
    } 
}
int main(){
    int p,t;
    cout<<"Enter test cases"<<endl;
    cin>>t;
    for ( p = 1; p < t; p++)
    {
        intersection();
    }
}