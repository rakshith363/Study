#include<iostream>
#include<math.h>
#include<conio.h>
#include<stdio.h>
using namespace std;

int main(){
    int totalsalary,basic,allow;
    char ch,A,B;
    cout<<"enter basic salary"<<endl;
    cin>>basic;
    cout<<"enter Grade"<<endl;
    cin>>ch;
    double hra,da,pf;
    hra=(20*basic)/100;
    da=(50*basic)/100;
    pf=(11*basic)/100;
    if (ch=='A')
    {
        allow=1700;
    }
    else if (ch=='B')
    {
        allow=1500;
    }
    else
    {
       allow=1300;
    }  
    totalsalary=basic+hra+da+allow-pf;
    cout<<totalsalary;
}