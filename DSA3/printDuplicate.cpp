//Q-Given an integer array of size n where each element lies in the range [1, n] and appears once or twice, find and print all elements that appear twice in O(n) time using constant extra space, with the output in sorted order.
// n= 5  arr- 5 3 3 4 2
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        int val= abs(arr[i])-1;
        if(arr[val]<0)  cout<< abs(arr[i])<<" ";
        else{
            arr[val]=-arr[val];
        }
    }
    return 0;
//     //----------------------------------------------------
//     int[] arr = {2, 3, 1, 1, 3};
//     int n = arr.length+1;
//     for (int i = 0; i < n-1; i++) {
//         int originalVal = arr[i] % n;
//         arr[originalVal] += n;
//     }
//     for (int i = 0; i < n-1; i++) {
//         if ((arr[i] / n) >= 2) {
//             System.out.print(i + " ");
//     }
// }

    //try to create a dinamic array and delete the array
    // int n;
    // cin>>n;
    // int arr[n];
    // for(int i=0;i<n;i++){
    //     cin>>arr[i];
    // }
    // int k; cin>>k;
    //  for(int i=0;i<n;i++){
    //     for(int j=i+1;j<n;j++){
    //         if(arr[i]+arr[j]==k) cout<<"index value of values are "<<i<< " & "<<j<<" \n";
    //     }
    // }
    //--------------------------
}