//Q- a array is given we have to find a subarray whose sum is 0
#include <iostream>
using namespace std;

int findSubArray(int arr[],int n){
    for(int i=0;i<n-1;i++){
        int sum=arr[i];
        for(int j=i+1;j<n;j++){
            sum= sum+ arr[j];
            if(sum==0){
                for(int k = i;k<=j;k++){
                    cout<<arr[k]<<" ";
                }
            }
        }
    }
}

//----------------------
//#to print true or false
bool hasSubArray(int arr[],int n){
    for(int i=0;i<n-1;i++){
        int sum=arr[i];
        for(int j=i+1;j<n;j++){
            sum= sum+ arr[j];
            if(sum==0){
                return true;
            }
        }
    }
    return false;
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    findSubArray(arr,n);
}
