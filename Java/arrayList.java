import java.util.ArrayList;
import java.util.Iterator;

// import javax.swing.text.html.HTMLDocument.Iterator;

public class arrayList {
    public static void main(String[] args) {
        ArrayList<Integer> list = new ArrayList<Integer>();
        System.out.println("Size: "+list.size());

        list.add(10);
        list.add(20);
        list.add(30);
        list.add(40);
        list.add(4,50);

        // for (int x: list) {
        //     System.out.print(" "+x);
        // }

        // Iterator i = list.iterator();
        // while (i.hasNext()) {
        //     System.out.print(" "+i.next());
        // }

        System.out.println();
        System.out.println(list);
        System.out.println("Size: "+list.size());
        list.remove(1);
        System.out.println(list);
        System.out.println("Size: "+list.size());


    }
}
