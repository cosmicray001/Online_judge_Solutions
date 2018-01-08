import java.io.IOException;
import java.util.Scanner;
 
/**
 * IMPORTANT: 
 *      O nome da classe deve ser "Main" para que a sua solução execute
 *      Class name must be "Main" for your solution to execute
 *      El nombre de la clase debe ser "Main" para que su solución ejecutar
 */
public class Main {
 
    public static void main(String[] args) throws IOException {
 
        Scanner sc = new Scanner(System.in);
		int n, c = 0, i;
		n = sc.nextInt();
		for(c = 1; c <= n; c++)
		{
			if(c % 2 == 0)
			{
				i = c * c;
				System.out.println(c + "^2 = " + i);
			}
		}
 
    }
 
}
