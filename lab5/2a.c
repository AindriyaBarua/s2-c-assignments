
#include <stdio.h>

int main(int argc, char **argv)
{
	int n,t,sum=0;
	printf("Enter n\t");
	scanf("%d",&n);
	t=n;
	while(t>0)
	{
		sum=sum+t;
		t--;
	}
	printf("sum  =%d\n",sum);
	return 0;
}

