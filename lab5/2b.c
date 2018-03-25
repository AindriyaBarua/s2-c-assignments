include <stdio.h>

int main(int argc, char **argv)
{
	int n,t,sum=0;
	printf("Enter n\t");
	scanf("%d",&n);
	t=n;
	do
	{
		sum=sum+t;
		t--;
	}while(t>0);
	printf("sum  =%d\n",sum);
	return 0;
}

