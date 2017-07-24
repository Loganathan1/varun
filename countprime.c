#include <stdio.h>
int main()
{
int i, j,f,e;
int p,sum=0;
printf("Enter lower limit:");
scanf("%d", &f);
printf("Enter upper limit:");
scanf("%d",&e);
for(i=f;i<=e;i++)
{
p=1;
for(j=2;j<=i/2;j++)
{
if(i%j==0)
{
p=0;
break;
}
}
if(p==1)
{
sum+=i;
}
}
printf("Sum of all prime numbers between %d to %d = %d", f, e, sum);
return 0;
} 
