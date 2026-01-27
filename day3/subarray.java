import java.util.*;

public class subarray{ 
public int func(int[]arr){
       int sum=0; int n=arr.length;
       Map<Integer,Integer>map = new HashMap<>();  
       map.put(0,1);
       int count=0;
       for(int i=0;i<n;i++){
        sum+=arr[i];
      
         if(map.containsKey(sum)){
          count++;
          map.put(sum,map.getOrDefault(sum,0)+1);
         }
         map.put(sum,1);
       }                              
       return count;
      }

public void main(String[]s){
    Scanner sc = new Scanner(System.in);
      int n=sc.nextInt();
  int arr[]=new int[n];
  for(int i=0;i<n;i++){
    arr[i]=sc.nextInt();
  
  }  
  System.out.print(func(arr));
    }

}

