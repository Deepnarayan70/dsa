#include <iostream>
#include <bits/stdc++.h>
using namespace std;
 
 
int main(){
//#Pointer & Address
//bins and chunks to learn about memory allocation
//     int x=10;
//     cout<<"address of x: "<< &x<<'\n';
//     int *ptr= &x;
//     cout<<"address of ptr: "<<&ptr<<'\n';
//     cout<<"value of/inside ptr : "<<ptr<<'\n';
//     cout<< "value at the address of ptr is "<< *ptr <<"\n";

//     int arr[5]={10,20,30,40,50};
//     cout<<arr;
// int *ptr_arr= arr;
// delete arr;

//Q- create an array of size n find out most frequent word if there are more same frequent word then print last most right one 
 
 int n;
    cin >> n;

    int* arr = new int[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    unordered_map<int, int> freq;

    int max_freq = 0;
    int answer = arr[0];

    for (int i = 0; i < n; i++) {
        freq[arr[i]]++;

        // strictly greater OR equal (for rightmost)
        if (freq[arr[i]] >= max_freq) {
            max_freq = freq[arr[i]];
            answer = arr[i];
        }
    }

    cout << answer << endl;

    delete[] arr;
    return 0;
}