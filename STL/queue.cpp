#include<iostream>
#include<queue>
using namespace std;

int main()
{
    queue<string>q;
    q.push("Name");
    q.push("Akshit");
    q.push("Mittal");

    cout<<"First element: "<<q.front()<<endl;
    cout<<"Size: "<<q.size()<<endl;

    q.pop();
    cout<<"First element after pop: "<<q.front()<<endl;
    cout<<"Size after pop: "<<q.size()<<endl;


    return 0;
}