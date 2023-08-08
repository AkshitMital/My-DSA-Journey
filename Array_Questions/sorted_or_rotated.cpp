#include<iostream>
using namespace std;

int sorted_or_rotated(vector<int>& v){
    int count = 0;
    int n=v.size();
    for(int i=1; i<n;i++){
        if(v[i-1]>v[i]){
            count++;
        }
    }
    if(v[n-1]>v[0]){
        count++;
    }
    if(count<=1){
        cout<<"true";
    }else{
        cout<<"false";
    }
    return 0;
}

int main(){
    vector<int> v;
    int n , a ,k;
    cout<<"Enter the size: ";
    cin>>n;
    cout<<"Enter the values: ";
    for(int i=0;i<n;i++){
        cin>>a;
        v.push_back(a);
    }
    int x = sorted_or_rotated(v);
    return 0;
}