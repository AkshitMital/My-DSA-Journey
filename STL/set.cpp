#include<iostream>
#include<set>
using namespace std;

int main()
{
    set<int>s;

    s.insert(5);
    s.insert(5); 
    s.insert(5); 
    s.insert(1); 
    s.insert(6); 
    s.insert(6); 
    s.insert(0); 
    s.insert(0);

    for(auto i:s){
        cout<<i<<" ";
    }cout<<endl; 

    s.erase(s.begin());
    for(auto i:s){
        cout<<i<<" ";
    }cout<<endl;

    set<int>::iterator it=s.begin();//we can do this by this method too
    
    it++;
    s.erase(it);
    for(auto i:s){
        cout<<i<<" ";
    }cout<<endl;

    cout<<"6 is present of not? "<<s.count(6)<<endl;

    set<int>::iterator itr=s.find(1);
    cout<<"Value present at itr-> "<< *it <<endl;

    for(auto it=itr; it!=s.end(); it++){
        cout<< *it<<" ";
    }cout<<endl;

    return 0;
}