import java.util.Scanner;
class cam 
{
   public static void main(String[] args) 
{
Scanner sc = new Scanner(System.in);
System.out.print("Enter a sentence:");
String a=sc.nextLine();
String p = "";
char first = a.charAt(0);
p = p+Character.toUpperCase(first);
for (int i=1;i<a.length();i++)
 {
char now = a.charAt(i);
char pre = a.charAt(i - 1);
if (pre == ' ')
 {
p = p + Character.toUpperCase(now);
}else {
p = p +now;
}
}
System.out.println(p);
    }
}
