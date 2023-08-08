#include <iostream>
using namespace std;

int duplicate_array(int arr[], int n){
    int i,sol=0;
    for(i=0;i<n;i++){
        sol=sol^arr[i];
        
    }
    cout<<sol;
    return 0;
}

int input_array(int arr[],int n){
    int i;
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    return 0;
}

int main(){
    int arr[100];
    int n;
    cout<<"Enter the number of elements: ";
    cin>>n;
    cout<<"Enter the elements: ";
    input_array(arr,n);
    duplicate_array(arr,n);
    return 0;
}