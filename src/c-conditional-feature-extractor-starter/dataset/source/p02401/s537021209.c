#include <stdio.h>
char *read(long *L, long *R, char *ch)
{
	scanf("%d %c %d", L,ch,R);
	return ch;
}

int main(void)
{
	char Op;
	long lhs, rhs;
	while ('?' != * read(&lhs,&rhs,&Op)) {
		if ( Op == '+')     printf("%ld\n", lhs + rhs);
		else if (Op == '-') printf("%ld\n", lhs - rhs);
		else if (Op == '*') printf("%ld\n", lhs * rhs);
		else                printf("%ld\n", lhs / rhs);
	}
	
	return 0;
}