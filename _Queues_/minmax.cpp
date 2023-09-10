#include<iostream>
#include<queue>
using namespace std;

int solve(int *arr, int n, int k)
{
    deque<int> mini(k);
    deque<int> maxi(k);
    int sum=0;

    for(int i=0; i<k; i++){
        while(!maxi.empty() && arr[maxi.back()]<=arr[i]){
            maxi.pop_back();
        }
        while(!mini.empty() && arr[mini.back()]>=arr[i]){
            mini.pop_back();
        }
        maxi.push_back(i);
        mini.push_back(i);
    }

    for ( int i=k ; i < n; i++ )
    {
        sum += arr[maxi.front()] + arr[mini.front()];

        while ( !maxi.empty() && i - maxi.front() >= k)
            maxi.pop_front();
        while ( !mini.empty() && i - mini.front() >= k)
            mini.pop_front();
 

        while ( (!maxi.empty()) && arr[maxi.back()] <= arr[i])
            maxi.pop_back();

        while ( (!mini.empty()) && arr[mini.back()] >= arr[i])
            mini.pop_back(); 
 
        mini.push_back(i);
        maxi.push_back(i);
    }
 
    sum += (arr[maxi.front()] + arr[mini.front()]);
 
    return sum;

}

int main()
{
    int arr[7] = {2, 5, -1, 7, -3, -1, -2} ;
    int k = 4;
    
    cout<<solve(arr , 7, k);

    return 0;
}