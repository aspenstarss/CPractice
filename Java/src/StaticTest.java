import java.time.LocalDate;

/**
 * Created by Aspen on 2017/9/13.
 */
public class StaticTest {
    public static void main(String[] args) {
        Employee[] staff = new Employee[3];

        staff[0] = new Employee("Aspen", 75000);
        staff[1] = new Employee("Jason", 50000);
        staff[2] = new Employee("Vic", 25000);
        /**
        for (Employee e : staff){
            System.out.println("name=" + e.getName() + " ,salary=" + e.getSalary());

        }
        */

        //System.out.println("After Rasie Salary:");

        for (Employee e : staff) {
            e.setId();
            System.out.println("name=" + e.getName() + " ,Id=" + e.getId() + " ,salary=" + e.getSalary() );
        }

        int n = Employee.getNextId();
        System.out.println("next available id = " + n);
    }
}
class Employee {
    private static int nextId = 1;
    private String name;
    private double salary;
    private int id;

    public Employee(String n, double s) {
        name = n;
        salary = s;
        id = 0;
    }

    public String getName() {
        return name;
    }

    public double getSalary() {
        return salary;
    }


    public int getId(){
        return id;
    }

    public void setId(){
        id = nextId;
        nextId++;
    }

    public static int getNextId(){
        return nextId;
    }

}