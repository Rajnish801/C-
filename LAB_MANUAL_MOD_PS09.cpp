#include<iostream>
using namespace std;
int main(){
    float a,b;
    cout<<"Enter the first intger:";
    cin>>a;
    cout<<"Enter the Second intger:";
    cin>>b;
    float average = static_cast<float>(a+b)/2;
    cout<<"the Average is "<<" "<<average;
    return 0 ;

}