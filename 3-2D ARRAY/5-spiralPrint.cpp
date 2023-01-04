#include<iostream>
#include<vector>
#include<string>
#include<bits/stdc++.h>
using namespace std;

vector<int> spiralPrint(vector<vector<int>> arr){
    int row = arr.size();
    int col = arr[0].size();

    int startingRow = 0, endingRow = row-1;
    int startingCol = 0, endingCol = col-1;

    vector<int>ans;

    int count = 0, total = row * col;

    while(count < total){
        for(int c = startingCol; c <= endingCol ; c++){
            ans.push_back(arr[startingRow][c]);
            count++;
        }
        startingRow++;
        for(int r = startingRow; r <= endingRow ; r++){
            ans.push_back(arr[r][endingCol]);
            count++;
        }
        endingCol--;
        for(int c = endingCol; c >= startingCol ; c--){
            ans.push_back(arr[endingRow][c]);
            count++;
        }
        endingRow--;
        for(int r = endingRow; r >= startingRow ; r--){
            ans.push_back(arr[r][startingCol]);
            count++;
        }
        startingCol++;
    }
    return ans;
}
 
int main (){
  
    vector<vector<int>> arr = {{1,2,3,4,5},
                               {6,7,8,9,10},
                               {11,12,13,14,15},
                               {16,17,18,19,20}};
    
    vector<int> result = spiralPrint(arr);

    for(int i = 0; i < result.size(); i++){
        cout<<result.at(i)<<" ";
    }
  
    return 0;
}