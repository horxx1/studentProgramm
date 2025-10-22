import java.util.Scanner;

public class java {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in, "UTF-8");

        System.out.print("Введите первое число(x): ");
        double x = scanner.nextDouble();

        System.out.print("Введите второе число(y): ");
        double y = scanner.nextDouble();

        double numInExp = x / (2 * y);
        double numInSqrt = Math.abs(Math.sin(Math.pow(y, 3)));

        double numChisl = Math.exp(numInExp) + Math.sqrt(numInSqrt);
        double numZnam = 2.5 * Math.pow(Math.cos(x), 2);

        double d = Math.pow(10, 4) * (numChisl / numZnam);

        System.out.println("Ответ: " + d);
    }
}
