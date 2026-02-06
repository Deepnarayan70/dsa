#include<iostream>
#include<vector>
using namespace std;

int QuickSort(vector<int> &arr,int l,int r){
    int x=l-1;
    int pivot=arr[r];
    for(int i=l;i<r;i++){
        if(arr[i]<pivot){
            x++;
            swap(arr[x],arr[i]);
        }

    }
    swap(arr[x+1],arr[r]);
    return x+1;
}
int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int l=0,r=n-1;
    QuickSort(arr,l,r);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

}