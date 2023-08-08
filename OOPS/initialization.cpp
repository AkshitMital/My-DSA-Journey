#include<iostream>
using namespace std;

class Test
{
    public:
    int a;
    int b;

    // Test(int i, int j) : a(i),b(j)
    //Test(int i, int j) : a(i),b(i+a+j)
    // Test(int i, int j) : a(i+b),b(j) --> RED FLAG , bcz a is getting initialized first in line 7
    Test(int i, int j) : a(i),b(j)
    {
        cout<<"Constructor executed"<<endl;
        cout<<"Value of a is "<<a<<endl;
        cout<<"Value of b is "<<b<<endl;
    }   
};

int main()
{
    Test(4,6);
    return 0;
}