//find two sum value in sorted array

#include<iostream>
using namespace std;

int func(int arr[],int n,int target){
    int i=0,j=n-1;
    while(i<j){
    int sum=arr[i]+arr[j];
    if(sum==target){
        cout<<i<<" "<<j<<"\n";
        i++;
    }
    else if(sum<target){
      i++;
    }
    else j--;
        } 

}
int main(){

    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int k;
    cout<<"Enter target value: ";
    cin>>k;
    func(arr,n,k);

}
    