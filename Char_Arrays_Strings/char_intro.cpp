#include<iostream>
#include<array>
using namespace std;

char reverse(char name[], int n){
    int s=0;
    int e=n-1;

    while(s<e){
        swap(name[s++],name[e--]);
    }
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
    cout<<"Enter your name: ";
    cin>>name;
    //name[3] = '\0';
    cout<<"Your name is "<<name<<endl;

    cout<<"Length of the string is: "<<getLength(name)<<endl;

    cout<<"After reversing: "; 
    cout<< reverse(name,getLength(name));

    return 0;
}