
//#Binary Search
#include<iostream>
#include<vector>
using namespace std;

//#first and last position  of an element in an array
int printFirstposition(vector<int> arr, int target){
    int l=0,h= arr.size()-1;
    int pos=-1;
    while(l<=h){
        int mid= l+(h-l)/2;
        if(arr[mid]==target) {
            pos= mid;
             h=mid-1;}
        else if (arr[mid]>target){
            h=mid-1;
        } else {
            l=mid+1;
        }
    }
    return pos;
}
int printLastposition(vector<int> arr, int target){
    int l=0,h= arr.size()-1;
    int pos=-1;
    while(l<=h){
        int mid= l+(h-l)/2;
        if(arr[mid]==target) {
            pos= mid;
             l=mid+1;}
        else if (arr[mid]>target){
            h=mid-1;
        } else {
            l=mid+1;
        }
    }
    return pos;
}


//the array is in decreasing sorted order with only 0 and 1 and we have to count 1 present in array
int countOnes(vector<int> arr){
    int l=0,h= arr.size()-1;
    int target=1;
    int pos=-1;
    while(l<=h){
        int mid= l+(h-l)/2;
        if(arr[mid]==target) {
            pos= mid;
             l=mid+1;}
        else {
            h=mid-1;
        } 
    }
  
    return pos+1;
}

//find the peak element in a mountain array like first increase then decrease
int peakElement(vector<int> arr){
    int l=0,h=arr.size()-1;
    int element=-1;
    int pos=-1;
    while(l<=h){
        int mid= l+(h-l)/2;
        if(arr[mid]>element) {
        element= arr[mid];
        pos= mid;
        }
        else if(arr[mid]>arr[mid+1] ) h=mid-1;
        else l=mid+1;
    }
    return pos;
    //return element;
}

//Q find the element in the mountain array lie 1 2 5 6 9 3 2 ;
int binarySearch_inc(vector<int> arr,int  n,int target){
    int l=0,h=n;
    while(l<=h){
        int mid=l+(h-l)/2;
        if(target== arr[mid]) return mid;
        else if(target< arr[mid]) {
            h=mid-1;
        } else{
            l=mid+1;      
        }
    }
    return -1;
}
int binarySearch_dec(vector<int> arr,int  n,int target){
    int l=n,h=arr.size()-1;
    while(l<=h){
        int mid=l+(h-l)/2;
        if(target== arr[mid]) return mid;
        else if(target< arr[mid]) {
            l=mid+1;
        } else{
            h=mid-1;      
        }
    }
    return -1;
}

void findElementinMountainArray(vector<int> arr, int target){
    int n= peakElement(arr);
   int l= binarySearch_inc(arr,n,target);
    int f= binarySearch_dec(arr,n,target);
    cout<<l<<" "<<f;
     
}

//Ques in a sorted,strictly increasing array find the smallest element which is greater than given element (not equal)
int greatersmallestElement(vector<int> arr,int target){
    int l=0,h=arr.size()-1;
      int ans=-1;
        while(l<=h){
            int mid=l+(h-l)/2;
            if(arr[mid]>target){
                ans=mid;
                h=mid-1;
            }
            else l=mid+1;
        }
        return ans;
}

int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    //int tar; cin>>tar;
    //cout<<printFirstposition(arr,tar)<<" "<<printLastposition(arr,tar);

    //cout<< countOnes(arr);
    
    //cout<<peakElement(arr);

    // int tar;
    // cin>>tar;
    // findElementinMountainArray(arr,tar);  //#######leetcode problem 1095

    int ele;cin>>ele;
    cout<< arr[greatersmallestElement(arr,ele)];
}