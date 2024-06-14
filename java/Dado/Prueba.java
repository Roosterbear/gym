public class Prueba{
  public static void main(String[] args){
    // Math.random give us a decimal number between 0 and 1
    // We have to covert to int 
    // Multiply by 6 to get numbers between 0 and 5
    // Add 1 to get numbers between 1 and 6
    int dado = (int)(Math.random()*6+1);
    System.out.println("El dado dice: "+dado);
  }
}