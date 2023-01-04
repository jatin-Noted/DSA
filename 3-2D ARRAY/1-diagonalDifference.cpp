#include<iostream>
#include<vector>
#include<string>
#include<bits/stdc++.h>
using namespace std;

int diagonalDifference_1(int arr[][3], int Row, int Col){
    int row = Row;
    int col = Col;

    int diagonalSum_1 = 0, diagonalSum_2 = 0;
    
    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            if(i == j){
                diagonalSum_1 += arr[i][j];
            }
        }
    }


    // for(int i = 0; i < row; i++){
    //     for(int j = 0; j < col; j++){
    //         if(i == col - j - 1){
    //             diagonalSum_2 += arr[i][j];
    //         }
    //     }
    // }

    for(int i = 0; i < row; i++){
        for(int j = col-1; j >= 0; j--){
            if(i == col - j - 1){
                diagonalSum_2 += arr[i][j];
            }
        }
    }

    int diff = abs(diagonalSum_1 - diagonalSum_2);

    return diff;
}

int diagonalDifference_2(int arr[][3], int n){
    int diagonalSum_1 = 0, diagonalSum_2 = 0;

    for(int i= 0; i<n; i++){

        diagonalSum_1 += arr[i][i];

        diagonalSum_2 += arr[i][n-i-1];
        
    }

    int diff = abs(diagonalSum_1 - diagonalSum_2);
    return diff;
}

int main (){

    int row = 3;
    int col = 3;
    int arr[3][3] = {0};


    cout<<"Enter elements: "<<endl;

    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            cin>>arr[i][j];
        }
    }

    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    int res = diagonalDifference_1(arr, row, col);
    cout<<res<<endl;

    int n = 3;

    int res2 = diagonalDifference_2(arr, n);
    cout<<res2;
  
    return 0;
}