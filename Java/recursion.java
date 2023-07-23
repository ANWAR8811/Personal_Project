public class recursion {
    public static void main(String[] args) {
        int res = sum(2, 5);
        System.out.println(res);
    }

    public static int sum(int s, int e) {
        if (e > s) return e + sum(s, e - 1);
        else return e;
    }
}
