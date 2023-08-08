#include<iostream>
using namespace std;

void saydigit (int n , string arr[])
{
    if(n==0){
        return ;
    }
    int digit = n%10;
    n/=10;
    saydigit(n,arr);
    cout<<arr[digit]<<" ";

}

int main(){
    int n;
    cin>>n;
    string arr[10]={"zero","one","two","three","four","five","six","seven","eight","nine"};
    cout<<endl;

    saydigit(n , arr);
    return 0;
}