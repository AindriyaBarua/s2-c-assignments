

#include <stdio.h>

int main(int argc, char **argv)
{
	int l,s,n;
	printf("Enter n\n");
	scanf("%d",&n);
	int a[n],temp;
	printf("Enter the array");
	for(int i=0;i<n;i++)
	scanf("%d",&a[i]);
	l=0;
	s=0;
	for(int i=0;i<n;i++)
	{
		if(a[i]>a[l])
		{
			l=i;
		}
		if(a[i]<a[s])
		{
			s=i;
		}
	}
	temp=a[l];
	a[l]=a[s];
	a[s]=temp;
	for(int i=0;i<n;i++)
	printf("%d  ",a[i]);
	return 0;
}

