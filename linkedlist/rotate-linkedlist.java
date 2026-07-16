import java.io.*;
import java.util.*;

class Node{
    int data;
    Node next;

    Node(int data){
        this.data = data;
        next = null;
    };
}

public class main{
    public static Void main(string[] agrs){
        Node head = new Node(10);
        head.next = new Node(20);
        system.out.println(head.data);
        system.out.println(head.next.data);
    }
   
}