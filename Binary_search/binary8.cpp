//book allocation

#include<iostream>
using namespace std;

int isPossible(int arr[],int n,int m,int mid)
{
    int student_count = 1;
    int page_sum = 0;

    for(int i=0 ; i<n ; i++){
        if( page_sum + arr[i] <= mid ){
            page_sum += arr[i];
        }
        else{
            student_count++;
            if( student_count>m || arr[i]>mid ){
                return 0;
            }
            page_sum = arr[i];
        }
    }
    return 1;
}

int allocatebooks(int arr[], int n , int m)
{
    int s = 0;
    int sum = 0; 
    for(int i=0; i<n ; i++){
        sum += arr[i];
    }
    int e = sum;
    int ans = -1;
    int mid = s+((e-s)/2);

    while(s<=e){
        if(isPossible(arr,n,m,mid)){
            ans = mid;
            e = mid - 1;
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
    cout<<"Enter the number of students: ";
    cin>>m;
    cout<<allocatebooks(arr,n,m);
    return 0;
}