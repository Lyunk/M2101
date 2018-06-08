import java.io.*;

public class MultipleWrites {

	public static void sansTamponMillionDeA () throws IOException {
		int size = 1000000;
		
		System.out.println("sansTamponMillionDeA : ");
		long t1 = System.nanoTime();
		try(FileWriter writer = new FileWriter("fic.txt")) {
			for (int i = 0 ; i < size; i++) {
				writer.write("a");	
			}
		}
		System.out.println((System.nanoTime() - t1) * 1e-9);
		System.out.println("");

		
	}
	
	public static void avecTamponMillionDeA () throws IOException {
		int size = 1000000;
		
		System.out.println("avecTamponMillionDeA : ");
		long t1 = System.nanoTime();
		try(BufferedWriter writer = new BufferedWriter(new FileWriter("fic2.txt"))) {
			for (int i = 0 ; i < size; i++) {
				writer.write("a");	
			}
		}
		System.out.println((System.nanoTime() - t1) * 1e-9);
		System.out.println("");

	}

	public static void lectureSansTamponMillionDeA () throws IOException {
		int size = 1000000;
		
		System.out.println("sansTamponMillionDeA : ");
		long t1 = System.nanoTime();
		try(FileReaders reader = new FileReader("fic.txt")) {
			for (int i = 0 ; i < size; i++) {
				reader.read("a");	
			}
		}
		System.out.println((System.nanoTime() - t1) * 1e-9);
		System.out.println("");

		File file = new File("fic.txt");
		file.delete();
	}
	
	public static void lectureAvecTamponMillionDeA () throws IOException {
		int size = 1000000;
		
		System.out.println("avecTamponMillionDeA : ");
		long t1 = System.nanoTime();
		try(BufferedWriter writer = new BufferedWriter(new FileWriter("fic.txt"))) {
			for (int i = 0 ; i < size; i++) {
				writer.write("a");	
			}
		}
		System.out.println((System.nanoTime() - t1) * 1e-9);
		System.out.println("");

		File file = new File("fic2.txt");
		file.delete();
	}

	public static void main (String[] args) throws IOException {
		sansTamponMillionDeA();
		avecTamponMillionDeA();
	}
}
