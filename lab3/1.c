/*program to determine if a person if eligible forvoting
  */	
#include<stdio.h>
int main()
{
	int a;
	printf("enter age:");
	scanf("%d",&a);
	if(a>=18)
		printf("\nEligible to vote\n");
	else
		printf("\n Not eligible to vote\n");
	return 0;
}
