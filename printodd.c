#include <stdio.h>
int main()
  {
    int i,n;     
    printf("Range of odd numbers:");
    scanf("%d",&n); 
    printf("odd numbers from 1 to %d are:",n);
    for(i=1;i<n;i+=2)
    {
        printf("%d",i);
    }
 
    return 0;
} 
