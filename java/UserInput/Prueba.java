import java.io.BufferedReader;
import java.io.InputStreamReader;

public class Prueba{
	public static void main(String[] args) throws Exception{
		System.out.print("Como te llamas? ");
		BufferedReader br = new BufferedReader(
			new InputStreamReader(System.in)
		);
		String name = br.readLine();
		System.out.println("Hola "+name+"!");
	}
}