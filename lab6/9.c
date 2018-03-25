
#include <stdio.h>
#include <stdlib.h>
int main(int argc, char **argv)
{
	int a[10],temp;
	for(int i=0;i<10;i++)
	a[i]=rand()%100;
	for(int i=0;i<10;i++)
	printf("%d  ",a[i]);
	printf("\n\n");
	for(int i=0;i<9;i++)
	{
		for(int j=0;j<9-i;j++)
		{
			if(a[j]>a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
	for(int i=0;i<10;i++)
	printf("%d  ",a[i]);
	return 0;
}

