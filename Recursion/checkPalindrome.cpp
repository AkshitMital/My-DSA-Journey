#include<iostream>
using namespace std;

bool checkPalindrome(int i, int j, string& s) //& is used to create a reference so that it does not make a copy of the string in main() function.
{
    //base case
    if(i>j){
        return true;
    }
    if(s[i]==s[j]){
        return true;
    }else{
        return false;
    }
    i++;j--;

    checkPalindrome(i,j,s);
}

int main(){
    string s="abaabc";
    int i=0;
    int j=s.length()-1;
    int ans = checkPalindrome(i,j,s);
    if(ans){
        cout<<"It is a palindrome";
    }else{
        cout<<"It is not a palindrome";
    }
    return 0;
}