import java.util.Arrays;
import java.util.Scanner;

/**
 * Created by Aspen on 2017/9/12.
 */
public class LotteyDrawing {
    public static void main(String[] args){
        Scanner in = new Scanner(System.in);

        System.out.print("How many numbers do you need to draw?");
        int k = in.nextInt();

        System.out.print("What is the highest number you can draw?");
        int n = in.nextInt();

        //fill an array with number
        int[] numbers = new int[n];
        for (int i = 0; i < n; i++)
            numbers[i] = i + 1;

        //draw k numbers and put them into a new array
        int[] result = new int[k];
        for (int i = 0; i < k; i++){
            //make a random index between 0 to n-1
            int r = (int)(Math.random() * n);
            result[i] = numbers[r];

            //move the last element into the random location
            numbers[r] = numbers[n-1];
            n--;
        }
        //print the sorted array
        Arrays.sort(result);
        System.out.println("Bet the following conbination.It'll make you rich!");
        for (int r :result)
            System.out.println(r);
        System.out.print(Arrays.toString(result));
    }
}
