
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
			{
				if(j==n-1)
				a[j]=0;
				else
				for(int k=j;k<n-1;k++)
				{
					a[k]=a[k+1];
					a[k+1]=0;
				}
			}
		}
	}
	for(int i=0;i<n;i++)
	printf("%d  ",a[i]);
	return 0;
}

