#include<iostream>
using namespace std;

int sum(int arr[], int size)
{
    //base case
    if(size<=0){
        return 0;
    }
    //recursive realtion
    return sum(arr,size-1) + arr[size-1];
}

int main(){
    int arr[] = {2,4,10,10,10};
    int n = sizeof(arr) / sizeof(arr[0]);
    int ans = sum(arr,n);
    cout<<ans;
    return 0;
}