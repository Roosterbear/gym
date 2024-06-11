import java.util.HashMap;
import java.util.Iterator;
import java.util.Map;

public class Prueba{
	public static void main(String[] args){
		SoyElMapa sem = new SoyElMapa();
		sem.mapa();
	}
}

class SoyElMapa{
	public void mapa(){
		Map<Integer, String> map = new HashMap<>();
		map.put(1,"uno");
		map.put(2,"dos");
		map.put(3,"tres");

		int n = 3;
		System.out.println(map.get(n));
		Iterator it = map.keySet().iterator();
		while(it.hasNext()){
			System.out.println(it.next());
		}
		for(Iterator ite = map.entrySet().iterator();ite.hasNext();){
			Map.Entry entry = (Map.Entry) ite.next();
			System.out.println(entry.getKey()+" "+entry.getValue());
		}
	}
}