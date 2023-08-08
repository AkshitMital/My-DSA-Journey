#include<iostream>
#include<vector>
using namespace std;

void power_set(vector<int> nums , vector<int> output , int index , vector<vector<int> >& ans)
{
    //base case
    if(index>=nums.size()){
        ans.push_back(output);
        return ;
    }
    //exclude
    power_set(nums,output,index+1,ans);
    //include
    int element = nums[index];
    output.push_back(element);
    power_set(nums,output,index+1,ans);
}

int main(){
    vector<vector<int> > ans;
    vector<int>nums;
    for (int i = 0; i <= 3; i++){
        nums.push_back(i);
    }
    int index=0;
    vector<int> output;
    power_set(nums,output,index,ans);
    for (int i = 0; i < ans.size(); i++) {
        for (int j = 0; j < ans[i].size(); j++){
            cout << ans[i][j] << " ";
        }cout << endl;
    }
    return 0;
}