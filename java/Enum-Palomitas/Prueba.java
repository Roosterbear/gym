enum SaborPalomitas{
	CHILE("Picositas"), SAL("Sin nada"),
	QUESO("Quesito"), CARAMELO("Dulces");

	private String nombreVenta;
	private SaborPalomitas(String nombreVenta){
		this.nombreVenta = nombreVenta;
	}
	public String getNombreVenta(){
		return nombreVenta;
	}
}

public class Prueba{
	public static void main(String[] args){
		SaborPalomitas queso = SaborPalomitas.QUESO;
		System.out.println(queso.getNombreVenta());
	}
}
