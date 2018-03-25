
#include <stdio.h>

int main(int argc, char **argv)
{
	int x,y,power=1;
	printf("Enter x,y:");
	scanf("%d%d",&x,&y);
	while(y!=0)
	{
		power=power*x;
		y--;
	}
	printf("Power is :%d",power);
	return 0;
}

