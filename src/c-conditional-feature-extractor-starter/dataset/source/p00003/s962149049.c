#include <stdio.h>
#include <stdlib.h>

int
comp(const void *a, const void *b)
{
	return *(int *)a - *(int *)b;
}

int
main()
{
	int x;
	int num[3];
	int i;

	scanf("%d", &x);
	
	for(i=0; i<x; i++){
		scanf("%d %d %d", &num[0], &num[1], &num[2]);
	}

	qsort(num, 3 ,sizeof(int), comp);

	if(num[0]*num[0] + num[1]*num[1] == num[2]*num[2])
		printf("YES\n");
	else
		printf("NO\n");

	return(0);
}