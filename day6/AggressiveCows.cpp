//#https://www.geeksforgeeks.org/problems/aggressive-cows/1

#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
    int n; cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int k;
    cin>>k;
    sort(arr.begin(),arr.end());

    //#Brute force approach
    //for printing subsequence of array
    for(int i=0;i<(1<<n);i++){
        vector<int> temp;
        for(int j=0;j<n;j++){
            if((i & (1<<j))!=0){
                temp.push_back(arr[j]);
            }
        }
        if(temp.size()==k){
            for(int a:temp){
                cout<<a<<" ";
            }
            cout<<endl;
        }
    }

    //#binary search approach
}
 



// import java.util.Scanner;

// public class agressiveCow {
//     public boolean isPossible(int[]arr, int k, int min){
//         int n=arr.length;
//         int pos=arr[0];
//         int count=1;
//         for(int i=1;i<n;i++){
//             if(arr[i]-pos>=min){
//                 count++;
//                 pos=arr[i];
//                 if(count==k)return true;
//             }
//         }
//         return false;
//     }
//     public int binarySea(int[]arr,int k){
//         int l=1; int  h= arr[arr.length-1]-arr[0];
//         int ans=-1;
//         while(l<=h){
           
//             int mid=l+(h-l)/2;
//             if(isPossible(arr,k,mid)){
//                 ans=mid;
//                 l=mid+1;
//             } 
            
//             else h=mid-1;
//         }
//         return ans;
//     }
//      public void main(String[] args){
//         Scanner sc= new Scanner(System.in);
//         int n=sc.nextInt();
//         int[] arr = new int[n];
//         for(int i=0;i<n;i++){
//             arr[i]=sc.nextInt();
//         }
//         int k=sc.nextInt();

//       int ans=  binarySea(arr,k);
    
//             System.out.print(ans);
        
// }
// }