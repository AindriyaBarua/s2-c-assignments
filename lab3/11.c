/*program to diplay day of week
  */
#include<stdio.h>
int main()
{
	int n;
	printf("Enter a no b/w 1 & 7");
	scanf("%d",&n);
	switch(n)
	{
		case 1:printf("Sunday\t");
			break;
		case 2:printf("Monday \t");
		       break;
		case 3:printf("Tuesday \t");
			break;
		case 4:printf("Wednesday \t");
			break;
		case 5:printf("Thursday  \t");
			break;
		case 6:printf("Friday \t");
			break;
		case 7:printf("Saturday \t");
			break;
		default:printf("invalid no\t");
	}
	return 0;
}
