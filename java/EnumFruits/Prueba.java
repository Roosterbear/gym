enum Fruit{
	APPLE, ORANGE, BANANA,
	FIG, BLACKBERRY, MAMMEE;

	// We need a "Fruit" instance
	public static String getCategory(Fruit fruit){
		switch(fruit){
			case APPLE: case BANANA:
				return "Typical";
			case ORANGE: case BLACKBERRY:
				return "Vitamins!";
			case FIG: case MAMMEE:
				return "Sweet Delicius";
		}
		return "No Fruit was set";
	}
}

public class Prueba{
	public static void main(String[] args){
		Fruit banana = Fruit.BANANA;
		Fruit black = Fruit.BLACKBERRY;
		// We can use the banana method with a blackberry instance
		System.out.println(banana.getCategory(black));
	}
}
