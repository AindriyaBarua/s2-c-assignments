

#include <stdio.h>

int main(int argc, char **argv)
{
	char c;
	int co=0,a=0,e=0,i=0,o=0,u=0;
	while ((c=getchar())!=EOF)
	{
		if(c=='a')
		a++;
		else if(c=='e')
		e++;
		else if(c=='i')
		i++;
		else if(c=='o')
		o++;
		else if(c=='u')
		u++;
		else
		co++;
	}
	printf("No of 'a':%d \n",a);
	printf("No of 'e':%d \n",e);
	printf("No of 'i':%d \n",i);
	printf("No of 'o':%d \n",o);
	printf("No of 'u':%d \n",u);
	printf("No of consonants:%d \n",co);
	return 0;
}

