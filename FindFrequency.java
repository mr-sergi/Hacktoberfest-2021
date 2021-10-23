import java.util.function.Function;
import java.util.stream.*;
import java.util.ArrayList;
import java.util.List;
import java.util.Arrays;

public class FindFrequency {
    
    public static int[] findFreq(String s){
        int[] arr = new int[26];
        s = s.toLowerCase();
        for(int i=0;i<s.length();i++){
            if(Character.isLetter(s.charAt(i))){
                arr[s.charAt(i)-97]++;
            }
        }
        return arr;
    }
    
    
    public static void main(String args[]) {
        String s1 = "byQgbDACbWqdvQQDAZbddh";
        int[] res = findFreq(s1);
    }
}
