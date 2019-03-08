package clone;

import sun.management.ExtendedPlatformComponent;

/**
 * Created by Aspen on 2017/9/26.
 */
public class Clone {
    public static void main(String[] args){
        try {
            Employee original = new Employee("Jhon Q. Public",50000);
            original.setHireDay(2017,9,26);
            Employee copy = original.clone();
            copy.raiseSalary(10);
            copy.setHireDay(2016,9,16);
            System.out.println("Original =" + original);
            System.out.println("Copy = " + copy);
        }catch (CloneNotSupportedException e){
            e.printStackTrace();
        }
    }
}
