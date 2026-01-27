#include<iostream>
#include<vector>
using namespace std;
//#Stable sorting
//dnf is unstable sort
void dutchNationalFlag(vector<int>& arr){
    int low=0,mid=0,high= arr.size()-1;
    while(mid<=high){
        if(arr[mid]==0) swap(arr[low++],arr[mid++]);
        else if (arr[mid]==1) mid++;
        else {
            swap(arr[mid],arr[high--]);
        }
    }
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    // 1 1 0 0 2 2 -> DNF (Dutch National Flag Algorithm) it is unstable sort
    // 0 1 2 3 4 5

    // 0 0 1 1 2 2
    // 2 3 0 1 4 5

    vector<int> arr={0,0,2,2,1,0,2,1,0,1,1};
    dutchNationalFlag(arr);

    }