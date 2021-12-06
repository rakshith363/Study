#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,m,i,j,k,l;
    int array1[100],array2[100],mergearray[200];
    cout<<"Enter number of elements in array 1"<<endl;
    cin>>n;
    cout<<"Enter elements of array 1"<<endl;
    for(i=0;i<n;i++){
        cin>>array1[i];
    }
    cout<<"Enter number of elements in array 2"<<endl;
    cin>>m;
    cout<<"Enter elements of array 2"<<endl;
    for(i=0;i<m;i++){
        cin>>array2[i];
    }
    int total=n+m;
    for(j=0, i=0;j<total && (i<n ||i<m);i++ , j+=2){
            if(array1[i]<=array2[i]){
                mergearray[j]=array1[i];
                mergearray[j+1]=array2[i];
            }
            if(array2[i]<array1[i]){
                mergearray[j]=array2[i];
                mergearray[j+1]=array1[i];
            }
    }
    for(i=0;i<total;i++){
        cout<<mergearray[i]<<" ";
    }
}