//Using Stack STL

#include<iostream>
#include<stack>
using namespace std;

int main()
{

    //creation of stack
    stack <int> s;

    //push element in stack
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);

    cout<<"Printing the top element after push: "<<s.top()<<endl;

    //pop element from stack
    s.pop();

    cout<<"Printing the top element after pop: "<<s.top()<<endl;

    if(s.empty()){
        cout<<"Stack is empty!!!"<<endl;
    }else{
        cout<<"Stack is not empty."<<endl;
    }

    cout<<"Size of stack: "<<s.size()<<endl;

    return 0;
}