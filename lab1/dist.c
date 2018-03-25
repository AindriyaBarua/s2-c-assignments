/*program to calculate distance between 2 points
  */
#include<stdio.h>
#include<math.h>
int main()
{
	float x1,x2,y1,y2,d,a;
	printf("enter x1,y1 ");
	scanf("%f",&x1);
	scanf("%f",&y1);
	printf("enter x2,y2 ");
	scanf("%f",&x2);
	scanf("%f",&y2);
	a=pow((x2-x1),2)+pow((y2-y1),2);
        d=sqrt(a);
	printf("%f",d);	
	return 0;
}
