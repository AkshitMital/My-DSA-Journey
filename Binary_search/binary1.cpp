//First and Last Position of an Element In Sorted Array

#include<iostream>
using namespace std;

int firstocc(int array[], int size, int n)
{
    int start=0;
    int end=size-1;
    int mid = start + ((end-start)/2);
    int ans=-1;

    for(int i=0;i<size;i++){
        if(array[mid]==n){
            ans= mid;
            end=mid-1;
        }
        else if(array[mid]>n){
            end=mid-1;
        }
        else{
            start=mid+1;
        }
        mid = start + ((end-start)/2);
    }
    return ans;
}

int lastocc(int array[], int size, int n)
{
    int start=0;
    int end=size-1;
    int mid = start + ((end-start)/2);
    int ans=-1;

    for(int i=0;i<size;i++){
        if(array[mid]==n){
            ans= mid;
            start=mid+1;
        }
        else if(array[mid]>n){
            end=mid-1;
        }
        else{
            start=mid+1;
        }
        mid = start + ((end-start)/2);
    }
    return ans;
}

int main()
{
    int array[100];
    int size;
    int n;
    cout<<"Enter the size of the array: ";
    cin>>size;
    cout<<"Enter the elements of the array: ";
    for(int i=0;i<size;i++){
        cin>>array[i];
    }
    cout<<"Enter the number to be searched: ";
    cin>>n;
    cout<<"First occurence of "<<n<<" is "<<firstocc(array,size,n)<<"\n";
    cout<<"Last occurence of "<<n<<" is "<<lastocc(array,size,n);

    return 0;
}