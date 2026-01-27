#include <iostream>
#include <bits/stdc++.h>
using namespace std;

bool check(int arr[],int n){
    for(int i=0;i<n;i++){
        if(arr[i+1]<arr[i] ) return false;
    }
    return true;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    int max=0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        if (arr[i]>max) max=arr[i];
    }  
    if(check(arr,n)==0) cout<<"This is not sorted array";
    else cout<<"This is a sorted array";
    return 0;
}
