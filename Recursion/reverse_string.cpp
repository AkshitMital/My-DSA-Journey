#include<iostream>
using namespace std;

void reverse(int i, int j, string& s) //& is used to create a reference so that it does not make a copy of the string in main() function.
{
    //base case
    if(i>j){
        return ;
    }
    swap(s[i],s[j]);
    cout<<s<<endl;
    i++;j--;

    reverse(i,j,s);
}

int main(){
    string s="abc";
    int i=0;
    int j=s.length()-1;
    reverse(i,j,s);
    cout<<s;
    return 0;
}