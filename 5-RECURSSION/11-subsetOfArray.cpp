#include<bits/stdc++.h>
using namespace std;

void subset(vector<int>& nums, vector<int>& output, vector<vector<int>>& result, int i){

    if(i == nums.size()){
        result.push_back(output);
        return;
    }

    subset(nums, output, result, i+1);

    output.push_back(nums[i]);
    subset(nums, output, result, i+1);

    output.pop_back();
}

vector<vector<int>> powerSet(vector<int>& nums){
    vector<int> output;
    vector<vector<int>> result;

    subset(nums, output, result, 0);

    return result;
}
 
int main (){

    int n;
    cin>>n;
  
    vector<int> nums(n);
    for(int i = 0; i < n; i++){
        cin>>nums[i];
    }
 
    vector<vector<int>> result;

    result = powerSet(nums);

    for(int i = 0; i < result.size(); i++){
        for(int j = 0; j < result[0].size(); j++){
            cout<<result[i][j]<<" ";
        }
        cout<<endl;
    }
  
    return 0;
}