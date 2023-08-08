#include<iostream>
using namespace std;

int main(){
    int n,sum=0;
    cout<<"Enter number of elements in an array: ";
    cin>>n;
    float arr[100];
    cout<<"Enter elements of array: \n";
    for(int i=0;i<n;i++){
        cin>>arr[i];
        sum+=arr[i];
    }
    cout<<"Sum of elements in an array is "<<sum<<endl;

    return 0;
}