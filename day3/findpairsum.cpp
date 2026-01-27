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
    