#define _CRT_SECURE_NO_WARNINGS
//#define DEBUG
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>

int main(void) {
#ifdef DEBUG
	printf("");
#endif

	int A, B, C, D;
	scanf("%d %d %d %d", &A, &B, &C, &D);

	int start, end;
	if (A < C) {
		start = C;
	}
	else {
		start = A;
	}
	if (B < D) {
		end = B;
	}
	else {
		end = D;
	}

	int ans;
	if (start > end) {
		ans = 0;
	}
	else {
		ans = end - start;
	}

	printf("%d\n", ans);
}
