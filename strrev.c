#include <stdio.h>
#include <sting.h>
#define MAX_SIZE 100 
int main()
{
    char st[100],rev[100];
    int len,i,ind,wst,wed;

    printf("Enter any sting:");
    gets(st);

    len= stlen(st);
    ind=0;
    wst=len - 1;
    wed=len-1;

    while(wst>0)
    {
     
        if(st[wst]=='')
        {
            i=wst+1;
            while(i<=wed)
            {
                rev[ind]=st[i];

                i++;
                ind++;
            }
            rev[ind++]='';

            wed=wst-1;
        }

        wst--;
    }

    
    for(i=0;i<=wed;i++)
    {
        rev[ind]=st[i];
        ind++;
    }    rev[ind]='\0'; 

    printf("Original sting \n%s\n\n", st);
    printf("rev ordered words \n%s", rev);

    return 0;
}
