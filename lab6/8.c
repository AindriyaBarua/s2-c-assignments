
#include <stdio.h>
#include <stdlib.h>
int main(int argc, char **argv)
{
	int a[10],l;
	for(int i=0;i<10;i++)
	a[i]=rand()%100;
	for(int i=0;i<10;i++)
	printf("%d  ",a[i]);
	l=a[0];
	for(int i=0;i<10;i++)
	if(a[i]>l)
	l=a[i];
	printf("Largest is %d",l);
	return 0;
}

