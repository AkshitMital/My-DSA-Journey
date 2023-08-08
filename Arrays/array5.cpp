#include <iostream>
using namespace std;

int reverse_array(int arr[], int n){
    int i,j;
    for(i=0;i<n/2;i++){
        j=arr[i];
        arr[i]=arr[n-1-i];
        arr[n-1-i]=j;
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
    cout<<"\n";
    reverse_array(arr,n);
    cout<<"The reversed array is: ";
    display_array(arr,n);
    return 0;
}