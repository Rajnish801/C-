#include<iostream>
using namespace std;
int main (){
    int p,r,t;
    cout<<"Enter the first Number(p):";
    cin>>p;
    cout<<"Enter the second NNUmber(r)";
    cin>>r;
    p = p+r;
    r = p-r;
    p = p-r;

     cout<<"p="<<p<<"    "<<"r="<<r;
    return 0;
}
