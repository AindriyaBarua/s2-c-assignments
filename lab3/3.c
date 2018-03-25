/*program to test a no	
  */	
#include<stdio.h>
int main()
{
	int a;
	printf("enter a no:");
	scanf("%d",&a);	
	if(a>0)		
		printf("\nA is Positive \n");	
	else if(a==0)
		printf("\nA is zero\n");
	else
		printf("\n A is negative\n");
	return 0;
}
