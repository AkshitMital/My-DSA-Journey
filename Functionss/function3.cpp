#include<iostream>
using namespace std;
int update(int n){
    int ans=n*n;
    return ans;
}

int main(){
    int n=14;
    update(n);
    cout<<n<<endl;
}