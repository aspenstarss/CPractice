import java.util.ArrayList;
import java.util.Arrays;

/**
 * Created by Aspen on 2017/9/12.
 */
public class ArraysTest {
    public static void main (String[] args){
        int[] a = new int[10];
        for (int i = 0; i < 10 ; i++ )
            a[i] = i;
        for(int item : a)
            System.out.print(item + ",");
        System.out.println();

        a = new int[] {17, 19, 23, 11, 43, 45};
        for(int item : a)
            System.out.print(item + ",");
        System.out.println();

        int[] copiedLuckyNumbers = Arrays.copyOf(a, a.length*2);
        for(int item : copiedLuckyNumbers)
            System.out.print(item + ",");
        System.out.println();
        System.out.println(Arrays.equals(a,copiedLuckyNumbers));
        System.out.println(Arrays.equals(a,a));

    }
}
