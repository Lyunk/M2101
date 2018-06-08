public class MultipleAllocations {

	public static void big_allocation() {
		int size = 100000000;

		System.out.println("big_allocation : ");
		long t1 = System.nanoTime();
	    int[] p = new int[size];
	    System.out.println((System.nanoTime()-t1) * 1e-9);
		System.out.println("\n");
	}

	public static void small_allocation() {
		int size = 100000000;

		System.out.println("small_allocation : ");
		long t1 = System.nanoTime();
		for (int i = 0; i < size; i++) {
	    		int[] p = new int[1];
		}
	    	System.out.println((System.nanoTime()-t1) * 1e-9);
		System.out.println("\n");
	}

	public static void main (String[] args) {
	    big_allocation();
		small_allocation();
	}

}

