#include<iostream>
using namespace std;

int main(){
    int a=1;
    int b=1;

    if(a-- > 0 || ++b > 2){ 
//Only one of the conditions must be true for || so it won't check ++b>2
        cout<<"stage1-inside if     ";
    }else{
        cout<<"stage2-inside else      ";
    }
    cout<<a<<" "<<b<<endl;

    return 0;
}
//output would be stage2-inside if    0 2