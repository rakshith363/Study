#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int binarysearch(int array[100],int n){
    int start=0;
    int end=n-1;
    int k;
    cout<<"Enter te element to search"<<endl;
    cin>>k;
    
    while(start!=end)
    {

        int mid=(start+end)/2;
        if(k==array[mid]){
            cout<<mid<<endl;
            return mid;
        }
        else if(k<array[mid]){
            end=mid-1;
        }
        else{
            start=mid+1;
        }

    }
    cout<<-1<<endl;
    return -1;
}

int main(){
    int n,i,j,t;
    cout<<"Enter the number of elements in an array"<<endl;
    cin>>n;
    int array[100];
    cout<<"Enter the array elements"<<endl;
    for ( i = 0; i < n; i++)
    {
        cin>>array[i];
    }

    cout<<"Enter test cases"<<endl;
    cin>>j;
    for(t=1;t<=j;t++){
        int output=binarysearch(array,n);
    }

    

}