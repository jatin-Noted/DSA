#include<iostream>
#include<vector>
#include<string>
#include<bits/stdc++.h>
using namespace std;

void transposeArray(int arr[][5], int row, int col){

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

void rotate90(int arr[][5], int Row, int Col){

    for(int i = 0; i<Row; i++){
        reverse(arr[i], arr[i] + Row);
    }

    for(int i = 0; i<Col; i++){
        for(int j = i; j<Row; j++){
            swap(arr[i][j], arr[j][i]);
        }
    }
}

void displayMatrix(int arr[][5], int row, int col)
{
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
}

 
int main (){
  
    int arr[5][5] = {{1,2,3,4,5},
                     {6,7,8,9,10},
                     {11,12,13,14,15},
                     {16,17,18,19,20},
                     {21,22,23,24,25}};

    transposeArray(arr, 5, 5);
    displayMatrix(arr, 5, 5);

    rotate90(arr, 5, 5);
    displayMatrix(arr, 5, 5);
  
    return 0;
}