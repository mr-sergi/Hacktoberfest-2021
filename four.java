import javsa.util.*;
public class Main {

  public static void main(String[] args) {
   Scanner kb =new Scanner(System.in);
    int  number = 1;
    int a[] = new int[5];
    for(int i=0;i<5;i++){
      a[i]=kb.nextInt();
    }

    for(int i = 1; i <=5; i++) {

      for(int j = 1; j <= i; j++) {
        System.out.print(number + " " +a[i]);
        ++number;
      }

      System.out.println();
    }
  }
}
