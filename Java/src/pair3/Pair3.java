package pair3;


/**
 * Created by Aspen on 2017/10/12.
 */
/**
public class Pair3 {
    public static void main(String[] args){
        Manager ceo = new Manager("Gus Greedy", 80000, 2003, 12, 15);
        Manager cfo = new Manager("Sid Sneaky", 60000, 2003, 12, 15);

        Pair<Manager> buddies = new Pair<>(ceo, cfo);
        print
    }

    public static void printBuddies(Pair<? extends Employee> p){
        Employee first = p.getFirst();
        Employee second = p.getSecond();
        System.out.println(first.getName() + " and " + second.getName() + " are buddies.");
    }

    public static void minmaxBonus(Manager[] a, Pair<? extends Manager> result){
        if (a.length == 0) return;
        Manager min = a[0];
        Manager max = a[0];
        for (int i = 1; i < a.length; i++){
            if (min.getSalary() > a[i].getSalary()) min = a[i];
            if (max.getSalary() < a[i].getSalary()) max = a[i];
        }
        result.setFirst(min);
        result.setSecond(max);
    }

    public static void maxminBonus(Manager[] a, Pair<? super Manager> result){
        minmaxBonus(a, result);
        PairAlg.swapHelper(result);
    }
}

class PairAlg{
    public static boolean hasNulls(Pair<?> p){
        return p.getFirst() == null || p.getSecond() == null;
    }

    public static void swap(Pair<?> p){
        swapHelper(p);
    }

    public static <T> void swapHelper(Pair<T> p){
        T t = p.getFirst();
        p.setFirst(p.getSecond());
        p.setSecond(t);
    }
}
 */