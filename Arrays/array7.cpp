#include <iostream>
using namespace std;

int unique_array(int arr[], int n){
    int i,j;
    for(i=0;i<n;i++){
        int count=0;
        for(j=0;j<n;j++){
            if(arr[i]==arr[j] && i!=j){
                continue;
            }else{
                count++;
            }
        }
        if(count==n){
            cout<<"The unique element is "<<arr[i]<<endl;
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
    int n;
    cout<<"Enter the number of elements: ";
    cin>>n;
    cout<<"Enter the elements: ";
    input_array(arr,n);
    unique_array(arr,n);
    return 0;
}