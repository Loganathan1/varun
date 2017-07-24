import java.util.Scanner;
class fa 
{
public static void main(String args[])
{
Scanner s=new Scanner(System.in);
System.out.println("Enter a number:");
int n=s.nextInt();
int fact=1;
for (int i=1;i<n;i++) 
{
  fact=fact*i;
}
System.out.println("Facto of the num is;"+fact);
}
}
