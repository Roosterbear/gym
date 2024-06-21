public class Prueba{
	private static void appendTest(){
		long start = System.currentTimeMillis();
		StringBuilder sb = new StringBuilder();

		sb.append("Hola Mundo");
		for(int i=0;i<100000;i++){
			sb.append(i);
		}
		String s = sb.toString();
		long end = System.currentTimeMillis();
		System.out.println("Tiempo: "+(end-start)+" ms");
	}

	public static void main(String[] args){
		appendTest();
	}
}
