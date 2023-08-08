#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int row=n;
    while(row>=1){
        int col=row;
        while(col>=1){
            cout<<"*";
            col--;
        }
        cout<<endl;
        row--;
    }
    return 0;
}