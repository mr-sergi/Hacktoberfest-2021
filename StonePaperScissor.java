import java.util.Scanner;
import java.util.Random;

Public class StonePaperScissor {
    public static void main(String[] args) {

        Scanner sc=new Scanner(System.in);
        System.out.println("***lets start the game*** \n Enter your choice \n 0 for stone \n 1 for paper \n 2 for scissor \n ");
        int PlayerInput= sc.nextInt();

        Random random=new Random();  
        int compInput=random.nextInt(3); 
        System.out.println("Computer input-" +compInput);
        
        if(PlayerInput==0 && compInput==2||PlayerInput==1 && compInput==0||PlayerInput==3 && compInput==2){
            System.out.println("Congratulations!! You won the game \n :) ");
        }
        else{
            System.out.println("uh oh! try again next time \n :( ");
        }

    }
}
