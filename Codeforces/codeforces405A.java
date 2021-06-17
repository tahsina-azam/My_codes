import java.util.ArrayList;
import java.util.Collections;
import java.util.Scanner;

/**
 *
 * @author Tahsina
 */
public class JavaApplication2 {

    static int n,a;
    public static void main(String[] args) {
       Scanner sc= new Scanner(System.in);
       n=sc.nextInt();
       
       ArrayList<Integer> array = new ArrayList<Integer>(n);
       for(int i=0;i<n;i++){
           a=sc.nextInt();
           array.add(a);
       }
       Collections.sort(array);
       for(int i=0;i<n;i++){
           System.out.print(array.get(i)+" ");
       }
       System.out.println();
    }
    
}
