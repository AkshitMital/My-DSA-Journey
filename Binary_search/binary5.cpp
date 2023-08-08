//search an element in an rotated array

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
    return s;
}

int BinarySearch(int arr[],int s, int e, int key)
{
    int mid=s+((e-s)/2);
    while(s<=e){
        if(arr[mid]==key){
            return mid;
        }
        else if(arr[mid]>key){
            e=mid-1;
        }
        else{
            s=mid+1;
        }
        mid=s+((e-s)/2);
    }
    return -1;
}

int findPosition(int arr[], int n, int k)
{
    int x= pivotArray(arr,n);
    if(k>=arr[x] && k<=arr[n-1]){
        cout<<"The element is present at the index: "<< BinarySearch(arr, x, n-1,k);
    }
    else{
        cout<<"The element is present at the index: "<< BinarySearch(arr,0,x-1,k);
    }
    return 0;
}

int main()
{
    int arr[100],n,k;
    cout<<"Enter the size of array: ";
    cin>>n;
    cout<<"Enter the elements of array: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Enter the element to be searched: ";
    cin>>k;
    findPosition(arr, n, k);
    return 0;
}