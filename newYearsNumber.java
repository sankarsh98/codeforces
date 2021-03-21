import java.util.HashMap;
import java.util.Map;
import java.util.Scanner;

public class newYearsNumber {
    private static Map<Integer,Boolean> m;
    public static void main(String[] args) {
        m=new HashMap<>();
        // m.put(2020,true);
        // m.put(2021,true);
        Scanner sc=new Scanner(System.in);
        int n=sc.nextInt();
        int a;
        while(n-->0){
            a=sc.nextInt();
            System.out.println(newYear(a)?"YES":"NO");
        }
        
    }

    public static boolean newYear(int n){

        if(n<2020){
            return false;
        }

        if(!m.containsKey(n)){
            int a=n%2020;
            int b=n%2021;
            // System.out.println(a+" "+b+" "+n);
            if(a*b==0){
                m.put(n,true);
                return true;
            } 
            if(newYear(n-2020)){
                m.put(n,true);
                return true;
            }
            if(newYear(n-2021)){
                m.put(n,true);
                return true;
            }
            m.put(n,false);
        }

        return m.get(n);
    }
}
