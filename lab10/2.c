


#include <stdio.h>
typedef struct book
{
	int book_id;
	char book_name[20];
	char author[20];
	int price;
}bk;
void print(bk b)
{
	printf("Book id:%d\n",b.book_id);
	printf("Book name:%s\n",b.book_name);
	printf("Author:%s\n",b.author);
	printf("Price:%d\n",b.price);
}
int main(int argc, char **argv)
{
	bk b;
	printf("Enter details:");
	scanf("%d",&b.book_id);
	scanf(" %[^\n]",b.book_name);
	scanf(" %[^\n]",b.author);
	scanf("%d",&b.price);
	print(b);
	return 0;
}

