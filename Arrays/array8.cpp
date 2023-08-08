#include<iostream>
using namespace std;

int intersect_array(int arr1[], int arr2[], int n,int m){
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(arr1[i]==arr2[j]){
                cout<<"The common element: "<<arr1[i]<<endl;
            }
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

int main(){
    int arr1[100];
    int arr2[100];
    int n,m;
    cout<<"Enter the number of elements in first array : ";
    cin>>n;
    cout<<"Enter the elements: ";
    input_array(arr1,n);
    cout<<"Enter the number of elements in second array : ";
    cin>>m;
    cout<<"Enter the elements: ";
    input_array(arr2,m);
    intersect_array(arr1,arr2,n,m);
    return 0;
}