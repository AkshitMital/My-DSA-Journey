#include<iostream>
using namespace std;

bool isSorted(int arr[], int size)
{
    //base case
    if(size==0||size==1){
        return true;
    }
    //recursive realtion
    if(arr[size-1] < arr[size-2]){
        return false;
    }else{
        bool ans = isSorted(arr,size-1);
        return  ans;
    }
}

int main(){
    int arr[] = {2,4,10,10,10};
    int n = sizeof(arr) / sizeof(arr[0]);
    bool ans = isSorted(arr,n);
    if(ans){
        cout<<"Array is sorted";
    }else{
        cout<<"Array is not sorted";
    }
    return 0;
}