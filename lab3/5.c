/*program to calculate parking charges
  */	
#include<stdio.h>
int main()
{	
	char c;
	int h,amount;
	printf("Enter vehicle type and no of hours:");
	scanf("%c%d",&c,&h);
	if(c=='c')
		amount=25*h;
	else if(c=='b')
		amount=50*h;
	else if(c=='s')
		amount=10*h;
	printf("Amount=%d \n",amount);	
	return 0;
}

