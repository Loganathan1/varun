#include <stdio.h>
int main()
{
	int a[5];
	int i,j,n=5;
	int b,e;
	for(i=0; i<n; i++)
	{
		printf("Enter element %d:",i+1);
		scanf("%d",&a[i]);
	}
	
	printf("aay elements are: ");
	for(i=0; i<n; i++)
		printf("%d ",a[i]);
	
	printf("\n");
	b=-1;
	for(i=0; i<n; i++)
	{
		for(j=i+1; j<n; j++)
		{
			if(a[i]==a[j])
			{
				e=a[j];
				b=j;
				break;
			}				
		}
	}
	if(b!=-1)
		printf("%d repeated \n",e);
	else
		printf("There is no repeated element\n");

	return 0;
}
