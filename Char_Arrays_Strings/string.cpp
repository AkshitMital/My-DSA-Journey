#include<iostream>
using namespace std;

int main(){
    string str = "Mittal";
    string st = "Akshit";
    cout<<"Length of the string: "<<str.size()<<endl; //size() or length() both will work.
    str.push_back('c');
    cout<<str<<endl;;
    str.pop_back();
    cout<<str<<endl;

    string sttr = st.append(str); //concatenation
    cout<<sttr<<endl;

    //to get a full name
    string fullName;
    cout << "Type your full name: ";
    getline (cin, fullName);
    cout << "Your name is: " << fullName;

    return 0;
}