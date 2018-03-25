
#include <stdio.h>

int main(int argc, char **argv)
{
	int n,item;
	printf("Enter n\n");
	scanf("%d",&n);
	int a[n+1];
	printf("Enter the array");
	for(int i=0;i<n;i++)
	scanf("%d",&a[i]);
	int pos;
	printf("enter item to be inserted");
	scanf("%d",&item);
	printf("\nEnter position");
	scanf("%d",&pos);
	for(int i=n;i>pos;i--)
	{
		a[i]=a[i-1];
	}a[pos]=item;
	for(int i=0;i<n+1;i++)
	printf("%d  ",a[i]);
	return 0;
}

