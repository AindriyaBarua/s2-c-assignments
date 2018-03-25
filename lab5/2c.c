

#include <stdio.h>

int main(int argc, char **argv)
{
	int n,sum=0;
	printf("Enter n\t");
	scanf("%d",&n);
	for(int t=n;t>0;t--)
	sum=sum+t;
	printf("sum  =%d\n",sum);
	return 0;
}

