#include<iostream>
#include<vector>    
using namespace std;

bool isPrime(int n){
    if(n<=1) return false;
    if(n%2==0){
        return false;
    }
    //17
    //2*8,3*5,4*4,5*3,6*2
    for(int i=3;i*i<=n;i+=2){
        if(n%i==0) {
            return false;
        }
    }
    return true;
}
void printPrimePairs(int n){
    //Q- find the pair pair of prime whose difference is prime and will be less then the no.
    for(int i=3;i<=n-6;i++){
        if(isPrime(i)==1 && isPrime(i+6)) cout<< i<<" "<< i+6<<"\n";
    }
}

///  //////////
 
void sieve(int n){
        //create an array n+1 for prime no.s and non primes
    //O(sqrt(n))

    vector<bool> arr(n+1,true);
    arr[0]=false;
    arr[1]=false;
    for(int i=2;i*i<=n;i++){
        if(arr[i]==true){
            for(int j=i*i;j<=n;j+=i){
                arr[j]=false;
            }
        }
    }
    for(int i=0;i<=n;i++){
        if(arr[i]==true) cout<< i<<" ";
    }
    for(int i=0;i<=n-6;i++){
        if(arr[i]==true && arr[i+6]==true){
            cout<< i<<" "<< i+6<<"\n";
        }
    }

    // bool *arr=new bool[n+1];
    // for(int i=0;i<=n;i++){
    //     arr[i]=true;
    // }
    // arr[0]=false,arr[1]=false;
    // for(int i=2;i*i<=n;i++){
    //     if(arr[i]==true){
    //         for(int j=i*i;j<=n;j+=i){
    //             arr[j]=false;
    //         }
    //     }
    // }
    // for(int i=0;i<=n;i++){
    //     if(arr[i]==true) cout<< i<<" ";
    // }
}

int main(){
    int n;
    cin>>n;
   // cout<< isPrime(n);
    //printPrimePairs(n);



}