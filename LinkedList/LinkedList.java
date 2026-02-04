import java.util.*;

public class LinkedList {
 public class Node {
     int val;
     Node next;
     Node prev;
      Node(int x){val=x; next=null; prev=null;}
  };

public class deque{
    Node head;
    Node tail;
deque(){};
 deque(Node head){ this.head=head; };
 public boolean isEmpty(Node head){
    return head==null;
 }
  public void push(int data){
      Node node= new Node(data);
    if(isEmpty(head)){
      head=node;
      tail=head;
    } 
    else{
    //    Node temp=head;
    //    while(temp.next!=null){
    //     temp=temp.next;
    //    }
    //   temp.next=node;
    //   node.prev=temp;
    //   tail=node;
      node.prev=tail;
      tail=node;
    }    
  }

  public void pop(){
     if(head.next!=null){
        head=head.next;  }  
    else{
        head=null;
        tail=null;
    } 
  }

  public void popback(){
     tail=tail.prev;
     tail.next=null;
  }
  public Node getHead(){return head;}

    } 
public void main(String[] agrs){
  Scanner sc = new Scanner(System.in);
  int data=sc.nextInt();
  deque dq= new deque();
  dq.push(data);
  int d=sc.nextInt();
  dq.push(d);
  dq.popback();
Node head=dq.getHead();
while(head!=null){
    System.out.print(head.val+" ");
    head=head.next;
}
}

}