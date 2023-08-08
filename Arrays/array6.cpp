#include <iostream>
using namespace std;

int swap_array(int arr[], int n){
    for(int i=0;i<n;i+=2){
        if(i+1<n){
            swap(arr[i],arr[i+1]);
        }
    }
    return 0;
}

int input_array(int arr[],int n){
    int i;
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    return 0;
}

int display_array(int arr[], int n){
    int i;
    for(i=0;i<n;i++){
        cout<<arr[i]<<" ";
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
    swap_array(arr,n);
    cout<<"The alternate swapped array is: ";
    display_array(arr,n);
    return 0;
}