#include<iostream>
#include<array>
using namespace std;

int move_zeroes(vector<int> &arr){
    int nonZero=0;
    for(int i=0; i < arr.size();i++){
        if(arr[i]!=0){
            swap(arr[i],arr[nonZero]);
            nonZero++;
        }
    }
}

int main(){
    vector<int>arr;
    int a,n;
    cin>>n;
    for (int i = 0; i < n; i++){
        cin>>a;
        arr.push_back(a);
    }
    move_zeroes(arr);
    for (int i = 0; i <arr.size(); i++){
        cout << arr[i] << " ";
    }
    return 0;
}