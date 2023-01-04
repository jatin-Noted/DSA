#include<iostream>
#include<vector>
#include<string>
#include<bits/stdc++.h>
using namespace std;

int nStairs(int num){
    if(num < 0){
        return -1;
    }
    if(num == 1 || num == 0){
        return 1;
    }
    else{
        return nStairs(num-1) + nStairs(num-2);
    }
}
 
int main (){
  
    int num = 5;
    cout<<nStairs(num);
  
    return 0;
}