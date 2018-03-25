

#include <stdio.h>

int main(int argc, char **argv)
{
	int n;
	printf("Enter n\n");
	scanf("%d",&n);
	int a[n];
	printf("Enter the array");
	for(int i=0;i<n;i++)
	scanf("%d",&a[i]);
	for(int i=0;i<n-1;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(a[i]==a[j])
			printf("\nThe numbers at %d and %d postions are same",i+1,j+1);
		}
	}
	return 0;
}

