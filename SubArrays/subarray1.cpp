//#good one
//#Ques to find the largest subarray whose count of 0&1 are equals eg- 0 0 1 0 1 0 0 0 1 1 1 , we can use putting neg- one but not use now
#include<iostream>
#include <vector>
#include<unordered_map>
using namespace std;
void largestSubArray(vector<int> arr){
    unordered_map<int,int> mp;
    int ans=0;
    int c0=0,c1=0;
    mp[0]= -1;
    for(int i=0;i<arr.size();i++){
        if(arr[i]==0) c0++;
        else c1++;

        int diff= c1-c0;
        if(mp.find(diff)!= mp.end()){
            if(i-mp[diff]>ans){
                ans= i-mp[diff];
            }
        } else{
            mp[diff]=i;
        }
    }
    cout<<ans;

    
}
void countTotalSubArrays(vector<int> arr){

//in java
// public int fun(int[]nums){
//    int count=0;
// int i=0; int j=0;
// Set<Integer>st = new HashSet<>();
// for(int k=0;k<nums.length;k++){
//     if(nums[k]==0)i++;
//     else j++;
//     int d=j-i;
//    if(st.contains(d)){
    
//    count++;
//    }
//    else st.add(d);
  
// }
// return count;

// }
}

int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    largestSubArray(arr);
    countTotalSubArrays(arr);
 
}

//#in java
// import java.util.*;

// public class largestSubarray {
// public int fun(int[]nums){
//    int max=0;
// int i=0; int j=0;
// Map<Integer,Integer>map = new HashMap<>();
// map.put(0,-1);
// for(int k=0;k<nums.length;k++){
//     if(nums[k]==0)i++;
//     else j++;
//     int d=j-i;
//    if(map.containsKey(d)){
//     max=Math.max(max,(k-map.get(d)));
//    }
//    else map.put(d,k);
  
// }

// return max;

// }

//      public void main(String[] args){
//         Scanner sc = new Scanner(System.in);
//         int n=sc.nextInt();
//         int arr[]=new int[n];
//         for(int i=0;i<n;i++){
//             arr[i]=sc.nextInt();
//         }
//         System.out.print(fun(arr));
        
// }
// }