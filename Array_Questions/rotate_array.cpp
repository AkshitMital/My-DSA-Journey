#include<iostream>
using namespace std;

int rotate_array(vector<int> &v,int k){
    vector<int> temp(v.size());
    for(int i=0;i<v.size();i++){
        temp[(i+k)%v.size()]=v[i];
    }
    v = temp;
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
    cout<<"Enter the places to be rotated: ";
    cin>>k;
    rotate_array(v,k);
    for (int i = 0; i <v.size(); i++){
        cout << v[i] << " ";
    }
    return 0;
}