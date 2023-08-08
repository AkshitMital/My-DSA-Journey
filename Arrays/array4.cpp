#include<iostream>
using namespace std;

int main(){
    int arr[100];
    int n;
    cout<<"Number of elements to be inserted: ";
    cin>>n;
    cout<<"Enter the elements: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int search;
    cout<<"Enter the element to be searched: ";
    cin>>search;
    for(int j=0;j<n;j++){
        if (arr[j]==search){
            cout<<"Element found at positon: "<<j+1;
            break;
        }
        else{
            continue;
        }
    }

}