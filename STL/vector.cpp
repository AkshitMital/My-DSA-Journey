#include<iostream>
#include<vector>

using namespace std;

int main()
{
    vector<int> v;
    vector<int> a(5,1); //declares the size of vector 5 and initializes each element with 1
    vector<int> last(a); //makes a new vector with all the elements from a
    cout<<"Display the elemnts of vector a"<<endl;
    for(int i:a){
        cout<<i<<" ";
    }cout<<endl;

    cout<<"capacity -> "<<v.capacity()<<endl;
    v.push_back(1);
    cout<<"capacity -> "<<v.capacity()<<endl;
    v.push_back(2);
    cout<<"capacity -> "<<v.capacity()<<endl;
    v.push_back(3);
    cout<<"capacity -> "<<v.capacity()<<endl;
    v.push_back(4);
    cout<<"capacity -> "<<v.capacity()<<endl;
    v.push_back(5);
    cout<<"capacity -> "<<v.capacity()<<endl;
    cout<<"size -> "<<v.size()<<endl;

    cout<<"Element at 2nd index: "<<v.at(2)<<endl;

    cout<<"Front: "<<v.front()<<endl;
    cout<<"Back: "<<v.back()<<endl;

    cout<<"Before pop"<<endl;
    for(int i:v){    //to print the elemnts from vector
        cout<<i<<" ";
    }cout<< endl;

    v.pop_back();   //takes the last element from vector

    cout<<"After pop"<<endl;
    for(int i:v){
        cout<<i<<" ";
    }cout<< endl;

    cout<<"Before clear size: "<<v.size()<<endl;
    v.clear();
    cout<<"After clear size: "<<v.size()<<endl;

    return 0;
}