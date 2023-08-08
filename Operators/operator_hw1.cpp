#include<iostream>
using namespace std;

int main(){
    int n,sum=0,product=1,t=0;
    cin>>n;
    while(n!=0){
        t=n%10;
        sum+=t;
        product*=t;
        n/=10;
    }

    cout<<product-sum;
}