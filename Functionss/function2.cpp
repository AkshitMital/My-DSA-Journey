#include<iostream>
using namespace std;
void update(int n){
    n=n/2;
}

int main(){
    int a=10;
    update(a);
    cout<<a<<endl;
    return 0;
}