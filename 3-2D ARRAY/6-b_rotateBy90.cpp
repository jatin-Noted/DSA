#include<iostream>
#include<vector>
#include<string>
#include<bits/stdc++.h>
using namespace std;

void transposeArray(vector<vector<int>> & arr){

    int row = arr.size();
    int col = arr[0].size();

    for(int i = 0; i < row; i++){
        for(int j = i; j < col; j++){
            if(i != j){
                int temp = arr[i][j];
                arr[i][j] = arr[j][i];
                arr[j][i] = temp;
            }
        }
    }
}

void rotate90(vector<vector<int>> & arr){

    int row = arr.size();
    int col = arr[0].size();

    for(int i = 0; i < row; i++){
        reverse(arr[i].begin(), arr[i].end());
    }

    for(int i = 0; i<col; i++){
        for(int j = i; j<row; j++){
            swap(arr[i][j], arr[j][i]);
        }
    }
}

void displayMatrix(vector<vector<int>> arr)
{
    int row = arr.size();
    int col = arr[0].size();

    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
}

 
int main (){
  
    vector<vector<int>> arr = {{1,2,3,4},
                               {6,7,8,9},
                               {11,12,13,14},
                               {16,17,18,19}};

    transposeArray(arr);
    displayMatrix(arr);

    rotate90(arr);
    displayMatrix(arr);
  
    return 0;
}