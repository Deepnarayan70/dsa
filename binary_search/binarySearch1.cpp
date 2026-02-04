#include<iostream>
#include<vector>

using namespace std;
int binarySearch(vector<int> arr,int n,int target){
    int l=0,h=n-1,mid=l +(h-l)/2;
    while(l<=h){
        mid=l+(h-l)/2;
        if(target== arr[mid]) return mid;
        else if(target< arr[mid]) {
            h=mid-1;
        } else{
            l=mid+1;      
        }
    }
    return 0;
}
int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int target;
    cin>>target;
    cout<< binarySearch(arr,n,target);

}