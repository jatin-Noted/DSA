#include<iostream>
#include<vector>
#include<string>
#include<bits/stdc++.h>
using namespace std;

bool binarySearch(vector<vector<int>> arr, int element){
    int row = arr.size();
    int col = arr[0].size();
    int total = row * col;

    int s = 0, e = total-1;
    while(s <= e){
        int mid = (s + e)/2;
        if(arr[mid / col][mid % col] == element){
            return true;
        }
        else if(arr[mid / col][mid % col] > element){
            e = mid-1;
        }
        else{
            s = mid+1;
        }
    }
    return false;
}
 
int main (){
  
    vector<vector<int>> arr = {{1,2,3,4},
                               {6,7,8,9},
                               {11,12,13,14},
                               {16,17,18,19}};

    if(binarySearch(arr, 20)){
        cout<<"YES";
    }
    else{
        cout<<"False";
    }
  
    return 0;
}