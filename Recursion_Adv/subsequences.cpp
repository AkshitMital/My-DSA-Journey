#include<iostream>
#include<string.h>
using namespace std;

void subsequences(vector<string>& ans , string output , string input , int index)
{
    //base case
    if(index>=input.length()){
        ans.push_back(output);
        return ;
    }
    //exclude
    subsequences(ans , output , input , index+1);

    //exclude
    char element = input[index];
    output.push_back(element);
    subsequences(ans , output , input , index+1);
}

int main(){
    vector<string> ans;
    string input = "abc";
    string output = "";
    int index = 0;
    subsequences(ans , output , input , index);
    for (int j = 0; j < ans.size(); j++){
        cout << ans[j] << endl;
    }
    return 0;
}