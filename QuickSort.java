import java.util.Scanner;

public class QuickSort {
	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner scan=new Scanner(System.in);
		int n=scan.nextInt();
		int a[]=new int[n];
		int sum = 0;
		for(int i=0;i<n;i++) {
			a[i]=scan.nextInt();
			sum+=a[i];
		}
		System.out.println(sum);
		quick(a,0,n-1);
		
		for(int j=0;j<n;j++) {
			System.out.println(a[j]);
		}
		
	}
	
	public static void quick (int a[] ,int i ,int j ) {
		if(i<j) {
			int pivot=a[j];
			int p=partition(a,i,j,pivot);	
			quick(a,i,p-1);
			quick(a,p+1,j);
		}
	}
	
	public static int  partition(int a[] ,int low,int high,int pivot) {
		int j=low;
		int k=low;
		
		while(j<=high) {
			if(a[j]<=pivot) {
				swap(a,j,k);
				k++;
			}
			j++;
		}
		return (k-1);
	}
	
	public static void swap(int a[],int i,int j) {
		int temp=a[j];
		a[j]=a[i];
		a[i]=temp;
	}
}
