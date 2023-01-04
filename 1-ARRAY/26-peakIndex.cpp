#include<iostream>
// #include<vector>
// #include<string>
// #include<bits/stdc++.h>
using namespace std;

int peakInd(int * arr, int n){
    int s = 0, e = n-1;

    while(s < e){

        int mid = s + (e - s) / 2;

        if(arr[mid] < arr[mid+1]){
            s = mid + 1;
        }
        else{
            e = mid;
        }
    }
    return s;
}

int peakInd_2(int * arr, int n){ //learn this one...
    int s = 0, e = n-1;

    while(s <= e){

        int mid = s + (e - s) / 2;

        if(arr[mid] < arr[mid+1]){
            s = mid + 1;
        }
        else{
            e = mid - 1;
        }
    }
    return s;
}

int peakInd_3(int * arr, int n){
    int s = 0, e = n-1;
    int ans = -1;

    while(s <= e){

        int mid = (s + e) / 2;

        if(arr[mid] > arr[mid-1]){
            s = mid + 1;
            ans = mid;
        }
        else{
            e = mid-1;
        }
    }
    return ans;
}

int main (){
  
    int arr[] = {5, 10, 20, 17, 15, 14};
    int n = sizeof(arr)/sizeof(int);

    int peak = peakInd(arr, n);
    cout<<peak<<endl;

    int peak_2 = peakInd_2(arr, n);
    cout<<peak_2<<endl;

    int peak_3 = peakInd_3(arr, n);
    cout<<peak_3<<endl;
  
    return 0;
}