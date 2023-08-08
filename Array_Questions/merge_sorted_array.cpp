#include<iostream>
using namespace std;

int merge_array(int arr1[],int n,int arr2[],int m,int arr[])
{
    int i=0,j=0,k=0;
    while( i<n && j<m){  /*arr.size() > m+n*/
        if(arr1[i]<arr2[j]){
            arr[k++]=arr1[i++];
        }else{
            arr[k++]=arr2[j++];
        }
    }
    //copy first array ke element
    while(i<n){
        arr[k++]=arr1[i++];
    }
    //copy second array ke element
    while(j<m){
        arr[k++]=arr2[j++];
    }

    return 0;
}

int print_array(int arr[],int x)
{
    for(int i=0;i<x;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}

int main()
{
    int arr1[5]={1,3,5,7,9};
    int arr2[3]={2,4,6};

    int arr3[8]={0};

    merge_array(arr1,5,arr2,3,arr3);

    print_array(arr3,8);

    return 0;
}