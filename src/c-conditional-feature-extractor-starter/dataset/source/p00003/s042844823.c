#include <stdio.h>

int main()
{
	int a, b, c, i, N;
	int tri;
	for (;;){
		scanf("%d", &N);
		if (1 <= N&&N <= 1000)
			break;
	}
	for (i = 1; i <= N;){
		scanf("%d %d %d", &a, &b, &c);
		if (1 <= a, b, c <= 1000){
			if (a*a == (b*b + c*c))
				tri = 1;
			else if (b*b == (c*c + a*a))
				tri = 1;
			else if (c*c == (a*a + b*b))
				tri = 1;
			else
				tri = 0;
			if (tri == 1)
				printf("YES\n");
			else
				printf("NO\n");
			i++;
		}
	}
	return 0;
}