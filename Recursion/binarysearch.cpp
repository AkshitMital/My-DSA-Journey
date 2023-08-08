#include<iostream>
using namespace std;

int print(int arr[], int s , int e)
{
    for(int i=s;i<=e;i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
}

bool binarysearch(int arr[], int s, int e, int key)
{
    print(arr,s,e);

    //base case

    // 1.element not found
    if(s>e){
        return false;
    }

    int mid = s+(e-s)/2;
    cout<<"Value of arr[mid]: "<<arr[mid]<<endl;

    // 1.element found
    if(arr[mid]==key){
        return true;
    }

    //recursive realtion
    if(arr[mid] < key){
        return binarysearch ( arr , mid+1 , e , key );
    }else{
        return binarysearch ( arr , s , mid-1, key );
    }
}

int main(){
    int arr[] = {2,4,6,10,15,18};
    int n = sizeof(arr) / sizeof(arr[0]);
    int s = 0;
    int e = n-1;
    int key=15;
    bool ans = binarysearch(arr,s,e,key);
    if(ans){
        cout<<"Present";
    }else{
        cout<<"Absent";
    }
    return 0;
}