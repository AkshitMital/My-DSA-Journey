#include<iostream>
using namespace std;

int factorial(int n)
{
    //base case
    if(n==0){
        return 1;
    }
    //reccursive relation
    return n * factorial(n-1);
}

int main(){
    int n;
    cin>>n;

    int ans = factorial(n);

    cout<<"Factorial of "<<n<<": "<<ans;

    return 0;
}