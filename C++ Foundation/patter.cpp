#include<iostream>
using namespace std;

int main()
{
    int i,j,n,val;
    cout<<"enter a number"<<endl;
    cin>>n;
    i=1;
    val=1;
    
    while (i<=n)
    {
        j=1;
        while (j<=i)
        {
           if (j<i)
           {
               cout<<"*";
               val=val+1;
           }
           if (j==i)
           {
               cout<<"*";
               val=val;
           }
           j=j+1;
           
        }
        cout<<endl;
        i=i+1;
    }
    
}