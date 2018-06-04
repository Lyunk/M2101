

public class StackOverflow {
	
	public static int f(int n) {
		if (n>0) {
			return (f(n-1) + 1);
		}
		return 0;
	}

	public static void main (String[] args) {
		System.out.println(f(1000000));
	
	}

}
