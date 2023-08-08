#include<iostream>
using namespace std;

int main(){
    int n,count;
    cin>>n;
    int i=1;
    count=1;
    while(i<=n){
        int j=1;
        while(j<=n){
            cout<<count<<" ";
            count++;
            j++;
        }cout<<endl;
        i++;
    }

    return 0;
}
