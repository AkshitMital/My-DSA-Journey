#include<iostream>
using namespace std;
void maxmin(int arr[],int n){
    int maxi=INT_MIN;
    int mini=INT_MAX;
    for(int i=0;i<n;i++){
        maxi=max(maxi,arr[i]);
        mini=min(mini,arr[i]);
    }
    cout<<"Maximum element in an array is "<<maxi<<endl;
    cout<<"Minimum element in an array is "<<mini<<endl;
}

int main(){
    int x;
    cout<<"Enter number of elements in an array: ";
    cin>>x;
    int arr[100];
    cout<<"Enter elements of array: \n";
    for(int i=0;i<x;i++){
        cin>>arr[i];
    }
    maxmin(arr,x);

    return 0;
}