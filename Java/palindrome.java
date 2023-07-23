import java.util.Scanner;

public class palindrome {
    public static void main(String[] args) {
        try (Scanner inp = new Scanner(System.in)) {
            int n, r, s=0, temp;

            System.out.print("Enter any positive number to check palindrome or not: ");
            n = inp.nextInt();
            temp = n;

            while (temp != 0) {
                r = temp % 10;
                s = s*10 + r;
                temp /= 10;
            }

            if (n == s) {
                System.out.println("Palindrome");
            }
            else {
                System.out.println("Not palindrome");
            }
        }
    }
}
