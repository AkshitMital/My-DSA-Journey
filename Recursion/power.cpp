#include<iostream>
#include<math.h>
using namespace std;

int power(int n)
{
    //base case
    if(n==0){
        return 1;
    }
    //reccursive relation
    return 2 * power(n-1);
}

int main(){
    int n;
    cin>>n;

    int ans = power(n);

    cout<<ans;

    return 0;
}