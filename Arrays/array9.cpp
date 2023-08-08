#include <iostream>
using namespace std;

int sum_array(int arr[], int n, int match){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if((arr[i]+arr[j]==match)&&i!=j){
                cout<<"The pair is "<<arr[i]<<" and "<<arr[j]<<endl;
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
    int arr[100];
    int n, match;
    cout<<"Enter the number of elements: ";
    cin>>n;
    cout<<"Enter the elements: ";
    input_array(arr,n);
    cout<<"Enter the sum: ";
    cin>>match;
    sum_array(arr,n, match);
    return 0;
}