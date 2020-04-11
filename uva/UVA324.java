import java.math.BigInteger;
import java.util.Scanner;
public class UVa324{
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        int n[] = new int[10];
        BigInteger b[] = new BigInteger[369];
        b[1] = BigInteger.valueOf(1);
        for(int i = 2; i < 367; b[i] = b[i - 1].multiply(BigInteger.valueOf(i)), i++);
        while(sc.hasNext()){
            int a = sc.nextInt();
            if(a == 0) break;
            String s = b[a].toString();
            char ch[] = s.toCharArray();
            for(int i = 0; i < 10; n[i] = 0, i++);
            for(int i = 0; i < s.length(); n[ch[i] - '0']++, i++);
            System.out.printf("%d! --\n   (0) %4d    (1) %4d    (2) %4d    (3) %4d    (4) %4d\n   (5) %4d    (6) %4d    (7) %4d    (8) %4d    (9) %4d\n", a, n[0], n[1], n[2], n[3], n[4], n[5], n[6], n[7], n[8], n[9]);
        }
    }
}