#include<iostream>
#include<vector>
#include<string>
#include<bits/stdc++.h>
using namespace std;

char getMax(string str){
    int arrLower[26] = {0};
    int arrUpper[26] = {0};
    char ch;
    int num = 0;

    for(int i = 0; i < str.size(); i++){
        if(str.at(i) >= 'a' && str.at(i) <= 'z'){
            ch = str.at(i);
            num = ch - 'a';
            arrLower[num]++;
        }
        else if(str.at(i) >= 'A' && str.at(i) <= 'Z'){
            ch = str.at(i);
            num = ch - 'A';
            arrUpper[num]++;
        }
        else{
            return '-';
        }
    }

    int maxLower = -1, maxUpper = -1, ansLower = 0, ansUpper = 0;
    for(int i = 0; i < 26; i++){
        if(arrLower[i] > maxLower){
            maxLower = arrLower[i];
            ansLower = i;
        }
    }

    for(int i = 0; i < 26; i++){
        if(arrUpper[i] > maxUpper){
            maxUpper = arrUpper[i];
            ansUpper = i;
        }
    }

    if(maxLower > maxUpper){
        char resultLower = 'a' + ansLower;
        return resultLower;
    }
    else if(maxLower < maxUpper){
        char resultUpper = 'A' + ansUpper;
        return resultUpper;
    }  
    else{
        return -1;
    }
}
 
int main (){
  
    string str = "AAAAAbbccd$d";
    char ch = getMax(str);
    cout<<ch;
  
    return 0;
}