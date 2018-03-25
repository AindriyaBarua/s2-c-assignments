

#include <stdio.h>

int main(int argc, char **argv)
{
	int y=1900;
	while(y<=2100)
	{
		if(y%400==0)
		printf("\t %d ",y);
		else if(y%4==0&&y%100!=0)
		printf("\t %d ",y);
		y=y+1;
	}
	return 0;
}

