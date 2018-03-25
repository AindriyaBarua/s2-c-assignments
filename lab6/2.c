

#include <stdio.h>
#define b 10
int main(int argc, char **argv)
{
	int a[b],l;
	printf("Enter 10 integers");
	for(int i=0;i<b;i++)
	scanf("%d",&a[i]);
	l=a[0];
	for(int i=0;i<b;i++)
	{
		if(a[i]>l)
		{
			l=a[i];
		}
	}
	printf("\nLargest is:%d",l);  
	return 0;
}

