#include<iostream>
using namespace std;

int partition(int *arr , int s, int e)
{
    int pivot = arr[s];

    int cnt=0;
    for(int i=s+1;i<=e;i++){
        if(arr[i]<=pivot){
            cnt++;
        }
    }
    //place pivot at right position
    int pivotIndex = s+cnt;
    swap(arr[pivotIndex],arr[s]);

    //left and right wala part sambhal lete hain
    int i=s,j=e;

    while(i<pivotIndex && j>pivotIndex){
        
        while(arr[i]<=pivot){
            i++;
        }
        while(arr[j]>pivot){
            j--;
        }
        if(i<pivotIndex && j>pivotIndex){
            swap(arr[i++],arr[j--]);
        }
    }
    return pivotIndex;
}


void quickSort(int *arr, int s, int e)
{
    //base case
    if(s>=e){
        return ;
    }
    //partition krenge
    int p = partition(arr,s,e);
    //left vala part sort krenge
    quickSort(arr,0,p-1);
    //right vala part sort krenge
    quickSort(arr,p+1,e);
}

int main(){
    int arr[12]={12,11,10,9,8,7,6,5,4,3,2,1};
    int n = 12;

    quickSort(arr, 0 ,n-1);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}