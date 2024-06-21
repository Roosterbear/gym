import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.io.FileInputStream;

public class Prueba{
	public static void main(String[] args) throws Exception{
		BufferedReader br = new BufferedReader(
			new InputStreamReader(
			new FileInputStream("archivo.txt")
			)
		);
		String line = br.readLine();
		while(line != null){
			System.out.println(line);
			line = br.readLine();
		}
		br.close();
	}
}
