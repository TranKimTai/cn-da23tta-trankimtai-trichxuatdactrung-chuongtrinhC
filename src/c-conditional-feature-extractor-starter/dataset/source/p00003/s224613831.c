#include<stdio.h>

int main(void) {
	int N, i;
	scanf("%d", &N);

	int a[1000], b[1000], c[1000];

	for (i = 0; i < N; i++) {
		scanf("%d&d&d", &a[i], &b[i], &c[i]);
	}

	for (i = 0; i < N; i++) {
		int A = a[i] * a[i];
		int B = b[i] * b[i];
		int C = c[i] * c[i];
		if (A + B == C || B + C == A || C + A == B) {
			printf("YES\n");
		}
		else
		{
			printf("NO\n");
		}
	}
	return 0;
}