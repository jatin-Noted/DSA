#include<iostream>
#include<vector>
#include<string>
#include<bits/stdc++.h>
using namespace std;

vector<int> wavePrint(vector<vector<int>> arr){
    int row = arr.size();
    int col = arr[0].size();

    vector<int>ans;

    for(int c = 0; c < col; c++){
        if(c % 2 == 0){
            for(int r = 0; r < row; r++){
                ans.push_back(arr[r][c]);
            }
        }
        else{
            for(int r = row-1; r >= 0; r--){
                ans.push_back(arr[r][c]);
            }
        }
    }
    return ans;
}
 
int main (){
  
    vector<vector<int>> arr = {{1,2,3,4,5},
                               {6,7,8,9,10},
                               {11,12,13,14,15}};
    
    vector<int> res = wavePrint(arr);

    for(int i = 0; i<res.size(); i++){
        cout<<res.at(i)<<" ";
    }
    
  
    return 0;
}