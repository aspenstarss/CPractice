package lamda;

import java.util.Arrays;
import java.util.Date;
import javax.swing.*;

/**
 * Created by Aspen on 2017/9/26.
 */
public class Lambda {
    public static void main(String[] args){
        String[] planets = new String[] {"Merury", "Venus", "Earth", "Mars", "Jupiter", "Saturn", "Uranus", "Neptune"};
        System.out.println(Arrays.toString(planets));
        System.out.println("Sorted by dictonary order:");
        Arrays.sort(planets);
        System.out.println(Arrays.toString(planets));
        System.out.println("Sorted by length:");
        Arrays.sort(planets,(first, second) -> first.length() - second.length());
        System.out.println(Arrays.toString(planets));

        Timer t = new Timer(10000,event ->
        System.out.println("The time is" + new Date()));
        t.start();

        JOptionPane.showMessageDialog(null,"Quit?");
        System.exit(0);
    }
}
