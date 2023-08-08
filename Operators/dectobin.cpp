#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int n,ans=0;
    cin>>n;
    for(int i=0;n!=0;i++){
        int digit=n&1;
        ans=(digit*pow(10,i))+ans;
        n=n>>1;
    }
    cout<<ans;

    return 0;
}
