#include<iostream>
using namespace std;

class A
{
    public: 
    void sayHello(){
        cout<<"Hello Akshit"<<endl;
    }
    void sayHello(string name){
        cout<<"Hello "<<name<<endl;
    }
    void sayHello(char name){
        cout<<"Hello "<< name <<endl;
    }
};

int main()
{
    A obj;
    obj.sayHello("Akshit");
    return 0;
}