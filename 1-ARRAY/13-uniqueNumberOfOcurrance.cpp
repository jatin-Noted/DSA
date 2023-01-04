#include<iostream>
#include<vector>
#include<string>
#include<bits/stdc++.h>
using namespace std;

bool uniqueOcc(int * arr, int n){
    sort(arr, arr+n);

    vector<int>result;
    
    for (int i = 0; i < n; i++)
    {
        if (i + 1 < n)
        {   
                int j = i + 1;
                while (arr[i] == arr[j] && j <= n)
                {
                    j++;
                }
                result.push_back(j-i);
                i = j-1; 
            
        }
    } 
    if(arr[n-1] != arr[n-2]){
        result.push_back(1);
    }

    sort(result.begin(), result.end());

    for(int i= 0; i<result.size(); i++){
        if(i+1 < result.size()){
            if(result[i] == result[i+1]){
                return false;
            }
        }
    } 
    return true;
}
    

 
int main (){
  
    int arr[] = {3, 3, 3, 3, 3, 3, 4, 4, 4, 7, 7, 7, 7, 10};
    int n = sizeof(arr) / sizeof(int);

    if(uniqueOcc(arr, n)){
        cout<<"Yes";
    }
    else{
        cout<<"No";
    }

    return 0;
}