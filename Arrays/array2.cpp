#include<iostream>
using namespace std;

void update(int arr[], int n){
    cout<<"Inside the function"<<endl;

    arr[0]=12;

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
    
    cout<<"Going back to the main function"<<endl;
}

int main(){
    int arr[3]={1,2,3};
    update(arr,3);
    cout<<endl<<"Printing the main function"<<endl;
    for(int i=0;i<3;i++){
        cout<<arr[i]<<" ";
    }cout<<endl;

    return 0;
}
//in case of variable it mkes a copy of it in the function.
//in case of array it modifies the address of the array in the function.
//that's why the value changes in main function