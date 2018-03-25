

#include <stdio.h>
void MinMax(double *data,int length,double *retmin,double *retmax)
{
	 
	*retmin=data[0];
	*retmax=data[0];
	for(int i=0;i<length;i++)
	{
		if(*retmin>data[i])
		*retmin=data[i];
		if(*retmax<data[i])
		*retmax=data[i];
	}
}
int main(int argc, char **argv)
{
	int n;
	printf("enter n\n");
	scanf("%d",&n);
	double data[n],min,max;
	printf("Enter the array");
	for(int i=0;i<n;i++)
	scanf("%lf",&data[i]);
	MinMax(data,n,&min,&max);
	printf("Max is:%f Min is:%f",max,min);
	 
	return 0;
}

