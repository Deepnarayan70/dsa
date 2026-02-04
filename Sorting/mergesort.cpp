#include<iostream>
using namespace std;

void merge(int arr[],int l,int mid,int r){
    int i=l,j=mid+1,k=0;
    int temp[r - l + 1];
    while(i<=mid && j<=r){
        if(arr[i]<arr[j]){
            temp[k++]=arr[i++];
        } else{
            temp[k++]= arr[j++];
        }
    }
    while(i<=mid){
        temp[k++]=arr[i++];
    }
    while(j<=r) {
        temp[k++]= arr[j++];
    }

    for(int i=0;i<(r-l+1) ;i++){
        arr[l+i]=temp[i];
    }
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