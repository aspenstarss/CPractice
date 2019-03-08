package linkedList;

import java.util.*;

/**
 * Created by Aspen on 2017/10/17.
 */
public class LinkedListTest {
    public static void main(String[] args){
        List<String> a = new LinkedList<>();
        List<String> b = new LinkedList<>();

        a.add("Amy");
        a.add("Carl");
        a.add("Erica");

        b.add("Bob");
        b.add("Doug");
        b.add("Frank");
        b.add("Cita");

        ListIterator<String> aIter = a.listIterator();
        ListIterator<String> bIter = b.listIterator();

        while (bIter.hasNext()){
            if (aIter.hasNext()) aIter.next();
            aIter.add(bIter.next());
        }
        System.out.println(a);

        bIter = b.listIterator();
        while (bIter.hasNext()){
            bIter.next();
            if (bIter.hasNext()){
                bIter.next();
                bIter.remove();
            }
        }
        System.out.println(b);

        a.removeAll(b);
        System.out.println(a);
    }
}
