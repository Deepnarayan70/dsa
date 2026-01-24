#include<iostream>
using namespace std;
int main(){
    int arr[]={1,5,10,2,51,62,11,52,33,5};
    // for(int i=0;i<10;i++){
    //     for(int j=i+1;j<10;j++){
    //         if(arr[i]>arr[j]) {
    //             int temp= arr[j];
    //             arr[j]=arr[i];
    //             arr[i]=temp;
    //         }
    //     }
    // }
    // for(int i=0;i<10;i++){
    //     cout<<arr[i]<<" ";
    // }
    //-------------------------------------------------------
    int[] arr = {2, 3, 1, 1, 3};
    int n = arr.length+1;
    for (int i = 0; i < n-1; i++) {
        int originalVal = arr[i] % n;
        arr[originalVal] += n;
    }
    for (int i = 0; i < n-1; i++) {
        if ((arr[i] / n) >= 2) {
            System.out.print(i + " ");
    }
}
    //--------------------------------------------------------
//         int n = 10;

//     for (int i = 0; i < n - 1; i++) {
//         for (int j = 0; j < n - i - 1; j++) {
//             if (arr[j] > arr[j + 1]) {
//                 int temp = arr[j];
//                 arr[j] = arr[j + 1];
//                 arr[j + 1] = temp;
//             }
//         }
//     }

//     for (int i = 0; i < n; i++)
//         cout << arr[i] << " ";
// }