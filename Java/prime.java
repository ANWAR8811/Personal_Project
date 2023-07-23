import java.util.Scanner;

public class prime {
    public static void main(String[] args) {
        try (Scanner inp = new Scanner(System.in)) {
            int n, c=0;

            System.out.print("Enter any number: ");
            n = inp.nextInt();

            if (n == 0 || n == 1) {
                System.out.println("Not prime");
            }
            else {
                for (int i = 2; i<n/2; i++) {
                    if (n % i == 0) {
                       c++;
                       break; 
                    }                
                }
                if (c == 0) {
                    System.out.println("Prime");
                }
                else {
                    System.out.println("Not prime");
                }
            }
        }
    }
}
