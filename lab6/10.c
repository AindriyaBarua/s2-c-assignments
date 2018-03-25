
#include <stdio.h>

int main(int argc, char **argv)
{
	int n,temp;
	printf("Enter n\n");
	scanf("%d",&n);
	int a[n];
	printf("Enter the array");
	for(int i=0;i<n;i++)
	scanf("%d",&a[i]);
	int d;
	printf("\nEnter d");
	scanf("%d",&d);
	while(d)
	{
		temp=a[0];
		for(int i=0;i<n-1;i++)
		{
			a[i]=a[i+1];
		}
		a[n-1]=temp;
		d--;
	}
	for(int i=0;i<n;i++)
	printf("%d  ",a[i]);
	return 0;
}

