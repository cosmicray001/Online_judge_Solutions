/* package whatever; // don't place package name! */
import java.math.BigInteger;
import java.util.*;
import java.lang.*;
import java.io.*;

/* Name of the class has to be "Main" only if the class is public. */
public class Main
{
	public static void main (String[] args) throws java.lang.Exception
	{
		Scanner sc = new Scanner(System.in);
		BigInteger g = BigInteger.valueOf(0), mx = BigInteger.valueOf(0), mn = BigInteger.valueOf(0), m = BigInteger.valueOf(0);
		int co = 0;
		while(sc.hasNext()){
			int a = sc.nextInt();
			if(a == -999999){
				System.out.println(g);
				co = 0;
				continue;
			}
			if(co == 0){
				g = BigInteger.valueOf(a);
				m = BigInteger.valueOf(a);
				mx = BigInteger.valueOf(a);
				mn = BigInteger.valueOf(a);
				co++;
			}
			else{
				BigInteger x = mx.multiply(BigInteger.valueOf(a));
				BigInteger y = mn.multiply(BigInteger.valueOf(a));
				BigInteger z = BigInteger.valueOf(a);
				if(z.compareTo(x) < 0) mx = x;
				else mx = z;
				if(mx.compareTo(y) < 0) mx = y;
				if(z.compareTo(y) < 0) mn = z;
				else mn = y;
				if(x.compareTo(mn) < 0) mn = x;
				if(g.compareTo(mx) < 0) g = mx;
			}
		}
	}
}
