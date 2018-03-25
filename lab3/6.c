/*program to calculate slary and bonus
  */	
#include<stdio.h>
int main()
{	
	int s,b;
	char g;
	printf("Enter Gender and salary:");
	scanf("%c%d",&g,&s);
	if(g=='m')
	{
		if(s<=10000)
			b=(7*s)/100;
		else
			b=(5*s)/100;
	}
	if(g=='f')
	{
		if(s<=10000)
			b=(12*s)/100;
		else
			b=(10*s)/100;
	}
	s=s+b;
	printf("salary=%d",s);	
	return 0;
}
