#include<iostream>
using namespace std;
int main (){
    int p,r,t;
    cout<<"Enter the first Number(p):";
    cin>>p;
    cout<<"Enter the second NNUmber(r)";
    cin>>r;

    t = p;
    p = r;
    r = t;

    cout<<"p="<<p<<"    "<<"r="<<r;    

}
