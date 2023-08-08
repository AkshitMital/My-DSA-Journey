#include<iostream>
#include<stack>
using namespace std;

int main()
{
    stack<string>s;
    s.push("Name");
    s.push("Akshit");
    s.push("Mittal");

    cout<<"Top element: "<<s.top()<<endl;
    cout<<"Size: "<<s.size()<<endl;

    s.pop();
    cout<<"Top element: "<<s.top()<<endl;
    cout<<"Size: "<<s.size()<<endl;
    cout<<"Empty or not? "<<s.empty();

    return 0;
}