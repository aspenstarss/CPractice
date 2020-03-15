/**
 * Created by Aspen on 2017/9/4.
 */
import java.io.Console;
import java.util.*;

public class Employee2 {
    public static void main(String[] args){
        Scanner in = new Scanner(System.in);

        System.out.print("What's you name?");
        String name = in.nextLine();

        System.out.print("How old are you?");
        int old = in.nextInt();

        /**
        Console cons = System.console();
        String username = cons.readLine("User name:");
        char[] passwd = cons.readPassword("Password:");
         */

        System.out.println("Hello, " + name + ".next year,you'll be " + (old+1));
        System.out.printf("%tc",new Date());
        //System.out.println("Your username is " + username + ",and your password is " + passwd);
    }
}
