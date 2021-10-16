package insertion_sort;

public class insertionSort {
    
    public static void insertionSort(int[] arr){
        for(int i = 1; i < arr.length; i++){
            int key = arr[i];
            int j = i -1 ;

            while(j >= 0 && key < arr[j]){
                arr[j+1] = arr[j];
                --j;
            }
            
            arr[j+1] = key;
        }
    }
    
    public static void main(String[] args) {
        int[] arr = {2, 8, 5, 3, 9, 4, 1};
        
        insertionSort(arr);
        
        for (int i = 0; i < arr.length; i++) {
            System.out.print(arr[i] + " ");
        }
    }
    
}