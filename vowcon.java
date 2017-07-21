import java.io.*;
import java.util.*;
 class vowcon
   {
    public static void main(String[ ] arg)
     {
       int i=0;
       Scanner s=new Scanner(System.in);
       System.out.println("Enter character:");
       char c=s.next().charAt(0);	 
          switch(c)
            {
             case  'a' :
             case 'e'  :
             case 'i'  :
             case 'o'  :
             case 'u'  :
             case  'A' :
             case 'E'  :
             case 'I'  :
             case 'O'  :
             case 'U'  :
        i++;
            }
    if(i==1)
       System.out.println("Entered character "+c+"is Vowel"); 
    elseif((c>='a'&&c<='z')||(c>='A'&&c<='Z'))
       System.out.println("Entered character"+c+"is Consonent");
    else
       System.out.println("You are entered someother ");
    }
}
    
