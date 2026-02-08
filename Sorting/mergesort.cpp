#include<iostream>
using namespace std;

void merge(int arr[],int l,int mid,int r){
    int i=l, j=mid+1,k=0;

    // direct change in main array not making any temporary array
    while(i<=mid && j<=r){
        if(arr[i]<arr[j]){
            i++;
        } else{
            int temp=arr[j];
            int k=j;
            while(k>i){
                arr[k]=arr[k-1];
                k--;
            }
            arr[i]=temp;
            i++;
            mid++;
            j++;
        }
    }
    
    // uisng temperay array to store sorted elements
    // int temp[r - l + 1];
    // while(i<=mid && j<=r){
    //     if(arr[i]<arr[j]){
    //         temp[k++]=arr[i++];
    //     } else{
    //         temp[k++]= arr[j++];
    //     }
    // }
    // while(i<=mid){
    //     temp[k++]=arr[i++];
    // }
    // while(j<=r) {
    //     temp[k++]= arr[j++];
    // }

    // for(int i=0;i<(r-l+1) ;i++){
    //     arr[l+i]=temp[i];
    // }
}

void sort(int arr[], int l,int r){
    if(l>=r)
        return ;
    
    int mid=l+(r-l)/2;
    sort(arr,l,mid);
    sort(arr,mid+1,r);
    merge(arr,l,mid,r);

}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr,0,n-1);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}



// //GFG Ques
// Count Inversions
// Difficulty: MediumAccuracy: 16.93%Submissions: 740K+Points: 4
// Given an array of integers arr[]. You have to find the Inversion Count of the array. 
// Note : Inversion count is the number of pairs of elements (i, j) such that i < j and arr[i] > arr[j].

// Examples:
// Input: arr[] = [2, 4, 1, 3, 5]
// Output: 3
// Explanation: The sequence 2, 4, 1, 3, 5 has three inversions (2, 1), (4, 1), (4, 3).
// Input: arr[] = [2, 3, 4, 5, 6]
// Output: 0
// Explanation: As the sequence is already sorted so there is no inversion count.
// Input: arr[] = [10, 10, 10]
// Output: 0
// Explanation: As all the elements of array are same, so there is no inversion count.

// class Solution {
//   public:
//     int merge(vector<int> &arr,int l,int r,int mid){
//         int i=l,j=mid+1;
//         int count =0;
//         vector<int> temp;
//         while(i<=mid && j<=r){
//             if(arr[i]<=arr[j]) {
//                 temp.push_back(arr[i++]);
//             } else{
//                 temp.push_back(arr[j++]);
//                 count+= (mid-i+1);
//             }
//         }
//         while(i<=mid){
//         temp.push_back(arr[i++]);
//         }
//         while(j<=r) {
//             temp.push_back(arr[j++]);
//         }

//         for(int k=0;k<temp.size() ;k++){
//             arr[l+k]=temp[k];
//         }
//         return count;
//     }
//     int mergecount(vector<int> &arr,int l,int h){
//         if(l>=h) return 0;
//         int count=0;
//         int mid= l+(h-l)/2;
//         count+= mergecount(arr,l,mid);
//         count+= mergecount(arr,mid+1,h);
//         count+= merge(arr,l,h,mid);
//         return count;
//     }
//     int inversionCount(vector<int> &arr) {
//         // Code Here
//         return mergecount(arr,0,arr.size()-1);
//     }
// };


//sorting,link list ,sliding widow
