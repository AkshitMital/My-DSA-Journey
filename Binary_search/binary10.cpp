#include<iostream>
#include<climits>
using namespace std;

bool isPossible(int arr[], int n, int m, int min)
{
    int studentsreq=1, sum=0;
    for(int i=0;i<n;i++){
        if(arr[i]>min){
            return false;
        }
        if(sum+arr[i]>min){
            studentsreq++;
            sum=arr[i];

            if(studentsreq>m){
                return false;
            }
        }
        else{
            sum+=arr[i];
        }
    }
    return true;
}

int AllocateMinimum(int arr[], int n , int m)
{
    int sum=0;
    if(m>n){
        return -1;
    }
    for(int i=0; i<n ; i++){
        sum=sum+arr[i];
    }
    int start=0, end=sum, ans=INT_MAX;
    while (start<=end)
    {
        int mid=start+((end-start)/2);
        if(isPossible(arr,n,m,mid)){
            ans=min(ans,mid);
            end=mid-1;
        }
        else{
            start=mid+1;
        }
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
    cout<<"Enter the number of students: ";
    cin>>m;
    cout<<AllocateMinimum(arr,n,m);
    return 0;
}