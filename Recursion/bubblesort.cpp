#include<iostream>
using namespace std;

void bubblesort(int *arr, int size)
{
    //base case
    if(size==0 || size==1){
        return ;
    }
    //solving first case
    for(int i=0 ; i<size-1 ; i++){
        if(arr[i]>arr[i+1]){
            swap(arr[i],arr[i+1]);
        }
    }
    bubblesort(arr,size-1);
}

int main(){
    int arr[] = {9,8,7,6,5,4,3,2,1};
    int size = sizeof(arr) / sizeof(int);

    bubblesort(arr,size);
    for(int j=0 ; j<size;j++){
        cout<<arr[j]<<" ";
    }
    return 0;
}