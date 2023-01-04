#include<iostream>
#include<vector>
#include<string>
#include<bits/stdc++.h>
using namespace std;

vector<int> rowSum(vector<vector<int>> arr){
    int row = arr.size();
    int col = arr[0].size();

    vector<int>res;
    int sum = 0;

    for(int i = 0; i<row; i++){
        sum = 0;
        for(int j = 0; j<col; j++){
            sum += arr[i][j];
        }
        res.push_back(sum);
    }
    return res;
}

vector<int> colSum(vector<vector<int>> arr){
    int row = arr.size();
    int col = arr[0].size();

    vector<int>res;
    int sum = 0;

    for(int i = 0; i<col; i++){
        sum = 0;
        for(int j = 0; j<row; j++){
            sum += arr[j][i];
        }
        res.push_back(sum);
    }
    return res;
}

int largestRowSum(vector<vector<int>>arr){
    vector<int>ans = rowSum(arr);

    int max = INT_MIN;
    for(int i = 0; i<ans.size(); i++){
        if(ans.at(i) > max){
            max = ans[i];
        }
    }
    return max;
}

int largestColSum(vector<vector<int>>arr){
    vector<int>ans = colSum(arr);

    int max = INT_MIN;
    for(int i = 0; i<ans.size(); i++){
        if(ans.at(i) > max){
            max = ans[i];
        }
    }
    return max;
}

 
int main (){
  
    vector<vector<int>> arr = {{1,2,3,4,5},
                               {6,7,8,9,10},
                               {11,12,13,14,15}};

    cout<<arr.size()<<" "<<arr[0].size()<<endl;
    
    vector<int>ans1 = rowSum(arr);
    for(int i = 0; i<ans1.size(); i++){
        cout<<ans1.at(i)<<" ";
    }
    cout<<endl;

    vector<int>ans2 = colSum(arr);
    for(int i = 0; i<ans2.size(); i++){
        cout<<ans2.at(i)<<" ";
    }
    cout<<endl;

    int largeRowSum = largestRowSum(arr);
    int largeColSum = largestColSum(arr);

    cout<<largeRowSum<<" "<<largeColSum<<endl;
  
    return 0;
}