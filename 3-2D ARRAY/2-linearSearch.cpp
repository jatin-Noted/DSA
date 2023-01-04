#include<iostream>
#include<vector>
#include<string>
#include<bits/stdc++.h>
using namespace std;

bool linearSearch(int arr[][3], int element, int row, int col){
    for(int i = 0; i<row; i++){
        for(int j = 0; j<col; j++){
            if(arr[i][j] == element){
                return true;
            }
        }
    }
    return false;
}
 
int main (){
  
    int arr[3][3] = {{1,2,3},
                     {4,5,6},
                     {7,8,9}};

    if(linearSearch(arr, 9, 3, 3)){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
    

  
    return 0;
}