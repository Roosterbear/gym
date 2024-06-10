public class Prueba{
	public static void main(String[] args){
		Long numerote = Long.MAX_VALUE;
		Double numerotote = Double.MAX_VALUE;

		System.out.println("Long: "+numerote);
		numerote = numerote-1;
		System.out.println("Menos uno: "+numerote);

		System.out.println("Double: "+numerotote);
		numerotote = numerotote+1;
		System.out.println("Menos uno: "+numerotote);
	}
}
