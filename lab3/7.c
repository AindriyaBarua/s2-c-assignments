/*program to calculate average marks
  */	
#include<stdio.h>
int main()
{	
	int m1,m2,m3,m4,total,avg;
	printf("Enter 4 marks:");
	scanf("%d%d%d%d",&m1,&m2,&m3,&m4);
	total=m1+m2+m3+m4;
	avg=total/4;
	printf("Total:%d Average:%d\t",total,avg);
	return 0;
}
