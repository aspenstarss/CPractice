package equals;

import java.time.LocalDate;
import java.util.Objects;

/**
 * Created by Aspen on 2017/9/24.
 */
public class Employee {
    private String name;
    private double salary;
    private LocalDate hireday;

    public Employee(String name,double salary, int year, int month, int day){
        this.name = name;
        this.salary = salary;
        hireday = LocalDate.of(year,month,day);
    }

    public String getName(){
        return name;
    }

    public double getSalary(){
        return salary;
    }

    public LocalDate getHireday(){
        return hireday;
    }

    public void raiseSalary(double byPercent){
        double raise = salary * byPercent / 100;
        salary += raise;
    }

    public boolean equals(Object otherObject){
        if (this == otherObject) return true;
        if (otherObject == null) return false;
        if (getClass() != otherObject.getClass()) return false;
        Employee other = (Employee) otherObject;
        return Objects.equals(name,other.name) && salary == other.salary && Objects.equals(hireday,other.hireday);
    }

    public int hashCode(){
        return Objects.hash(name,salary,hireday);
    }

    public String toString(){
        return getClass().getName() + "[name=" + name +",salary=" + salary +",hireday=" + hireday +"]";
    }
}
