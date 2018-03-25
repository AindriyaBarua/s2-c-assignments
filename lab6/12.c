


#include <stdio.h>

int main(int argc, char **argv)
{
	int n,item,found=0,pos=0;
	printf("Enter n\n");
	scanf("%d",&n);
	int a[n];
	printf("Enter the array");
	for(int i=0;i<n;i++)
	scanf("%d",&a[i]);
	printf("enter item to be searched");
	scanf("%d",&item);
	for(int i=0;i<n;i++)
	{
		if(a[i]==item)
		{
			found=1;
			pos=i;
			break;
		}
	}
	if(found)
	printf("\nThe element is found at position %d",pos+1);
	else
	printf("\nElement not found");
	return 0;
}

