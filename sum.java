import java.io.*;
import java.util.*;
class sum
 {
     public static void main(String[] args)
     {
      int i=1,sum=0,tot;
      Scanner input=new Scanner(System.in);
      System.out.print("Enter total Number to be add:");
      tot=input.nextInt();
          do
            {
                 sum=sum+i;
                 i +=1;
            }  
          while(i<=tot);
            {
             System.out.print("Sum of"+tot+" Numbers="+sum);
            }
     }
     
}
