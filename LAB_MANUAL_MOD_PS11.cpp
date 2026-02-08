#include <iostream>
using namespace std;

int main() {
    float a,b,c,total,percentage;
    cout<<"enter the first subject marks A :"<<"\n";
    cin>>a;
    cout<<"enter the first subject marks B :"<<"\n";
    cin>>b;
    cout<<"enter the first subject marks C :"<<"\n";
    cin>>c;
    total = a+b+c;
    cout<<"The Total of the three subject is "<<total<<"\n";
    percentage = ((total)/300)*100;
    cout<<"The percentage of the three subject is "<<percentage<<"\n";
    return 0;
}