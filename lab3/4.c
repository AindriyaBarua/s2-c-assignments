/*program to find sum and average
  */	
#include<stdio.h>
int main()
{
	int a,b,c,s=0,avg=0;
	printf("Enter 3 no:");
	scanf("%d%d%d",&a,&b,&c);
	s=a+b+c;	
	avg=s/3;
	printf("\nSum:%d Average:%d",s,avg);
	if(s>=100&&s<=200)
		printf("\nSum is in the allowed range\n");
	else
		printf("\n Sum has exceeded the range\n");
	return 0;
}
