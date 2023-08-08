//Pivot in an Array

#include<iostream>
using namespace std;

int pivotArray(int arr[], int n) 
{
    int s=0;
    int e= n-1;
    int mid= s+((e-s)/2);

    while(s<e){
        if(arr[mid]>=arr[0]){
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
    cout<<pivotArray(arr,n);
    return 0;
}