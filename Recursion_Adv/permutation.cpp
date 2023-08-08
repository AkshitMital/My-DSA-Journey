#include<iostream>
using namespace std;

void solve(vector<int> nums ,vector<vector<int> >& ans ,int index )
{
    //base case
    if(index>=nums.size()){
        ans.push_back(nums);
        return ;
    }
    for(int i=index ; i<nums.size() ; i++){
        swap(nums[index],nums[i]);
        solve(nums,ans,index+1);
        //backtrack
        swap(nums[index],nums[i]);
    }
}

int main(){
    vector<vector<int> > ans;
    vector<int> nums;
    for (int i = 1; i <= 3; i++){
        nums.push_back(i);
    }
    int index = 0;    
    solve(nums,ans,index);
    for (int i = 0; i < ans.size(); i++) {
        for (int j = 0; j < ans[i].size(); j++){
            cout << ans[i][j] << " ";
        }cout << endl;
    }
    return 0;
}