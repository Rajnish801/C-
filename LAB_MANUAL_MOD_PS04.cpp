#include<iostream>
using namespace std;
int main (){
    float p,r,t,y,si;
    cout<<"Enter the value of Basic salary:"<<"\n";
    cin>>p;
    cout<<"Enter the value of HRA:"<<"\n";
    cin>>r;
    cout<<"Enter the value of DA:"<<"\n";
    cin>>t;
    cout<<"Enter the value of Other Allowance:"<<"\n";
    cin>>y;
    si = p + r + t + y; 
    cout<<"THE Gross salary  is :"<<si<<"\n";
    return 0;

}