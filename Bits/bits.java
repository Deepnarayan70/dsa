//#In an array evry element present 3 times one element present 4 times find that number and the number is integer and 32 bits size
//int arr[13]= {4,4,4,2,3,2,3,2,3,3,15,15,15};
package DSA2;
import java.util.*;
 
public class bits {
public int func(int arr[]){
int bitarr[]=new int[32];
for(int i=0;i<arr.length;i++){
    for(int j=0;j<32;j++){
        if((arr[i]&1)==1)bitarr[j]++;
        arr[i]=arr[i]>>1;
    }
}
int ans=0;
for(int i=0;i<32;i++){
    bitarr[i]%=3;
    if(bitarr[i]==1){
    ans+=Math.pow(2,i);}
}
return ans;
}

public void main(String[] args){
    Scanner sc = new Scanner(System.in);
  int n=sc.nextInt();
  int arr[]=new int[n];
  for(int i=0;i<n;i++){
    arr[i]=sc.nextInt();
  }
  int e=func(arr);
System.out.print(e);
}
}
    