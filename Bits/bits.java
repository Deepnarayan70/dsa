//#In an array evry element present 3 times one element present 4 times find that number and the number is integer and 32 bits size
//int arr[13]= {4,4,4,2,3,2,3,2,3,3,15,15,15};
import java.util.*;
 
public class bits {
public int func(int arr[]){
int bitarr[]=new int[32];
for(int i=0;i<arr.length;i++){
    for(int j=0;j<32;j++){
        if((arr[i]&1)==1)bitarr[j]++;
        arr[i]=arr[i]>>1;
    }
}
int ans=0;
for(int i=0;i<32;i++){
    bitarr[i]%=3;
    if(bitarr[i]==1){
    ans+=Math.pow(2,i);}
}
return ans;
}

public void main(String[] args){
    Scanner sc = new Scanner(System.in);
  int n=sc.nextInt();
  int arr[]=new int[n];
  for(int i=0;i<n;i++){
    arr[i]=sc.nextInt();
  }
  int e=func(arr);
System.out.print(e);
}
}
    












// //#https://www.geeksforgeeks.org/problems/aggressive-cows/1

// #include<iostream>
// #include<vector>
// #include<algorithm>

// using namespace std;

// int maximize_the_min_distance(int arr[], int n, int k)
// {
//     int ans = INT_MIN;

//     for (int i = 1; i < (1 << n); i++)
//     {
//         int count = 0;
//         int min_dis = INT_MAX;
//         int last = -1;
    
//         for (int j = 0; j < (1 << n); j++)
//         {
//             if ((i & (1 << j)) != 0)
//             {   
//                 count++;
//                 if(last == -1){
//                     last = arr[j];
//                 }
//                 else{
//                     min_dis = min(min_dis, arr[j] - last);
//                     last = arr[j];
//                 }
//             }
//         }

//         if(count == k && min_dis != INT_MAX){
//             ans = max(ans, min_dis);
//         }
//     }
//     return ans;
// }

// //#binary search approach
// bool isPossible(vector<int>arr, int n, int d, int k){
//      int count = 1;
//      int last_pos = arr[0];

//      for(int i = 1; i < n; i++){
//         if(arr[i] - last_pos >= d){
//             count++;
//             last_pos = arr[i];
//         }

//         if(count == k){
//             return true;
//         }
//      }
//      return false;   
// }

// // O(n*log2(10^9))
// int agg_cows(vector<int> arr, int n, int k){
//     int s = 1;
//     int e = arr[n - 1] - arr[0];
//     int ans = -1;

//     while(s <= e){
//         int mid = s + (e - s) / 2;

//         if(isPossible(arr, n, mid, k)){
//             s = mid + 1;
//             ans = mid;
//         }
//         else{
//             e = mid - 1;
//         }
//     }
//     return ans;
// }


// int main(){
//     int n; cin>>n;
//     vector<int> arr(n);
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     int k;
//     cin>>k;
//     sort(arr.begin(),arr.end());

//     //cout << maximize_the_min_distance(arr, n, k) << '\n';
//     // //#Brute force approach
//     // //for printing subsequence of array
//     // for(int i=0;i<(1<<n);i++){
//     //     vector<int> temp;
//     //     for(int j=0;j<n;j++){
//     //         if((i & (1<<j))!=0){
//     //             temp.push_back(arr[j]);
//     //         }
//     //     }
//     //     if(temp.size()==k){
//     //         for(int a:temp){
//     //             cout<<a<<" ";
//     //         }
//     //         cout<<endl;
//     //     }
//     // }


//     //#binary search approach
//     cout<< agg_cows(arr,n,k);
// }
 



// // import java.util.Scanner;

// // public class agressiveCow {
// //     public boolean isPossible(int[]arr, int k, int min){
// //         int n=arr.length;
// //         int pos=arr[0];
// //         int count=1;
// //         for(int i=1;i<n;i++){
// //             if(arr[i]-pos>=min){
// //                 count++;
// //                 pos=arr[i];
// //                 if(count==k)return true;
// //             }
// //         }
// //         return false;
// //     }
// //     public int binarySea(int[]arr,int k){
// //         int l=1; int  h= arr[arr.length-1]-arr[0];
// //         int ans=-1;
// //         while(l<=h){
           
// //             int mid=l+(h-l)/2;
// //             if(isPossible(arr,k,mid)){
// //                 ans=mid;
// //                 l=mid+1;
// //             } 
            
// //             else h=mid-1;
// //         }
// //         return ans;
// //     }
// //      public void main(String[] args){
// //         Scanner sc= new Scanner(System.in);
// //         int n=sc.nextInt();
// //         int[] arr = new int[n];
// //         for(int i=0;i<n;i++){
// //             arr[i]=sc.nextInt();
// //         }
// //         int k=sc.nextInt();

// //       int ans=  binarySea(arr,k);
    
// //             System.out.print(ans);
        
// // }
// // }