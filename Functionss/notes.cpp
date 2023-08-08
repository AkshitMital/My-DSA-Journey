#include<iostream>
using namespace std;

int main(){
    int n,a,b,c;
    cout<<"Enter the amount: ";
    cin>>n;
    a=n/100;
    b=(n-(a*100))/20;
    c=(n-(a*100)-(b*20));
    cout<<"Total number of hundred notes you need: "<<a<<endl;
    cout<<"Total number of twenty notes you need: "<<b<<endl;
    cout<<"Total number of one notes you need: "<<c<<endl;

}