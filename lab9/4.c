

#include <stdio.h>
void input(int *small,int *middle,int *large)
{
	int a,b,c;
	printf("Enter three characters");
	scanf("%d%d%d",&a,&b,&c);
	*small=a<b?(a<c?a:c):(b<c?b:c);
	*large=a>b?(a>c?a:c):(b>c?b:c);
	if((a<b&&a>c)||(a>b&&a<c))
	*middle=a;
	else if((b<a&&b>c)||(b>a&&b<c))
	*middle=b;
	else
	*middle=c;
	
   }
int main(int argc, char **argv)
{
	int a,b,c;
	
	input(&a,&b,&c);
	printf("Small=%d middle=%d large=%d ",a,b,c);
	return 0;
}

