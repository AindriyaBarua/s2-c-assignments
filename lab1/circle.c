/*Program to compute area,perimeter of a circle
  */
#include<stdio.h>
#define PI 3.14
int main()
{
	float r,a,p;
	printf("enter radius");
	scanf("%f",&r);
	a=PI*r*r;
	p=2*PI*r;
	printf("area:%f \t perimeter=%f",a,p);
	return 0;
}



