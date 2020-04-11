import java.math.BigInteger;
import java.util.Scanner;
public class UVA10323{
    public static BigInteger b[] = new BigInteger[100000];
    public static void main(String [] args){
        Scanner sc = new Scanner(System.in);
        
        BigInteger p = new BigInteger("6227020800");
        b[0] = BigInteger.valueOf(1);
        for(int i = 1; i < 100000; b[i] = b[i - 1].multiply(BigInteger.valueOf(i)), i++);
        while(sc.hasNext()){
            int a = sc.nextInt();
            int x = b[a].compareTo(p);
            if(x == -1) System.out.println("Overflow!");
            else{
                int y = b[a].compareTo(BigInteger.valueOf(10000));
                if(y == 1) System.out.println("Underflow!");
                else System.out.println(b[a]);
            }
        }
    }
}