#include<iostream>
using namespace std;

char getMaxOccur(string s){

    int arr[26] = {0}; /*we create an array in which each cell indicates alphabets(a-z) which 
    contains the number of occurence of each cell or alphabet*/

    for(int i=0; i<s.length();i++){
        char ch=s[i];
        int number = 0;
        if(ch>='a'&&ch<='z'){
            number = ch - 'a';
        }else{
            number = ch - 'A';
        }
        arr[number]++;
    }

    int maxi=-1 , ans=0;
    for(int j=0; j<26; j++){
        if(maxi<arr[j]){
            ans=j;
            maxi=arr[j];
        }
    }
    char finalans = ans + 'a';
    cout<<finalans;

    return finalans;
}

int main(){
    string s;
    cin>>s;

    getMaxOccur(s);

  return 0;
}