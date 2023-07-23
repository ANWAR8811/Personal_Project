import java.util.Scanner;
/**
 * input
 */
public class input {

    public static void main(String[] args) {
        try (Scanner input = new Scanner(System.in)) {
            String name;
            System.out.print("Enter your name: ");
            // name = input.next();
            name = input.nextLine();
            System.out.println("Name: "+name);
        }

        // System.out.print("Enter ant integer number: ");
        // num = input.nextInt();

        // System.out.println("Number: "+num);

    }
}