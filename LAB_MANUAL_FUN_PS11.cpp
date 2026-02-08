#include<iostream>
using namespace std;
int main (){
    int divident,divison,remainder;
    cout<<"Enter the divident:";
    cin>>divident;
    cout<<"Enter the divison:";
    cin>>divison;
    if (divison == 0){
        cout<<"Error :divison is not possible by 0";
    }else
    {
        remainder = divident/divison;
        cout<<"The remainder is :"<<divident<<" "<<"%"<<" "<<divison<<" "<<"is:"<<" "<<remainder;
    }
    

    return 0;
}