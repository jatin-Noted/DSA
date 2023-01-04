#include<iostream>
#include<vector>
#include<string>
#include<bits/stdc++.h>
using namespace std;

void sayDigit(int num){
    string str[10] = {"zero", "One", "two", "three", "four", "five", "six", "seven", "eight", "nine"};

    if(num == 0){
        return;
    }

    int digit = num % 10;
    num /= 10;

    sayDigit(num);
    cout<<str[digit]<<" ";
}
 
int main (){
  
    int num = 1001003456;
    sayDigit(num);
  
    return 0;
}