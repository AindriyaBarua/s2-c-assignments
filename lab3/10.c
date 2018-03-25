/*program to check whether a character is vowel or not
  */
#include<stdio.h>
int main()
{
	char c;
	printf("Enter a Character:");
	scanf("%c",&c);
	switch(c)
	{
		case 'a':
		case 'A':
		case 'e':
		case 'E':
		case 'i':
		case 'I':
		case 'o':
		case 'O':
		case 'u':
		case 'U':printf("It is a vowel\t");
			 break;
		default:printf("It is a consonant\t");
	}
	return 0;
}
