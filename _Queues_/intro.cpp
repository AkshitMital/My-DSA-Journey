#include<iostream>
#include<queue>
using namespace std;

int main()
{
    queue<int> q;

    q.push(10);
    cout<<"Front: "<<q.front()<<endl;
    q.push(13);
    cout<<"Front: "<<q.front()<<endl;
    q.push(15);
    cout<<"Front: "<<q.front()<<endl;
    q.push(17);
    cout<<"Front: "<<q.front()<<endl;

    cout<<"Size: "<<q.size()<<endl;
    q.pop();
    cout<<"Size: "<<q.size()<<endl;

    if(q.empty()){
        cout<<"Queue is empty!!"<<endl;
    }else{
        cout<<"queue is not empty"<<endl;
    }

    q.pop();
    q.pop();
    q.pop();
    if(q.empty()){
        cout<<"Queue is empty!!"<<endl;
    }else{
        cout<<"queue is not empty"<<endl;
    }
    return 0;
}