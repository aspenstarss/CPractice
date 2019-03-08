package interfaces;

import java.util.Arrays;

/**
 * Created by Aspen on 2017/9/24.
 */
public class EmployeeSort {
    public static void main(String[] args) {
        Employee[] staff = new Employee[3];

        staff[0] = new Employee("Aspen", 75000);
        staff[1] = new Employee("Jason", 50000);
        staff[2] = new Employee("Vic", 25000);

        for (Employee e : staff) {
            System.out.println("name=" + e.getName() + " ,salary=" + e.getSalary());
        }

        Arrays.sort(staff);

        for (Employee e : staff) {
            System.out.println("name=" + e.getName() + " ,salary=" + e.getSalary());
        }
    }
}
