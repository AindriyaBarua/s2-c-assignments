
#include<stdio.h>
int main()
{
	printf("\n char size =%ld bytes \n",sizeof(char));
	printf("\n short size =%ld bytes \n",sizeof(short));
	printf("\n integer size =%ld bytes \n",sizeof(int));
	printf("\n long size=%ld bytes \n",sizeof(long));
	printf("\n float size=%ld bytes \n",sizeof(float));
	printf("\n double size =%ld bytes \n",sizeof(double));
	printf("\n 1.55 size =%ld bytes \n",sizeof(1.55)); 
	printf("\n 1.55L size =%ld bytes \n",sizeof(1.55L));
	printf("\n HELLO sizee =%ld bytes \n",sizeof("HELLO"));
	return 0;
}

