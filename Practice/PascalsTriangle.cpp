#include <iostream>
using namespace std;
int fact(int n){
    if(n==0 || n==1) return 1;
    return n* fact(n-1);
}
int combinations(int n,int a){
    return fact(n)/(fact(a)* fact(n-a));
}

int main(){

//#First metod
int n=5;
for(int i=0;i<n;i++){
    for(int j=i;j<n;j++){
        cout<<" ";
    }
    for(int k=0;k<=i;k++){
        cout<<combinations(i,k)<<" ";
    }
    cout<<'\n';
}

//#Second method easy one and good one
    for (int i = 0; i < n; i++) {
        int val = 1;
        for (int j = 0; j <= i; j++) {
            cout << val << " ";
            val = val * (i - j) / (j + 1);
        }
        cout << endl;
    }
}