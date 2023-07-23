public class foreach {
    public static void main(String[] args) {
        int[] num = {10,20,30,40,50,60,70};
        int s = 0;

        for (int x: num) {
            s += x;
        }
        System.out.println(s);
        System.out.println(num);
    }
}
