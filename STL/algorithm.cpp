#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    vector<int> v;

    v.push_back(1);
    v.push_back(3);
    v.push_back(8);
    v.push_back(13);
    v.push_back(9);
    v.push_back(0);

    sort(v.begin(), v.end());

    for(int i:v){
        cout<<i<<" ";
    }cout<<endl;

    cout<<"Finding element 13 -> " << binary_search(v.begin(),v.end(),13)<<endl;

    cout<<"Lower bound -> " << lower_bound(v.begin(),v.end(),13)-v.begin()<<endl;

    cout<<"Upper bound -> " << upper_bound(v.begin(),v.end(),13)-v.begin()<<endl;

    int a=55, b=423;
    cout<<"Max -> "<<max(a,b)<<endl;
    cout<<"Min -> "<<min(a,b)<<endl;

    swap(a,b);
    cout<<a<<" "<<b<<endl;

    string abcd="abcd";
    reverse(abcd.begin(),abcd.end());
    cout<<abcd<<endl;

    rotate(v.begin(),v.begin()+1,v.end());//first element goes to the last
    cout<<"After rotate: "<<endl;
    for(int i:v){
        cout<<i<<" ";
    }cout<<endl;

    return 0;
}