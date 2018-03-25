

#include <stdio.h>
void read_array(int *array,int n)
{
	printf("Enter the array:");
	for(int i=0;i<n;i++)
	scanf("%d",&array[i]);
}
void disp_array(int *array,int n)
{	printf("\narray is:");
	for(int i=0;i<n;i++)
	printf("%d ",array[i]);
}
void find_small(int *array,int n,int *small,int *pos)
{
	*small=array[0];
	for(int i=0;i<n;i++)
	{
		if(*small>array[i])
		{
			*small=array[i];
			*pos=i;
		}
	}
}
int main(int argc, char **argv)
{
	int n,small,pos;
	printf("Enter n:");
	scanf("%d",&n);
	int array[n];
	read_array(array,n);
	disp_array(array,n);
	find_small(array,n,&small,&pos);
	printf("Small:%d  Position:%d",small,pos);
	return 0;
}

