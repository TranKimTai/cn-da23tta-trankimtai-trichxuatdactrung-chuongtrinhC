#include <stdio.h>

int main(void)
{
	int a, b;		//Value a, b.

	scanf("%d %d", &a, &b);
	printf("a ");
	if(a < b)
		printf("< ");
	if(a > b)
		printf("> ");
	if(a == b)
		printf("== ");
	printf("b\n");

	return (0);
}

