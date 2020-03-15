package pair3;

/**
 * Created by Aspen on 2017/9/24.
 */
public class Employee implements Comparable<Employee> {
    private String name;
    private double salary;

    public Employee(String n, double s) {
        name = n;
        salary = s;
    }

    public String getName() {
        return name;
    }

    public double getSalary() {
        return salary;
    }

    public void rasieSalary(double byPercent) {
        double raise = salary * byPercent / 100;
        salary += raise;
    }

    public int compareTo(Employee other){
        return Double.compare(salary,other.salary);
    }
}
