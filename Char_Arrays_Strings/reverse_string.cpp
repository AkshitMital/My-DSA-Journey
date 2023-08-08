#include<iostream>
#include<string>
using namespace std;


string reverse_char(string str){
    int l=0,r=0;
    while(l<str.size()){
        while(r<str.size() && str[r]!=' '){
            r++;
        }
        reverse(str.begin()+l , str.begin()+r);
        l=r+1;
        r=l;
    }
    cout<<str;
    return str;
}

int main(){
    string str;
    cout<<"Enter the string: ";
    cin>>str;
    reverse_char(str);

    return 0;
}