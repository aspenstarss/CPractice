import java.time.DayOfWeek;
import java.time.LocalDate;

/**
 * Created by Aspen on 2017/9/13.
 */
public class Calendar {
    public static void main (String[] args){
        LocalDate date = LocalDate.now();
        //date = LocalDate.of(2017,9,10);
        int month = date.getMonthValue();
        int today = date.getDayOfMonth();

        date = date.minusDays(today - 1);
        //System.out.println(date.getMonthValue());
        //System.out.println(date.getDayOfMonth());
        DayOfWeek weekday = date.getDayOfWeek();
        int value = weekday.getValue();

        System.out.println("Mon Tue Wed Thu Fri Sat Sun");
        for (int i = 1; i< value; i++)
            System.out.print("    ");
        while (date.getMonthValue() == month){
            System.out.printf("%3d", date.getDayOfMonth());
            if (date.getDayOfMonth() == today)
                System.out.print("*");
            else
                System.out.print(" ");
            date = date.plusDays(1);
            if (date.getDayOfWeek().getValue() == 1)
                System.out.println();
        }
        if (date.getDayOfWeek().getValue() != 1)
            System.out.println();
    }
}
