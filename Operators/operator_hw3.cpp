#include<iostream>
using namespace std;

int main(){
    int n,x,rev=0;
    cin>>n;
    while(n!=0){
        x=n%10;
        if(rev>(INT_MAX/10) || rev<(INT_MIN/10)){
            cout<<"0";
            break;
        }
        rev=rev*10+x;
        n=n/10;
    }
    cout<<rev<<endl;
    return 0;
}