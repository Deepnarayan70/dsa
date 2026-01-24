//#In an array evry element present 3 times one element present 4 times find that number and the number is integer and 32 bits size
#include <iostream>
#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;

int main(){
    //Time complexity=  for map O(n),for sorting O(nlog(n))
    //#using map  
    int arr[13]= {4,4,4,2,3,2,3,2,3,3,15,15,15};
    unordered_map<int,int> mp;
    for(int i=0;i<13;i++){
        mp[arr[i]]++;
    }
    int a=0;
    for(auto &x : mp){
        if(x.second==4) a=x.first;
    }
 if(a==0) cout<<"all no. are not a count of 4";
 else cout<<a<<" this the the no. with 4 times";
}