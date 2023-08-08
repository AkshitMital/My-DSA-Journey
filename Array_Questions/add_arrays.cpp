#include<iostream>
using namespace std;

int addtwoarrays(vector<int> v1,vector<int> v2){
    int i=v1.size()-1;
    int j=v2.size()-1;
    int carry=0;
    vector<int> ans;

    while(i>=0&&j>=0){
        int val1=v1[i];
        int val2=v2[j];

        int sum = val1+val2+carry;

        carry=sum/10;
        sum %= 10;
        ans.push_back(sum);
        i--;
        j--;
    }

    //first case
    while(i>=0){
        int sum = v1[i] + carry;
        carry=sum/10;
        sum %= 10;
        ans.push_back(sum);
        i--;
    }

    //second case
    while(j>=0){
        int sum = v2[j] + carry;
        carry=sum/10;
        sum %= 10;
        ans.push_back(sum);
        j--;
    }

    //third case
    while(carry!=0){
        int sum = carry;
        carry=sum/10;
        sum %= 10;
        ans.push_back(sum);
    }

    //reversing the array
    int s=0;
    int e=ans.size()-1;

    while(s<e){
        swap(ans[s++],ans[e--]);
    }

    for(int i=0;i<ans.size();i++){
        cout<< ans[i]<<" ";
    }

    return 0;
}

int main(){
    vector<int> v1 , v2;
    int m, n , a ,b;
    cout<<"Enter the size for v1: ";
    cin>>n;
    cout<<"Enter the values of v1: ";
    for(int i=0;i<n;i++){
        cin>>a;
        v1.push_back(a);
    }
    cout<<"Elements of v1: ";
    for(int i=0;i<n;i++){
        cout<<v1[i]<<" ";
    }cout<<endl;
    cout<<"Enter the size for v2: ";
    cin>>m;
    cout<<"Enter the values of v2: ";
    for(int i=0;i<m;i++){
        cin>>b;
        v2.push_back(b);
    }
    cout<<"Elements of v2: ";
    for(int i=0;i<m;i++){
        cout<<v2[i]<<" ";
    }cout<<endl;

    addtwoarrays(v1,v2);

    return 0;
}