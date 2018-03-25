
#include <stdio.h>
#include <math.h>
#include <ctype.h>
int main(int argc, char **argv)
{
	int h,d=0;
	scanf("%x",&h);
	for(int i=0;h!=0;i++)
	{   
		if(isdigit(h%10)!=0)
		switch(h%10)
		{
			case 'A':d=d+(10*pow(16,i));
						break;
			case 'B':d=d+(11*pow(16,i));
						break;
			case 'C':d=d+(12*pow(16,i));
						break;
			case 'D':d=d+(13*pow(16,i));
						break;
			case 'E':d=d+(14*pow(16,i));
						break;
			case 'F':d=d+(15*pow(16,i));
						break;
		}
		else 
		   d=d+((h%10)*pow(16,i));	
		h=h/10;
	}
	printf("%d",d);
	return 0;
}

