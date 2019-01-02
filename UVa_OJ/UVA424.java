import java.math.BigInteger;
import java.util.Scanner;
public class UVA424{
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        BigInteger sum = BigInteger.valueOf(0);
        while(sc.hasNext()){
            BigInteger b = sc.nextBigInteger();
            if(b.equals(BigInteger.ZERO)){
                System.out.println(sum);
                break;
            }
            sum = sum.add(b);
        }
    }
}