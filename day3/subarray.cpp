//Q- a array is given we have to find a subarray whose sum is 0
//use of SET
#include <iostream>
#include <set>
using namespace std;

int findSubArray(int arr[],int n){
    //for O(n^2) complexity
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

bool havingSubArray(int arr[],int n){
    //for O(n) Complexity;
    set<int> s;
    int sum=0;
    for(int i=0;i<n;i++){
        sum+= arr[i];
        if(s.find(sum)!= s.end()) return true;
        s.insert(sum);
    }
    return false;
}

int countSubArray(int arr[],int n){
    //for O(n) Complexity;
    set<int> s;
    int sum=0;
    int count=0;
    for(int i=0;i<n;i++){
        sum+= arr[i];
        if(sum==0) count++;
        else if(s.find(sum)!= s.end()) count++;
        else s.insert(sum);
    }
    return count;
    //????????
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<countSubArray(arr,n);
}
