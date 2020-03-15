import java.util.Scanner;

/**
 * Created by Aspen on 2017/9/12.
 */
public class Retirement {
    public static void main(String[] args){
        Scanner in = new Scanner(System.in);
        System.out.print("How much do you need to retire?");
        double goal = in.nextDouble();

        System.out.print("How much money do you contribute every year?");
        double payment = in.nextDouble();

        System.out.print("Interest rate is %:");
        double interestRate = in.nextDouble();

        double balance = 0;
        int years = 0;

        while (balance < goal){
            balance += payment;
            double interest = balance * interestRate / 100;
            balance += interest;
            years++;
        }
        System.out.print("You can retire in " + years +" years.");
    }
}
