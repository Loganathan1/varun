#include<stdio.h>
#include<string.h> 
int main() 
  {
    int i,j=0;
   char st[50];
   printf(" Enter the string:");
   scanf("%s",st); 
   i = 0;
   j = strlen(st)-1; 
   char temp;
   while (i < j)
     {
      temp=st[i];
      st[i]=st[j];
      st[j]=temp;
      i++;
      j--;
   } 
   printf(" Reverse of string is:%s",st);
   return(0);
}
