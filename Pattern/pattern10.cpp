#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int row=1;
    while(row<=n){
        int col=1,space=1;
        while(space<=n-row){
            cout<<"  ";
            space=space+1;
        }
        while(col<=row){
            cout<<col<<" ";
            col++;
        }
        col=row-1;
        while (col>=1)
        {
            cout<<col<<" ";
            col--;
        }
        row++;
        cout<<endl;
    }

}