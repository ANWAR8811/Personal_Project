import java.util.Scanner;

public class palindromeCheck {
    public static void main(String[] args) {
        try (Scanner inp = new Scanner(System.in)) {
            int f, l, n, r, s=0, temp, c=0;

            System.out.print("Enter first number: ");
            f = inp.nextInt();
            System.out.print("Enter last number: ");
            l = inp.nextInt();

            for (int i=f; i<l; i++) {
                n = i;
                temp = n;
                while (temp != 0) {
                    r = temp % 10;
                    s = s*10 + r;
                    temp /= 10;
                }

                if (n == s) {
                    System.out.println(n);
                    c++;
                }
                s = 0;
            }
            System.out.println("Total palindrome number: "+c);
        }
    }
}
