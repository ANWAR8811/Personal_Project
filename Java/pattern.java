import java.util.Scanner;

public class pattern {
    public static void main(String[] args) {
        try (Scanner inp = new Scanner(System.in)) {
            int n;

            System.out.print("Enter patter row size: ");
            n = inp.nextInt();

            for (int row=1; row<=n; row++) {
                for (int col=1; col<=row; col++) {
                    if (col%2 == 0) {
                        System.out.print(" 0");
                    }
                    else {
                        System.out.print(" 1");
                    }
                }
                System.out.println();
            }
        }
    }    
}
