#include<iostream>

using namespace std;

int main(){
    int i,n;
    cout<<"Enter a number"<<endl;
    cin>>n;
    for (i=2; i<n; i++)
    {
      if (n%i==0)
      {
        cout<<"This is not prime"<<endl;
        return 0;
      }  
    }
     cout<<"this is prime"<<endl;
}

