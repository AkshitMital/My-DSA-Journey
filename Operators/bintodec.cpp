#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int n,ans=0;
    cin>>n;
    for(int i=0;n!=0;i++){
        int digit=n%10;
        if(digit==1){
            ans=(pow(2,i))+ans;
        }
        n=n/10;
    }
    cout<<ans;

    return 0;
}