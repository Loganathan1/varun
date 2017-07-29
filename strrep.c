#include <stdio.h>
#include <string.h>
#include <ctype.h> 
struct st
{
    char c;
    int g;
};
int main()
{
    struct st s[26];
    char string[100],c;
    int max[26] = {0},min[26]={0};
    int i=0,j,index,maxc=1,minc=100; 
    for (i=0;i<26;i++)
    {
       s[i].c=i+'a';
       s[i].g=0;
    }
    printf("Enter string:");
    i=0;
    do
    {
        fflush(stdin);
        c=getchar();
        string[i++]=c;
        if (c=='\n')
        {
            break;
        }
        else if(!isalpha(c))
        {
            continue;
        }
        c=tolower(c);
        index=c-'a';
        s[index].g++;
    } while(1);
    string[i-1]='\0';
    printf("The string entered is: %s\n", string);
    for(i=0;i<26;i++)
    {
        if(s[i].g)
        {
            if(maxc<s[i].g)
            {
                for(j=0;j<26;j++)
                {
                   max[j]=0;
                }
                max[i]=1;
                maxc=s[i].g;
            }
            else if(maxc==s[i].g)
            {
                max[i]=1;
            }
            if(minc>=s[i].g)
            {
                if(minc==s[i].g)
                {
                    min[i]=1;
                }
                else
                {
                    for(j=0;j<26;j++)
                    {
                        min[j]=0;
                   }
                    min[i]=1;
                    minc=s[i].g;
                }
            }
        }
    }
    printf("The most repeated characters are: ");
    for(i=0;i<26;i++)
    {
        if(max[i])
        {
            printf("%c",i+'a');
        }
    }
    printf("\n");
    return 0;
}
