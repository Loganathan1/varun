#include <stdio.h>
int main()
  {
    int i,n;     
    printf("Range of even numbers:");
    scanf("%d",&n); 
    printf("even numbers from 1 to %d are:",n);
    for(i=2;i<n;i+=2)
    {
        printf("%d",i);
    }
 
    return 0;
} 
