package Java;

import java.util.Scanner;

public class abc2 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in, "UTF-8");

        System.out.print("Введите число a: ");
        double a = scanner.nextDouble();

        System.out.print("Введите число b: ");
        double b = scanner.nextDouble();

        System.out.print("Введите число c: ");
        double c = scanner.nextDouble();

        double d = (a + b + c) * 2;
        System.out.println("(" + a + " + " + b + " + " + c + ") * 2 = " + d);

        scanner.close();
    }
}
