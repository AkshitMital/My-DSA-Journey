#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int row=n;
    while(row>=1){
        int space=n-row;
        while(space){
            cout<<" ";
            space=space-1;
        }
        int col=1;
        while(col<=row){
            cout<<"*";
            col++;
        }
        cout<<endl;
        row--;
    }
    return 0;
}