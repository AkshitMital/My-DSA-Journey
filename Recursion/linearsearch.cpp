#include<iostream>
using namespace std;

bool linearsearch(int arr[], int size, int key)
{
    //base case
    if(size==0){
        return false;
    }
    //recursive realtion
    if(arr[0] == key){
        return true;
    }else{
        bool ans = linearsearch ( arr+1 , size-1 , key );
        return  ans;
    }
}

int main(){
    int arr[] = {2,4,1,3,6};
    int n = sizeof(arr) / sizeof(arr[0]);
    int key=3;
    bool ans = linearsearch(arr,n,key);
    if(ans){
        cout<<"Present";
    }else{
        cout<<"Absent";
    }
    return 0;
}