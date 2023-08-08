#include<iostream>
#include<array>

using namespace std;

int main(){
    int arr[5]={1,2,3,4,5};
    array<int,4> basic = {1,2,3,4};
    int size = basic.size();
    cout<<"Element at 2nd index: "<< basic.at(2)<<endl;
    cout<<"First element: "<<basic.front()<<endl;
    cout<<"Last element: "<< basic.back()<<endl;
    return 0;
}