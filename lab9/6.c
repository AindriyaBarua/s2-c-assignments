

#include <stdio.h>

int main(int argc, char **argv)
{
	int a[5];int *p;
	printf("Enter array");
	for(int i=0;i<5;i++)
	scanf("%d",&a[i]);
	for(int i=0;i<5;i++)
	{	p=&a[i];
		printf("\n %p",p);
	}
	return 0;
}

