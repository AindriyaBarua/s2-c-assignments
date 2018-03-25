

#include <stdio.h>

int main(int argc, char **argv)
{
	int n,item,found=0,l,r,mid;
	printf("Enter n\n");
	scanf("%d",&n);
	int a[n];
	printf("Enter the sorted array");
	for(int i=0;i<n;i++)
	scanf("%d",&a[i]);
	printf("enter item to be searched");
	scanf("%d",&item);
	l=0;
	r=n-1;
	while(l<=r)
	{
		mid=(l+r)/2;
		if(a[mid]==item)
		{
			found=1;
			break;
		}
		else if(a[mid]<item)
		l=mid+1;
		else
		r=mid-1;
	}
	if(found)
	printf("\nThe element is found at position %d",mid+1);
	else
	printf("\nElement not found");
	return 0;
}

