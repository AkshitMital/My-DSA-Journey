#include<iostream>
using namespace std;

int bubble_sort(int arr[],int n)
{
	for(int i=0;i<n-1;i++){
		for(int j=0;j<n-i-1;j++){
			if (arr[j]>arr[j+1]){
				swap(arr[j],arr[j+1]);
			}
		}
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
    bubble_sort(arr, n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

  	return 0;
}