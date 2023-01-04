#include<iostream>
#include<vector>
#include<string>
#include<bits/stdc++.h>
using namespace std;

int romanValue(char ch){
    switch(ch){
        case 'I': return 1;
                break;
        case 'V': return 5;
                break;
        case 'X': return 10;
                break;
        case 'L': return 50;
                break;
        case 'C': return 100;
                break;
        case 'D': return 500;
                break;
        case 'M': return 1000;
                break;

        default: return -100;
                break;
    }
}

int romanToInteger(string str){
    int result = 0;
    for(int i = 0; i<str.size(); i++){

        int val1 = romanValue(str.at(i));

        if(i+1 < str.size()){
            int val2 = romanValue(str.at(i+1));
            if(val1 > val2){
                result += val1;
            }
            else{
                result += val2 - val1;
                i++;
            }
        }
        else{
            result += val1;
        }
        
    }
    return result;
}
 
int main (){
  
    string roman = "XVI";
    int ans = romanToInteger(roman);

    cout<<ans;
  
    return 0;
}