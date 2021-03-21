import java.util.Scanner;


public class longestCommonSubSequenceDP {
    private static int[][] f;
    private static String[][] s;
    private static String res;
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        String s1=sc.next();
        String s2=sc.next();
        int m=s1.length()-1;
        int n=s2.length()-1;
        f=new int[m+2][n+2];
        s=new String[m+2][n+2];
        for(int i=0;i<=m;i++){
            for(int j=0;j<=n;j++){
                f[i][j]=-1;
                s[i][j]="";
            }
        }
        res="";
        System.out.println(lcsdp(s1, s2, m, n));
        // System.out.println(s[m][n]);
        for(int i=0;i<=m;i++){
            for(int j=0;j<=n;j++){
                System.out.print(s[i][j]+" ");
            }
            System.out.println();
        }
    }   
    
    public static String lcsdp(String s1,String s2,int m, int n){

        if(m||){
            return "";
        }
        if(f[m][n]==-1){
            // System.out.println("chocoalte");
            if(s1.charAt(m)==s2.charAt(n)){
                // System.out.println("biscuit");
                //f[m][n]= 1+lcsdp(s1, s2, m-1, n-1);
                //System.out.print(s1.charAt(m)+" "+m+" "+n);
                s[m][n]=s1.substring(m,m+1)+lcsdp(s1, s2, m-1, n-1);
            }else{
                String a=lcsdp(s1, s2, m, n-1);
                String b=lcsdp(s1, s2, m-1, n);
                
                if(a.length()>b.length()){
                    s[m][n]=s[m][n-1];
                }else{
                    s[m][n]=s[m-1][n];
                }
                
            }
        }
        
        // System.out.println(f[m][n]);
        f[m][n]=0;
        return s[m][n];
    }
}
