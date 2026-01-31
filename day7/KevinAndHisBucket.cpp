//Binary search
//coding ninja problem
#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>
bool ismin(vector<int> arr,int mid,int m){
    int rem=0;
    for(int i:arr){
        if(i>=mid) {
            rem+= i-mid;
            if(rem>=m) return true;
        }
    }
    return false;
}
int main(){
    int n,m;
    cin>>n;
    cin>>m;
    vector<int> arr(n);
    for(int i=0;i<n;i++) cin>>arr[i];
    int ans=-1;
    int l=1;
    int h= *max_element(arr.begin(),arr.end());
    while(l<=h){
        int mid=l+(h-l)/2;
        if(ismin(arr,mid,m)){
            ans=mid;
            l=mid+1;
        } else h=mid-1;
    }
    cout<<ans;

}