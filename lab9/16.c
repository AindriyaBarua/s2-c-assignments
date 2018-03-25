

#include <stdio.h>
#include <stdlib.h>
int main(int argc, char **argv)
{
	int *p;
	 p=(int *)malloc(20);
	for(int i=0;i<5;i++)
	p[i]=i+5;
	for(int i=0;i<5;i++)
	printf("%d  ",p[i]);
	return 0;
}

