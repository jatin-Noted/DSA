#include<iostream>
#include<vector>
#include<string>
#include<bits/stdc++.h>
using namespace std;


bool checkEqual(int * a, int * b){
    for(int i = 0; i< 26; i++){
        if(a[i] != b[i]){
            return false;
        }
    }
    return true;
}
bool checkPermutaion(string str1, string str2){
    //Step 1:- Create a window for Str1...

    int arr1[26] = {0};
    for(int i = 0; i < str1.size(); i++){
        int index =  str1.at(i) - 'a';
        arr1[index]++;
    }

    /*Step 2:- 1. Create a frame for Str2 to fit the window...
               2. In that Frame, make a portion whose size is same as the window so that
                  it can be compared to window...
               */

    int windowSize = str1.size();
    int windowFrameSize = str2.size();
    int i = 0; 

    int arr2[26] = {0};

    while(i < windowSize && i < windowFrameSize){ 
        int index = str2.at(i) - 'a';
        arr2[index]++;
        i++;
    }

    if(checkEqual(arr1, arr2)){ // Checking for the first window...
        return true;
    }


    /*Step 3:- Keep on incrementing the window Portion(whose size is same as window size) of window frame by 1 character place
               and remove the old character from that portion...  */

    while(i < windowFrameSize){
        int newIndex = str2.at(i) - 'a'; // "i" will be standing at new character position...
        arr2[newIndex]++ ;

        int oldIndex = str2.at(i - windowSize) - 'a'; /* suppose windowSize = 3 & 'i' is at index 7(or position 7)=>old character index = 4
                                                        So, when the portion is moved, we have to remove the very 1st character of the portion(i.e old character) whose position will be "i - windowSize i.e 6 - 3 = 4"  */
        arr2[oldIndex]-- ; 

        if(checkEqual(arr1, arr2)){
            return true;
        }

        i++;
    }
    return false;
}
 
int main (){
  
    string s1 = "abc";
    string s2 = "eabhgfdcafg";

    if(checkPermutaion(s1, s2)){
        cout<<"Yes";
    }
    else{
        cout<<"No";
    }
  
    return 0;
}