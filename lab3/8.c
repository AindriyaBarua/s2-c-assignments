/*program to calculate grades
  */
#include<stdio.h>
int main()
{
	int m,c=0;
	printf("Enter mark:");
	scanf("%d",&m);	
	if(m>=95&&m<=100&&c++)
	{	
		printf("Grade:A+ \n");
	}
	else if(m>=90&&m<=94&&c++)
	{
		printf("Grade:A \n ");
	}
	else if(m>=80&&m<=89&&c++)
	{
		printf("Grade:B+\n");
	}
	else if(m>=75&&m<=79&&c++)
	{
		printf("Grade:B\n");
	}
	else if(m>=70&&m<=74&&c++)
	{
		printf("Grade:C+\n");
	}
	else if(m>=60&&m<=69&&c++)
	{		
		printf("Grade:C\n");
	}
	else if(m>=50&&m<=59&&c++)
	{	
		printf("Grade:D\n");
	}
	else if(m>=40&&m<=49&&c++)
	{
		printf("Grade:P\n");
	}
	else if(m<40&&c++)
	{
		printf("Grade:F\n");
	}
	printf("No of conditional exp evaluated:%d",c);
	return 0;
}
	
