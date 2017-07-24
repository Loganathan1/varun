import java.util.*;
class re
{
public static void main(String as[])
 {
Scanner sc=new Scanner(System.in);        
System.out.println("Enter Number:");
int num=sc.nextInt();
int rev=0,b;
while(num>0)
{
b=num%10;
rev=rev*10+b;
num=num/10;
}
System.out.println("Reverse Number is:"+rev);        
}
}
