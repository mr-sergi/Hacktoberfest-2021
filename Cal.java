import java.util.Scanner;
public class Cal{

	public static void main(String[]args){
	float num1, num2;
	Scanner num = new Scanner(System.in);
	
	System.out.println("Enter first number:");
	num1 = num.nextFloat();
	System.out.println("Enter second number");
	num2 = num.nextFloat();

	System.out.println("Addition is:"+(num1+num2));
	System.out.println("Substraction is:"+(num1-num2));
	System.out.println("Multipication is:"+(num1*num2));
	System.out.println("Division is:"+(num1/num2));
	
	}
}
