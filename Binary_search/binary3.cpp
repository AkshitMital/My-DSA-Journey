//Peak element in a Mountain Array

#include<iostream>
using namespace std;

int peakIndexInMountainArray(int arr[], int n) 
{
    int s=0;
    int e= n-1;
    int mid= s+((e-s)/2);

    while(s<e){
        if(arr[mid]<arr[mid+1]){
            s=mid+1;
        }
        else{
            e=mid;
        }
        mid=s+((e-s)/2);
    }
    return arr[s];
}

int main()
{
    int n,arr[100];
    cout<<"Enter the size of the array: ";
    cin>>n;
    cout<<"Enter the elements of the array: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<peakIndexInMountainArray(arr,n);
    return 0;
}