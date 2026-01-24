import java.util.*;

public class MostFreqElement{
    public int freq(int arr[]){
        int max=arr[0];
     Map<Integer,Integer>map = new HashMap<>();
  for(int x:arr){
     if(map.containsKey(x)){
        int fre= map.get(x);
        map.put(x,fre+1);
        if(map.get(max)<fre+1){
            max=x;
        }

     }
     else{ map.put(x,1); }

  } return max;
    }
    public void main(String[] ags){
  Scanner sc = new Scanner(System.in);
  int n = sc.nextInt();
  int arr[]=new int[n];
  for(int i=0;i<n;i++){
    arr[i]=sc.nextInt();
  }
  System.out.print(freq(arr));

    }
}