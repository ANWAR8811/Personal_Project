import java.util.Scanner;

public class operator {
    public static void main(String[] args) {
        try (Scanner inp = new Scanner(System.in)) {
            int n1, n2, r;

            System.out.print("Enter first number: ");
            n1 = inp.nextInt();
            System.out.print("Enter second number: ");
            n2 = inp.nextInt();

            double div = (double) n1 / n2;
            System.out.println("Remainder: "+div);
            
            r = n1 % n2;
            System.out.println("Remainder: "+r);

        }

    }
}
