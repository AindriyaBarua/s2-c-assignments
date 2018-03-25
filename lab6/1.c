#include <stdio.h>

int main(int argc, char **argv)
{
	int a[10],l;
	printf("Enter 10 integers");
	for(int i=0;i<10;i++)
	scanf("%d",&a[i]);
	l=a[0];
	for(int i=0;i<10;i++)
	{
		if(a[i]>l)
		{
			l=a[i];
		}
	}
	printf("\nLargest is:%d",l);  
	return 0;
}

