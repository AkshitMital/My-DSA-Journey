//to find a square root of an integer in natural numbers

#include<iostream>
using namespace std;


long long int sqrtint( long long int key)
{
    long long int s = 0;
    long long int e = key;
    long long int ans=-1;
    long long int mid=s+(e-s)/2;
    while(s<=e){
        unsigned long long int square=mid*mid;
        if(square==key){
            return mid;
        }
        else if(square>key){
            e=mid-1;
        }
        else{
            ans=mid;
            s=mid+1;
        }
        mid=s+(e-s)/2;
    }
    return ans;
}


int main()
{
    long long int N;
    cin>>N;
    cout<< sqrtint(N);
    return 0; 
}