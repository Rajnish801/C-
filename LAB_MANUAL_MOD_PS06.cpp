#include<iostream>
using namespace std;
int main (){
    int intval = 10;
    float floatval = 4.5;
    float result = intval + floatval;
    cout<<"Result of adding (IMPLICITYE casted):"<<"  "<<result<<"\n";
    cout<<"size of result"<<"  "<<sizeof(result)<<"bytes";
    return 0;

}