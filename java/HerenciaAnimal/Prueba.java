class Animal{
	public Animal(){
		System.out.println("Soy un animal");
	}
}

class Mamifero extends Animal{
	public Mamifero(){
		System.out.println("Soy un mamifero");
	}
}

class Perro extends Mamifero{
	public Perro(){
		System.out.println("Soy un perro");
	}
}

public class Prueba{
	public static void main(String[] args){
		Animal dog = new Perro();
	}
}
