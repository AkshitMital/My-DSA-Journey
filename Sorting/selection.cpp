#include<iostream>
using namespace std;

//spa

int Selection_Sort(int arr[], int n)
{
    for(int i=0; i<n-1;i++){
        int minIndex=i;

        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[minIndex]){
                minIndex=j;
            }
        }
        swap(arr[minIndex],arr[i]);
    }
    return 0;
}

int main(){
    int n, arr[100];
    cout<<"Enter the size of the array: ";
    cin>>n;
    cout<<"Enter the elements of the array: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"The sorted array is: "<<endl;
    Selection_Sort(arr, n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}