import java.util.StringTokenizer;

public class Prueba{
	public static void main(String[] args){
		String str = "1,2,3,4,5,6,7";
		StringTokenizer st = new StringTokenizer(str, ",");
		while(st.hasMoreTokens()){
			String s = st.nextToken();
			System.out.println(s);
		}
	}
}
