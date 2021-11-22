#include<iostream>
using namespace std;

int main(){
    int i,n;
    i=2;
    cout<<"enter a number"<<endl;
    cin>>n;
    bool var=false;
    while (i<n)
    {
        if (n%i==0)
        {
            cout<<"This is not prime no"<<endl;  
            break;
        }
        if(i==n-1){ 
            cout<<"This is a prime no"<<endl;
        }
        i=i+1;
    }
    

}