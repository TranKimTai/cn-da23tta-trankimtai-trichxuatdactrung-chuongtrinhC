#include <stdio.h>
int main()
{
int A,i,j;
scanf("%d", &A);
if((A<=81) && (A%2==0 || A%3==0 || A%5==0 || A%7==0 || A==1))
	puts("Yes");
else
	puts("No");
}