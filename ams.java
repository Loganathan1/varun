import java.io.*;
import java.util.*;
class ams
   {  
      public static void main(String[] args) 
 {  
        int c=0,a,temp;  
        int n=154;
        temp=n;  
        while(n>0)  
        {  
        a=n%10;  
        n=n/10;  
        c=c+(a*a*a);  
        }  
        if(temp==c)  
        System.out.println("amstrong number");   
        else  
            System.out.println("Not amstrong number");   
       }  
    }  

