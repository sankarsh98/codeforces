import java.util.Scanner;

public class hq9{
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        
        String s=sc.nextLine();
        if(s.contains("H")||s.contains("Q")||s.contains("9")){
            System.out.println("YES");
        }else{
            System.out.println("NO");
        }
    }

}