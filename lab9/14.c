
#include <stdio.h>
#include <stdlib.h>
int main(int argc, char **argv)
{
	int *p[5];
	printf("Enter the matrix\n");
	for(int i=0;i<5;i++)
	 p[i]=(int *)malloc(20);
	for(int i=0;i<5;i++)
	{
		for(int j=0;j<5;j++)
		{  
			*(p[i]+j)=i+j;
	}
	}
	for(int i=0;i<5;i++)
	{
		for(int j=0;j<5;j++)
		printf("%d ",*(p[i]+j));
		printf("\n");
	}
	
	
	return 0;
}

