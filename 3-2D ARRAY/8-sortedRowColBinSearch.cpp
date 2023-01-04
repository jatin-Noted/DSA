#include<iostream>
#include<vector>
#include<string>
#include<bits/stdc++.h>
using namespace std;

bool BinSearch(vector<vector<int>>arr, int element){
    int row = arr.size();
    int col = arr[1].size();

    int rowInd = 0, colInd = col-1;

    while(rowInd < row && colInd >= 0){
        if(arr[rowInd][colInd] == element){
            return true;
        }
        else if(arr[rowInd][colInd] > element){
            colInd--;
        }
        else{
            rowInd++;
        }
    }
    return false;
}
 
int main (){
  
    vector<vector<int>> arr = {{1,2,3,4},
                               {6,7,8,9},
                               {11,12,13,14},
                               {16,17,18,19}};

    if(BinSearch(arr, 98)){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
  
    return 0;
}