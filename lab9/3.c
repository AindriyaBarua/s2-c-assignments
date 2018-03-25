
#include <stdio.h>
void CharSwap(char *cp1,char *cp2)
{
	char temp;
	temp=*cp1;
	*cp1=*cp2;
	*cp2=temp;
}
int main(int argc, char **argv)
{
	char c1,c2;
	printf("Enter two characters\n");
	scanf("%c ",&c1);
	scanf("%c",&c2);
	printf("Before swapping \nc1:%c c2:%c\n ",c1,c2);
	CharSwap(&c1,&c2);
	printf("After swapping\nc1:%c c2:%c\n",c1,c2);
	return 0;
}

