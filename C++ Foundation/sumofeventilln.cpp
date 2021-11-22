#include<iostream>
using namespace std;

int main(){
    int n,i,sum=0;
    cout<<"enter a number"<<endl;
    cin>>n;
    i=2;
    while (i<=n)
    {
        sum+=i;
        i+=2;
    }
    cout<<sum<<endl;
    

    
}