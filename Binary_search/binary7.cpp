//to find a square root of an integer in decimal numbers

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

double moreprecision(int n, int precision, long long int tempsol)
{
    double factor =1;
    double ans=tempsol;

    for(int i=0; i<precision; i++){
        factor = factor/10;
        for (double j=ans; (j*j)<n; j+=factor){
            ans=j;
        }
    }
    return ans;
}

int main()
{
    long long int N;
    cout<<"Enter the number: ";
    cin>>N;
    long long int tempsol= sqrtint(N);
    cout<<"Answer is "<< moreprecision(N, 3, tempsol);
    return 0; 
}