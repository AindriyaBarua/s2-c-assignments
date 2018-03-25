
#include <stdio.h>
#define b 10
int main(int argc, char **argv)
{
	int a[b],avg=0;
	printf("Enter 10 integers");
	for(int i=0;i<b;i++)
	scanf("%d",&a[i]);
	for(int i=0;i<b;i++)
	{
		avg=avg+a[i]/b;
	}
	printf("\nAverage is:%d",avg);  
	return 0;
}

