#include<iostream>
#include<array>
#include<string>
using namespace std;

char toLowercase(char ch){
    if(ch>='a'&&ch<='z'){
        return ch;
    }else{
        char temp = ch - 'A' + 'a';
        return temp;
    }
}

int palindrome(char name[], int n){
    int s=0;
    int e=n-1;

    while(s<e){
        if(!isalnum(name[s])) 
            s++;
        else if(!isalnum(name[e])) 
            e--;
        else if( toLowercase(name[s]) != toLowercase(name[e]) ){
            return 0;
        }else{
            s++;
            e--;
        }
    }
    return 1;
}

int getLength(char arr[]){
    int count=0,i=0; 
    while(arr[i]!='\0'){
        count++;
        i++;
    }
    return count;
}

int main(){

    char name[20];
    cout<<"Enter string: ";
    cin>>name;
    cout<< "If it is a palindrome or not? "<<palindrome(name,getLength(name));

    return 0;
}