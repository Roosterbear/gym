import java.util.ArrayList;

public class Prueba{
	public static void main(String[] args){
		// We do not need to set the type in the new ArrayList
		ArrayList<String> array = new ArrayList<>();
		array.add("Un texto");
		array.add("Otro texto");
		array.add("y otro texto mas");
		System.out.println(array);
	}
}