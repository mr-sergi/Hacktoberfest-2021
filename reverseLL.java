/* input 1 -> 2 -> 3-> 4-> 5-> null     from m=2 n=4
output  1 -> 4 -> 3 -> 2-> 5 -> null  */

import java.io.*;

class Node
{
    int data;
    Node next;
}

class LinkedList
{
    Node head = null;

    void insert(int data)
    {
        Node n = new Node();
        n.data=data;
        n.next=null;
        
    
        if(head==null) head =n; 

        else
        {
            Node no = head;
            while(no.next!=null)
            no=no.next;

            no.next=n;
        }
    }

        void reverse_whole()
        {
            Node currento, prevo, nextto;
            prevo=nextto= null;
            currento= head;
        

            while(currento !=null) 
            {
                nextto=currento.next;
                currento.next=prevo;
                prevo=currento;
                currento=nextto;
        
            }
            head= prevo;

        }

         void reverse(int m, int n)
        {
            int c=1;
          //  int c2= 1;
            Node a1=head;
            Node a2= head;
          //  Node a3= head;

            while(c<m)
            {
                a2 = a1;
                a1 =a1.next;
                c++;
            }
          /*  while(c2<=n)
         
                a3=a3.next;            ===    ALTERNATIVE
                c2++;

            }    */

            Node current, prev, nextt;
            prev= null;   // prev= a3;
            nextt= null;
            current= a1;
            int cc=0;

            while(cc< (n-m)+1)
            {
                nextt=current.next;
                current.next=prev;
                prev=current;
                current=nextt;
                cc++;
            }

           a2.next=prev;
           a1.next=current;  // if alternatuve used, this statement not reqd

          

        }


        void display()
    {
        Node x= head;
        while(x!=null)
        {
            System.out.print(x.data + " ");
                                                                                                 //  System.arraycopy(src, srcPos, dest, destPos, length);
            x=x.next;
        }

    }
   


}

public class ReverseLL
{
        public static void main(String args[]) throws IOException
    {
        LinkedList obj = new LinkedList();    
        

        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

        System.out.println("enter no of node in linked list");  
        int noo= Integer.parseInt(br.readLine()) ;
        System.out.println("enter the nodes data of LL");
        for(int x=0;x<noo;x++)
        {
            int no= Integer.parseInt(br.readLine()) ;
            obj.insert(no);

        }

       System.out.println("enter two boundings for reverse");  
        int m= Integer.parseInt(br.readLine()) ;
        int n= Integer.parseInt(br.readLine()) ; 

        obj.display();

        obj.reverse_whole();
        
        System.out.println("\n whole reverse");  
        obj.display();  

        obj.reverse_whole();    // again to make it as original
        obj.reverse(m,n);
        System.out.println("\n m to n reverse");  
        obj.display();


    }
}

