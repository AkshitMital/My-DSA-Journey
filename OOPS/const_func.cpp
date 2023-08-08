#include<iostream>
using namespace std;

class ExampleClass
{
    public:

    // void doSomething() const;
    void doSomething();
    int variable = 0;
};
/*
void ExampleClass :: doSomething() const
{
    variable = 20;     //constant member function
}
*/

int main()
{
    //const ExampleClass ex;
    ExampleClass ex;
    ex.doSomething();
    return 0;
}