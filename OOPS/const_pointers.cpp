#include<iostream>
using namespace std;

//const data_type* var_name;
/*
int main()
{
    const int a = 10;
    int b=20;
    
    const int* P;                             //Variable is constant or not
    P=&a;
    cout<<"Address of a is "<<P<<endl;
    P=&b;                                     //Pointer is not constant
    cout<<"Address of b is "<<P<<endl;
    return 0;
}
*/

//data_type* const var_name;
/*
int main()
{
    int a = 10;                             //Variable is not constant
    int b=20;
    
    int* const P = &a;                      //Pointer is constant
    cout<<"Address of a is "<<P<<endl;
    //int* const P = &b;                      //Will give error
    //cout<<"Address of b is "<<P<<endl;
    return 0;
}
*/

//const data_type const *var_name;
/*
int main()
{
    int a = 10;                             //Variable is not constant
    int b=20;
    
    const int const * P = &a;                      //Pointer is not constant
    cout<<"Address of a is "<<P<<endl;
    P = &b;                     
    cout<<"Address of b is "<<P<<endl;
    return 0;
}
*/

//const data_type const *var_name;

int main()
{
    int a = 10;                             //Variable is not constant or constant
    int b=20;
    
    const int * const P = &a;                      //Pointer is constant
    cout<<"Address of a is "<<P<<endl;
    //P = &b;                                 //Will generate error
    //cout<<"Address of b is "<<P<<endl;
    return 0;
}