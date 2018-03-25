

#include <stdio.h>

int main(int argc, char **argv)
{
	int l1,l2,n;
	printf("Enter n\n");
	scanf("%d",&n);
	int a[n];
	printf("Enter the array");
	for(int i=0;i<n;i++)
	scanf("%d",&a[i]);
	l1=0;
	for(int i=0;i<n;i++)
	{
		if(a[i]>a[l1])
		{
			l1=i;
		}
	}
	if(l1==0)
	l2=1;
	else 
	l2=0;
	
	for(int i=0;i<n;i++)
	{
		if(i==l1)
		continue;
		else
		if(a[i]>a[l2])
		{
			l2=i;
		}
	}
	printf("the largest is:%d the second largest is:%d",a[l1],a[l2]);
		
	return 0;
}

