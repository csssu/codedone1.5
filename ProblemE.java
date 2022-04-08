import java.util.Scanner;

public class ProblemE {
	public static void main(String[] args) {
		Scanner scan = new Scanner(System.in);

		String str = scan.next();
		System.out.println(str.substring(0, 1).toUpperCase() +  str.substring(1));
	}
}