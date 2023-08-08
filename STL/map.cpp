#include<iostream>
#include<map>
using namespace std;

int main()
{
    map<int,string> m;

    m[1]="mittal";
    m[12]="illuminati";
    m[3]="akshit";

    //m.insert( { 5 , "blakester" } );
    cout<<"Before erase: "<<endl;
    for(auto i:m){
        cout<<i.first<<" "<<i.second<<endl;
    }

    cout<<"Finding 12: "<<m.count(12)<<endl;
    cout<<"Finding -12: "<<m.count(-12)<<endl;

    cout<<"After erase:"<<endl;
    //m.erase(12);
    for(auto i:m){
        cout<<i.first<<" "<<i.second<<endl;
    }cout<<endl;

    auto it=m.find(3);
    for(auto i=it; i!=m.end();i++){//prints the elements after the element in find
        cout<<(*i).first<<endl;
    }

    return 0;
}