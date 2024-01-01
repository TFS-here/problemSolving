import java.util.Scanner;

public class abul {
    public static void main(String[] args) {
        Scanner in=new Scanner(System.in);
        System.out.println("Enter a positive integer :");
        int num=in.nextInt();
        int count=0;
        if (num==0 || num==1) {
            System.out.println("Not prime");
        }
        else {
        for(int i=2;i<num;i++){
            if (num%i==0) {
                count++;
                break;
            }
        }
        
        if (count==0) {
                System.out.println("Prime Number");
            }
         else{
                System.out.println("Not Prime");
            }
        }
    }
}