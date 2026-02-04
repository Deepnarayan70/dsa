//#Binary Search
//Q- a sorted rotated array is given we have to find a variable
#include<iostream>
using namespace std;
#include<vector>

int findArrayInRotatedArray(vector<int> arr,int target){
    int s=0,e= arr.size()-1;
    while(s<=e){
        int mid=s+(e-s)/2;
        if(arr[mid]==target) return mid;
        else if(arr[mid]>arr[e]){
                if(arr[s]<= target && arr[mid]> target) e=mid-1;
                else s=mid+1;
        } else{
            if(target>arr[mid] && target<=arr[e] ) s=mid+1;
            else e=mid-1;
        }
    }
    return -1;
}

int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++) {cin>>arr[i];}
    int target;
    cin>>target;
    cout<< findArrayInRotatedArray(arr,target);
}