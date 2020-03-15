import java.time.LocalDate;

/**
 * Created by Aspen on 2017/9/13.
 */
/**
public class EmployeeTest {

    public static void main(String[] args) {
        Employee[] staff = new Employee[3];

        staff[0] = new Employee("Aspen", 75000, 2017, 12, 25);
        staff[1] = new Employee("Jason", 50000, 2017, 12, 26);
        staff[2] = new Employee("Vic", 25000, 2018, 1, 2);

        for (Employee e : staff){
            System.out.println("name=" + e.getName() + " ,salary=" + e.getSalary() + ", hireday=" + e.getHireday());
            e.rasieSalary(5);
        }

        System.out.println("After Rasie Salary:");

        for (Employee e : staff)
            System.out.println("name=" + e.getName() + " ,salary=" + e.getSalary() + ", hireday=" + e.getHireday());
    }
}

    class Employee {
        private String name;
        private double salary;
        private LocalDate hireday;

        public Employee(String n, double s, int year, int month, int day) {
            name = n;
            salary = s;
            hireday = LocalDate.of(year, month, day);
        }

        public String getName() {
            return name;
        }

        public double getSalary() {
            return salary;
        }

        public LocalDate getHireday() {
            return hireday;
        }

        public void rasieSalary(double byPercent) {
            double raise = salary * byPercent / 100;
            salary += raise;
        }
    }
*/
