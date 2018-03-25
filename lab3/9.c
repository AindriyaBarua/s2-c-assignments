/*program to calculate bill
  */
#include<stdio.h>
int main()
{
	int u;
	float am;
	printf("Enter No of units:");
	scanf("%d",&u);
	if(u<=150)
		am=3*u;
	else if(u>150&&u<=350)
		am=100+(u-150)*3.75;
	else if(u>350&&u<=450)
		am=250+(u-350)*4;
	else if(u>450&&u<=600)
		am=300+(u-450)*4.25;
	else if(u>600)
		am=400+(u-600)*5;
	printf("Amount:%d\t",am);
	return 0;
}

