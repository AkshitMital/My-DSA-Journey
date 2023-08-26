#include<iostream>
#include<stack>
using namespace std;

bool input[3][3] = {{0, 1, 0},
            {0, 0, 0}, 
            {0, 1, 0}};

bool knows(int a, int b)
{
    return input[a][b];
}

int findCelebrity(int n)
{
    stack<int> s;
    for(int i=0;i<n;i++){
        s.push(i);
    }

    while(s.size()>1){
        int first = s.top();
        s.pop();
        int second = s.top();
        s.pop();

        if(knows(first,second)){
            s.push(second);
        }else{
            s.push(first);
        }
    }
    int celebrity = s.top();
    //return celebrity;

    //lets verify this celebrity

    //checking row
    bool rowCheck = false;
    int zeroCount =0;
    for(int i = 0; i<n; i++){
        if(input[celebrity][i]==0){
            zeroCount++;
        }
    }
    if(zeroCount==n){
        rowCheck=true;
    }

    //checking column
    bool colCheck = false;
    int oneCount =0;
    for(int i = 0; i<n; i++){
        if(input[i][celebrity]==1){
            oneCount++;
        }
    }
    if(oneCount==n-1){
        colCheck=true;
    }

    if(rowCheck==true && colCheck==true){
        return celebrity;
    }else{
        return -1;
    }
}

int main()
{
    cout<<findCelebrity(3)<<endl;
    return 0;
}