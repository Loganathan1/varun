#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int c(int a[],int ars)
{
    int count=0;
    int l,r,ms,sum,ml,mr;
    if(ars<2)
    {
        printf("Invalid Input");
        return;
    }
    ml=0;
    mr=1;
    ms=a[0]+a[1];
    for(l=0;l<ars-1;l++)
    {
        for(r=l+1;r<ars;r++) 
{ 
sum=a[l]+a[r]; 
if(abs(ms)>abs(sum))
            {
                ms=sum;
                ml=l;
                mr=r;
            }
        }
    }
    printf(" The two elements whose sum is minimum are %d and %d", a[ml],a[mr]);
}
 
int main()
{
    int a[]={42,-36,12,45,-78,55};
    c(a,6);
    return 0;
}
