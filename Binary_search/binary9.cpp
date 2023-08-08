#include<iostream>
using namespace std;

int isPossible(int arr[], int n, int k , int mid)
{
    int std_count=1;
    int time=0;

    for(int i=0;i<n;i++){
        if(time + arr[i] <= mid){
            time += arr[i];
        }
        else{
            std_count++;
            if(std_count>k || arr[i]>mid){
                return 0;
            }
            time=arr[i];
        }
    }
    return 1;
}

int paintertime(int arr[], int n, int k)
{
    int s=0;
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
    }
    int e=sum;
    int ans=-1;
    int mid=s+((e-s)/2);

    while(s<=e){
        if(isPossible(arr,n,k,mid)){
            ans=mid;
            e=mid-1;
        }
        else{
            s=mid+1;
        }
        mid=s+((e-s)/2);
    }
    return ans;
}

int main()
{
    int arr[1000],n,m;
    cout<<"Enter the size of the array: ";
    cin>>n;
    cout<<"Enter the elements of the array: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Enter the number of painters: ";
    cin>>m;
    cout<<paintertime(arr,n,m);
    return 0;
}