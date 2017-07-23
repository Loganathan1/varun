import java.io.*;
import java.util.*;
class pow
{
  public static void main(String arg[])	
  {
    int base=9,expo=39,result=1;
 
    if(base>=0&&expo==0)
     {
        result=1;
     }
    else if(base==0&&expo>=1)
      { 
         result=0;
      }
    else
     {
         for(int i=1;i<=expo;i++)
	 {
            result=result*base;
 	 }	    
     }
    System.out.println(base+"^"+expo+"="+result);
	
  }
}
